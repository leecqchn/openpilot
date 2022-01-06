#!/usr/bin/env python3
import time
import requests
import os
import socket
import struct
def get_time():
    re = requests.get('https://www.baidu.com')
    get_time = re.headers['date']                                   # 从百度返回的文件头获取时间
    real_time = time.strptime(get_time[5:25], "%d %b %Y %H:%M:%S")  # 获取当前时间
    local_time = time.localtime(time.mktime(real_time) + 8*3600)    # 转北京时间
    real_time = time.strftime("%m/%d/%Y %H:%M:%S", local_time)      # 转换时间格式
    return real_time

def get_time_from_stm32():
    s = struct.Struct('<IIIIII')
    server = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    server.bind( ('192.168.5.11', 8899))
    time.sleep(0.1)
    data, addr= server.recvfrom(1024)
    time_arr = list(s.unpack(data))
    time_arr = [str(i) for i in time_arr]
    real_time = time_arr[0] + '/' + time_arr[1] + '/' + time_arr[2] + ' ' + \
        time_arr[3] + ':' + time_arr[4] + ':' + time_arr[5]
    print(real_time)
    return real_time

def set_time():
    ### update system time
    real_time = get_time_from_stm32()                      # 从网络获取获取当前时间
    cmd = f'date -s "{real_time}"'   # 设置时间并写入bios
    os.system(cmd)
    '''
    ### update realdata temp folder
    cmd = "python /storage/emulated/0/realdata/realdata_update.py"
    os.system(cmd)
    ### start dashcam webserver
    cmd = "nohup python /data/openpilot/selfdrive/controls/saicmotor/web_server.py & "
    os.system(cmd)
    '''

def zs11_start():
  ### settimg time
  try:
    set_time()
  except:
    print('set time failed due to offline')
  ### update realdata temp folder
  cmd = "python /data/openpilot/selfdrive/controls/saicmotor/realdata_update.py"
  os.system(cmd)
  ### start dashcam webserver
  cmd = "nohup python /data/openpilot/selfdrive/controls/saicmotor/web_server.py & "
  os.system(cmd)

