import re
import sys
import copy
sys.path.append("..")
filepath = "/data/openpilot/selfdrive/controls/saicmotor/zs11_build/include/app.h"

def get_text():
    with open(filepath, "r") as h:
        text = h.read()
    return text
def search_sign(searchtype = 'all'):
	text = get_text()
	if searchtype == 'k':
		b = re.findall("extern real.* k_.*;|extern int.* k_.*;|extern uint.* k_.*;|extern boolean_T .*k_.*;", text)
	elif searchtype == 'm':
		b = re.findall("extern real.* m_.*;|extern int.* m_.*;|extern uint.* m_.*;|extern boolean_T .*m_.*;", text)
	elif searchtype == 'P':
		b = re.findall("extern real.* P_.*;|extern int.* P_.*;|extern uint.* P_.*;|extern boolean_T .*P_.*;", text)
	else:
		b = re.findall("extern real.*;|extern int.*;|extern uint.*;|extern boolean_T .*;", text)
	sign_list = b
	return sign_list

def delete_useless_str(b):
	# b = [str(j).replace('extern\s.*T\s|\[[0-9]*]', '') for j in b]
	b = [str(j).replace('extern real32_T', '') for j in b]
	b = [str(j).replace('extern real64_T', '') for j in b]
	b = [str(j).replace('extern int8_T', '') for j in b]
	b = [str(j).replace('extern int16_T', '') for j in b]
	b = [str(j).replace('extern int32_T', '') for j in b]
	b = [str(j).replace('extern uint8_T', '') for j in b]
	b = [str(j).replace('extern uint16_T', '') for j in b]
	b = [str(j).replace('extern uint32_T', '') for j in b]
	b = [str(j).replace('extern boolean_T', '') for j in b]
	b = [str(j).replace('extern boolean_T', '') for j in b]
	b = [str(j).lstrip() for j in b]
	a = [str(j).rstrip(';') for j in b]
	return a
	# return name_list
def get_list(searchtype = 'all'):
	search = search_sign(searchtype)
	sign_list = delete_useless_str(search)
	return sign_list
def get_lists():
	list1 = get_list()
	list2 = [0 for i in range(len(list1))]
	list3 = [0 for i in range(len(list1))]
	counter = 0
	counter1 = 0
	for i in list1:
		if "[" in i:
			list2[counter] = i
			counter = counter + 1
		else:
			list3[counter1] = i
			counter1 = counter1 + 1
	list2 = list2[0:counter - 1]
	list3 = list3[0:counter1 - 1]

	return list2, list3

print(get_list().join())
