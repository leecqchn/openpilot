#!/usr/bin/env python3
import time
import zmq
from cffi import FFI
from cereal import car
from common.params import Params
from common.realtime import sec_since_boot, config_realtime_process, Priority, Ratekeeper, DT_CTRL
from common.profiler import Profiler
from flask import Flask, render_template, request, send_from_directory, abort
import os
os.chdir('/data/media/0/')
root_dir = '/data/media/0/'
app = Flask(__name__)


def getfile():
    print(os.getcwd().replace('\\', '/'))
    path1 = os.getcwd().replace('\\', '/') + '/realdata'
    path2 = os.getcwd().replace('\\', '/')
    # 跳转目录 跳转到下载文件的目录，获得下载文件目录里面的list之后，然后再跳转出来
    # 这个跳转的步骤是为了获取到upload_files目录下的文件的名字，然后把它放进f_list中
    os.chdir(path1)
    f_list = os.listdir()
    os.chdir(path2)
    print(os.getcwd().replace('\\', '/'))
    return f_list


def is_Have_file(filename):
    print(os.getcwd().replace('\\', '/'))
    path1 = os.getcwd().replace('\\', '/') + '/realdata'
    path2 = os.getcwd().replace('\\', '/')
    os.chdir(path1)
    flag = os.path.isfile(filename)
    os.chdir(path2)
    print(os.getcwd().replace('\\', '/'))
    return flag


@app.route('/')
def home():
    return render_template('home.html')


@app.route('/upload')
def upload_file():
    return render_template('upload.html')


@app.route('/uploader', methods=['GET', 'POST'])
def upload_success():
    if request.method == 'POST':
        f = request.files['file']
        f.save('realdata/' + f.filename)
        return render_template('upload_success.html', filename=f.filename)


# 显示下载文件的界面
@app.route('/download_page', methods=['GET'])
def download_page():
    print("!!!: ", os.getcwd())
    f_list = getfile()
    return render_template('download_page.html', fl=f_list)


# 下载要下载的文件，要下载的文件是通过get方法来传递的
@app.route('/download_file', methods=['GET'])
def download_file():
    if request.method == 'GET':
        download_filename = request.args.get('filename')
        f_list = getfile()
        print(f_list)
        if True:#is_Have_file(download_filename):
            srcVideo = root_dir + 'realdata/' + download_filename+ '/' + 'fcamera.hevc'
            destVideo= root_dir + 'realdata/' + download_filename+ '/' + download_filename+ '_fcamera.mp4'
            os.system("ffmpeg -i {srcVideo} -y  -acodec copy -vcodec copy -f mp4    {destVideo}".format(srcVideo=srcVideo, destVideo=destVideo) )
            return send_from_directory(root_dir + 'realdata/' + download_filename+ '/' , download_filename+'_fcamera.mp4', as_attachment=True)
        else:
            abort(404)


if __name__ == '__main__':
    app.run(host='0.0.0.0', port=8890)
