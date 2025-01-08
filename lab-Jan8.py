import random
n = int(input("Sizeof list : "))
# print(f"Size of list: {n}")
list = []

for i in range(n):
    list.append(input(f"Enter element {i}: "))

random.shuffle(list)

m = int(input("Enter times to print randomly: "))
for i in range(m):
    random.shuffle(list)
    print(list)

sam = int(input("Enter no. of samples: "))

print(random.sample(list, sam))


start = int(input("Enter initial point of random: "))
print( f"Random number from {start}: {random.randrange(start=start, step=4)} " )