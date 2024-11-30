# Implement ternanry operators in python and find largest from 3 integers value


list = [11, 20, 400]

if list[0] > list[1] and list[0] > list[2]:
    largest = list[0]
elif list[1] > list[2]:
    largest = list[1]
else:
    largest = list[2]

print(f"Largest: {largest}")


large = list[0] if (list[0] > list[1] and list[0] > list[2]) else (list[1] if (list[1] > list[2]) else list[2])

print(f"Largest with ternary logic: {large}")


# Implememnt Flyod's triangle