import os, glob, time
import shutil 
def search_all_files(path, reverse=True):
 return sorted(glob.glob(os.path.join(path, '*')), key=lambda x: time.strftime("%Y-%m-%d %H:%M:%S", time.localtime(os.path.getctime(x))), reverse=reverse)


def update():
  BASE_DIR = '/data/media/0/realdata/'
  a =search_all_files(BASE_DIR)

  hold_data = a[:300]

  hold_data = hold_data + [BASE_DIR+'boot']
  hold_data = hold_data + [BASE_DIR+'realdata_update.py']

  print(hold_data)
  for f in a:
    print(f)
    if f not in hold_data:
      shutil.rmtree(f)

update()
