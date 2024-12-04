# Program to insert roll no., student name pair into a dictionary by considering roil no. as key and student name as value


dict = {} # empty dict

while True:
    roll_no = input("Enter roll no. (stop to stop): ")

    if roll_no.lower() == 'stop':
        break

    name = input("Enter you name: ")

    dict[roll_no] = name


print("Student info :->")
for a in dict.keys():
    print(f"Roll No: {a} \t Name: {dict[a]}")

with open("file.txt" , 'w') as file:
    file.write(str(dict))
file.append

file.close() # avoid error

