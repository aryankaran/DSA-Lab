'''
# list within dictionary

dict = {} # empty dict
for stream in {"EIE", "IT"}:
    dict[stream] = {}

while True:
    roll_no = input("Enter roll no. (stop to stop): ")

    if roll_no.lower() == 'stop':
        break

    name = input("Enter you name: ")
    stream = input("Stream: ")
    sex = input("sex: ")
    age = input("Age: ")

    dict[stream].append({"Name":name, "roll_no":roll_no, "sex":sex, "age":age})

'''

'''
# Dictionary within list

list = []

while True:
    roll_no = input("Enter roll no. (stop to stop): ")

    if roll_no.lower() == 'stop':
        break

    name = input("Enter you name: ")
    stream = input("Stream: ")
    sex = input("sex: ")
    age = input("Age: ")

    list.append({"Name":name, "roll_no":roll_no, "sex":sex, "age":age})


print(list)

'''

'''
# Dictionary within dictionary


d = {key : {dcit}, key2 : {dict2}}
'''


# Write a python program to store the database of CSE, IT, ECE, EIE students by correspomding stream  as a key and access all students

dict = {"CSE": dict_cse, "IT": dict_it}