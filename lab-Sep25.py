# Write a python program to store all student name , usig list and print it


l = range(4, 12)  # using range
print("Range :", list(l), "\n")
l = []

# append

l.append(3)
l.append(4)
l.append(0)
l.append(1)
l.append(2)
print("After appending:", l)

l.sort()
print("Sorted:", l)

for i in range(2, 10):
    print("Hello:", i)

print("Reversed:", l)
l.reverse()

print("Length of list: ", len(l))
print("3x list:", l * 3)

del l[2]
print("After removing 2nd element:", l)


names = ["aRyan", "kaRan"]
print(names[0].title())

# names[0].title()

# Indexing
print("Backward index -3 is:", l[-3], " ;  List:", l)

# Write a python progream to insert 20 elements, and update , append , remove and insert the elements

for i in range(20):
    name[i] = input(print(f"Enter name of student {i+1}: "))
    # name[i] = input()

# print(name)
