import statistics as stat
import sys

list = []

for i in range(5, 340, 32):
    list.append(i)

# list=list*3
print(list)
for i in list:
    print(i, end=' ')

print()

print("Mean:", stat.mean(list))
print("Median:", stat.median(list))
print("Mode:", stat.mode(list))
print("Standard Deviation:", stat.stdev(list))
print("Variance:", stat.variance(list))


# list slicing

print(list)
print(list[3:7])
print(list[3:-3])