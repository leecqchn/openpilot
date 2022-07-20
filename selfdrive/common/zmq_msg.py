#!/usr/bin/env python3
import zmq
import threading
import time



### server list 
server_dict = {'ch_can':   8201, 
               'pv_can':   8202,
               'send_can': 8203,
               'control':  8204,
               'cam':      8228,
               'calibrate_request': 8301,
               'read_request': 8302,
               'calibrate_response': 8303,
               'log_request': 8304,
}


def new_message(service=None, size=None):
  dat = log.Event.new_message()
  dat.logMonoTime = time.time()
  dat.valid = True
  if service is not None:
    if size is None:
      dat.init(service)
    else:
      dat.init(service, size)
  return dat


def create_socket_pub(port=5555):
    context = zmq.Context()
    socket = context.socket(zmq.PUB)
    socket.bind("tcp://*:" + str(port))   #多个客户端连接同样的地址
    return socket

def create_socket_sub(port=5555):
    context = zmq.Context()
    socket = context.socket(zmq.SUB)
    socket.setsockopt(zmq.CONFLATE, True)  # 接收last消息
    socket.setsockopt(zmq.SUBSCRIBE,''.encode('utf-8'))  # 接收所有消息

    socket.connect("tcp://localhost:" + str(port))   #多个客户端连接同样的地址
    return socket



class zmq_sub_thread(threading.Thread):
    def __init__(self, port=8001, isDict=False):
        # 重写threading.Thread的__init__方法时，确保在所有操作之前先调用threading.Thread.__init__方法
        super().__init__()
        self.socket = create_socket_sub(port=port)
        self.data = None
        self._running = True
        self.isDict = isDict
        self.rolllingCount = 0
        self.valid = False

    def run(self):
        while self._running:
            data = self.socket.recv()

            if self.isDict:
                self.data = eval(data.decode('utf-8'))
            else:
                self.data = data
            self.rolllingCount +=1
            if self.rolllingCount >15 :
                self.rolllingCount = 0

    def terminate(self):
        self._running = False





class SubMaster():
    def __init__(self, server_list=[], poller_list=[], isDict=False):
        self.socks = {}
        self.threads = {}
        self.data = {}
        self.poller = zmq.Poller()
        self.server_list = server_list
        self.poller_list = poller_list

        #backend threads for non_block server
        for server in server_list:
            self.threads[server] = create_socket_sub(port=server_dict[server])
            self.data[server] = None

        #poller blocking server
        for server in poller_list:
            self.socks[server] = create_socket_sub(port=server_dict[server])
            self.poller.register(self.socks[server], zmq.POLLIN)
            self.data[server] = None

        self.ss = None

    def alive_check(self, check_time=0.2):
        tmp_rc = {}
        for server in self.server_list:
            tmp_rc[server] = self.threads[server].rolllingCount

        while True:
            for server in self.server_list:
                if tmp_rc[server] == self.threads[server].rolllingCount:
                    self.threads[server].valid = False
                else:
                    self.threads[server].valid = True

                tmp_rc[server] = self.threads[server].rolllingCount
            time.sleep(check_time)



    # def start(self):
    #     #print(self.threads)
    #     for key, value in self.threads.items():
    #         value.setDaemon(True)
    #         value.start()
    #     thread_check = threading.Thread(target=self.alive_check)
    #     thread_check.setDaemon(True)
    #     thread_check.start()

    def stop(self):
        for key, value in self.threads:
            value.terminate()

    def update(self, timeout=1, isDict=True):
        if self.poller_list:
            self.ss = dict(self.poller.poll(timeout=timeout))
        for key, value in self.threads.items():
            try:
                data = value.recv(zmq.DONTWAIT)
                if isDict:
                    self.data[key] = eval(data.decode('utf-8'))
                else:
                    self.data[key] = data
            except:
                pass


    def updated(self, server):

        if self.ss.get(self.socks[server]) == zmq.POLLIN:
            message = self.socks[server].recv()

            self.data[server] = message
            
            return True
        else:
            return False





class PubMaster():
    def __init__(self, server_list=[]):
        self.pub_sock = {}
        for server in server_list:

            print(server)
            self.pub_sock[server] = create_socket_pub(port=server_dict[server])
            self.pub_sock[server].setsockopt(zmq.SNDHWM, 20)


    def send(self, server, pm_data, isBytes = True):
        #print(self.pub_sock)
        if not isBytes:
            self.pub_sock[server].send_string(pm_data, zmq.DONTWAIT) 
        else:
            self.pub_sock[server].send(pm_data, zmq.DONTWAIT) 


