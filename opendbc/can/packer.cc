#include <cassert>
#include <utility>
#include <algorithm>
#include <map>
#include <cmath>

#include "common.h"

#define WARN printf

// this is the same as read_u64_le, but uses uint64_t as in/out
uint64_t ReverseBytes(uint64_t x) {
  return ((x & 0xff00000000000000ull) >> 56) |
          ((x & 0x00ff000000000000ull) >> 40) |
          ((x & 0x0000ff0000000000ull) >> 24) |
          ((x & 0x000000ff00000000ull) >> 8) |
          ((x & 0x00000000ff000000ull) << 8) |
          ((x & 0x0000000000ff0000ull) << 24) |
          ((x & 0x000000000000ff00ull) << 40) |
          ((x & 0x00000000000000ffull) << 56);
}

static uint64_t set_value(uint64_t ret, const Signal& sig, int64_t ival) {
  int shift = sig.is_little_endian? sig.b1 : sig.bo;
  uint64_t mask = ((1ULL << sig.b2)-1) << shift;
  uint64_t dat = (ival & ((1ULL << sig.b2)-1)) << shift;
  if (sig.is_little_endian) {
    dat = ReverseBytes(dat);
    mask = ReverseBytes(mask);
  }
  ret &= ~mask;
  ret |= dat;
  return ret;
}


static uint64_t  get_value(uint64_t x, uint8_t start_bit, uint8_t length) {
    // mask value
    uint64_t dat = 1;
    for ( int i=0; i< length; i++) {
      dat  = dat*2;
    }
    dat -= 1;

    // caculate start index with reverse order
    uint8_t idx  = start_bit / 8 ;
    uint8_t offset = start_bit - idx * 8 ;

    uint8_t idx_ = idx * 8 + 8 - offset;
    idx_ = idx_-1;


    //
    uint64_t k = ( (  x << (idx_-length+1) ) >> (idx_-length+1) )  >> (63 - idx_);

    //uint64_t k = ( x >> (63 - idx_) )  & dat;


    return k;


}


static uint64_t get_PV_check(uint64_t x) {

  uint64_t x_rev = x;//ReverseBytes(x);

  uint64_t PV_data = 0;

  PV_data += 4096 * get_value(x_rev, 35, 2);
  PV_data += 2 * get_value(x_rev, 8, 11);
  PV_data += 1 * get_value(x_rev, 3, 1);
  PV_data += get_value(x_rev, 4, 4);
  PV_data = PV_data ^ 0x3fffull;
  PV_data +=1;

  return PV_data;

}



CANPacker::CANPacker(const std::string& dbc_name) {
  dbc = dbc_lookup(dbc_name);
  assert(dbc);

  for (int i=0; i<dbc->num_msgs; i++) {
    const Msg* msg = &dbc->msgs[i];
    message_lookup[msg->address] = *msg;
    for (int j=0; j<msg->num_sigs; j++) {
      const Signal* sig = &msg->sigs[j];
      signal_lookup[std::make_pair(msg->address, std::string(sig->name))] = *sig;
    }
  }
  init_crc_lookup_tables();
}

uint64_t CANPacker::pack(uint32_t address, const std::vector<SignalPackValue> &signals, int counter) {
  uint64_t ret = 0;
  for (const auto& sigval : signals) {
    double value = sigval.value;

    auto sig_it = signal_lookup.find(std::make_pair(address, sigval.name));
    if (sig_it == signal_lookup.end()) {
      WARN("undefined signal %s - %d\n", sigval.name.c_str(), address);
      continue;
    }
    const auto& sig = sig_it->second;

    int64_t ival = (int64_t)(round((value - sig.offset) / sig.factor));
    if (ival < 0) {
      ival = (1ULL << sig.b2) + ival;
    }

    ret = set_value(ret, sig, ival);
  }

  // deal with message address with 509, generate pv checksum, only use for saicmotor_mgzs
  if (address == 509 ) {
    uint64_t pv = 0;
    /*
    WARN("ret data is %lu.\n", ret);
    WARN("byte0 is %llu.\n", (ret & 0x00000000000000ffull));
    WARN("byte1 is %llu.\n", (ret & 0x000000000000ff00ull) >> 8);
    WARN("byte2 is %llu.\n", (ret & 0x0000000000ff0000ull) >> 16);
    WARN("byte3 is %llu.\n", (ret & 0x00000000ff000000ull) >> 24);
    WARN("byte4 is %llu.\n", (ret & 0x000000ff00000000ull) >> 32);
    WARN("byte5 is %llu.\n", (ret & 0x0000ff0000000000ull) >> 40);
    WARN("byte6 is %llu.\n", (ret & 0x00ff000000000000ull) >> 48);
    WARN("byte7 is %llu.\n", (ret & 0xff00000000000000ull) >> 56);
    */
    pv = get_PV_check(ret);
    //WARN("pv data is %lu.\n", pv);

    auto sig_it = signal_lookup.find(std::make_pair(address, std::string("LKAReqToqPVHSC2")));

    if (sig_it == signal_lookup.end()) {
      WARN("undefined signal %s - %d\n", std::string("LKAReqToqPVHSC2").c_str(), address);
    } else {
      const auto& sig = sig_it->second;
      ret = set_value(ret, sig, pv);
    }

  }


  if (counter >= 0){
    auto sig_it = signal_lookup.find(std::make_pair(address, "COUNTER"));
    if (sig_it == signal_lookup.end()) {
      WARN("COUNTER not defined\n");
      return ret;
    }
    const auto& sig = sig_it->second;

    if ((sig.type != SignalType::HONDA_COUNTER) && (sig.type != SignalType::VOLKSWAGEN_COUNTER)) {
      WARN("COUNTER signal type not valid\n");
    }

    ret = set_value(ret, sig, counter);
  }

  auto sig_it_checksum = signal_lookup.find(std::make_pair(address, "CHECKSUM"));
  if (sig_it_checksum != signal_lookup.end()) {
    const auto& sig = sig_it_checksum->second;
    if (sig.type == SignalType::HONDA_CHECKSUM) {
      unsigned int chksm = honda_checksum(address, ret, message_lookup[address].size);
      ret = set_value(ret, sig, chksm);
    } else if (sig.type == SignalType::TOYOTA_CHECKSUM) {
      unsigned int chksm = toyota_checksum(address, ret, message_lookup[address].size);
      ret = set_value(ret, sig, chksm);
    } else if (sig.type == SignalType::VOLKSWAGEN_CHECKSUM) {
      // FIXME: Hackish fix for an endianness issue. The message is in reverse byte order
      // until later in the pack process. Checksums can be run backwards, CRCs not so much.
      // The correct fix is unclear but this works for the moment.
      unsigned int chksm = volkswagen_crc(address, ReverseBytes(ret), message_lookup[address].size);
      ret = set_value(ret, sig, chksm);
    } else if (sig.type == SignalType::SUBARU_CHECKSUM) {
      unsigned int chksm = subaru_checksum(address, ret, message_lookup[address].size);
      ret = set_value(ret, sig, chksm);
    } else if (sig.type == SignalType::CHRYSLER_CHECKSUM) {
      unsigned int chksm = chrysler_checksum(address, ReverseBytes(ret), message_lookup[address].size);
      ret = set_value(ret, sig, chksm);
    } else {
      //WARN("CHECKSUM signal type not valid\n");
    }
  }

  return ret;
}

Msg* CANPacker::lookup_message(uint32_t address) {
  return &message_lookup[address];
}
