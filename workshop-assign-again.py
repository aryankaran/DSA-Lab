# 3-4. Guest List
guests = [
    "Robert Downey Jr.", "Lia Sadii", "Scarlett Johansson", "Chris Hemsworth", 
    "Benedict Cumberbatch", "Tom Holland", "Mark Ruffalo", "Chris Evans",
    "Elizabeth Olsen", "Paul Hemsworth", "Chadwick Boseman", "Brie Larson"
]

for guest in guests:
    print(f"Dinner invite, {guest}.")

# 3-5. Changing Guest List
print("\nEinstein can't make it.\n")
guests[0] = "da Vinci"
for guest in guests:
    print(f"Dinner invite, {guest}.")

# 3-6. More Guests
print("\nBigger table!\n")
guests.insert(0, "Newton")
guests.insert(len(guests) // 2, "Austen")
guests.append("Parks")
for guest in guests:
    print(f"Dinner invite, {guest}.")

# 3-7. Shrinking Guest List
print("\nOnly two spots.\n")
while len(guests) > 2:
    removed = guests.pop()
    print(f"Sorry, {removed}, no dinner.")
for guest in guests:
    print(f"You're still on, {guest}.")
del guests[:]  # Empty list
print("Empty list:", guests)

# 4-1. Pizzas
pizzas = ["Margherita", "Vegetarian", "Hawaiian"]
for pizza in pizzas:
    print(f"I like {pizza}.")
print("Love pizza!") # No lengthy explanations needed



# 4-2. Animals
animals = ["dog", "cat", "rabbit"]
for animal in animals:
    print(f"A {animal} is a great pet.")
print("All good pets.")

# 4-3. Counting to Twenty
for i in range(1, 21):
    print(i)

# 4-4. One Million (First ten only)
for i in range(1, 11):
    print(i)

# 4-5. Summing a Million
numbers = list(range(1, 1000001))
print("Min:", min(numbers))
print("Max:", max(numbers))
print("Sum:", sum(numbers))

# 4-6. Odd Numbers
for i in range(1, 21, 2):
    print(i)

# 4-7. Threes
for i in range(3, 31, 3):
    print(i)

# 4-8. Cubes
cubes = []
for i in range(1, 11):
    cubes.append(i**3)
for cube in cubes:
    print(cube)

# 4-9. Cube Comprehension
cubes = [i**3 for i in range(1, 11)]
print(cubes)

# 4-10. Slices
foods = ['pizza', 'falafel', 'carrot cake', 'cannoli', 'ice cream']
print("First three:", foods[:3])
print("Middle three:", foods[1:4])
print("Last three:", foods[-3:])

# 4-11. My Pizzas, Your Pizzas
friend_pizzas = pizzas[:]
pizzas.append("Pepperoni")
friend_pizzas.append("Mushroom")

print("My pizzas:")
for pizza in pizzas:
    print(f"- {pizza}")

print("\nFriend's pizzas:")
for pizza in friend_pizzas:
    print(f"- {pizza}")



# 4-12. More Loops 
my_foods = ['pizza', 'falafel', 'carrot cake']
friend_foods = my_foods[:]

my_foods.append("cannoli")
friend_foods.append("ice cream")

print("\nMy foods:")
for food in my_foods:
    print(food)

print("\nFriend's foods:")
for food in friend_foods:
    print(food)



# 4-13. Buffet
foods = ("pasta", "salad", "bread", "soup", "fruit")
print("\nMenu:")
for food in foods:
    print(food)

foods = ("rice", "beans", "bread", "soup", "fruit") # Tuple reassignment
print("\nRevised menu:")
for food in foods:
    print(food)