# 3-4. Guest List: Invite atleast three people to dinner.
guest_list = [
    "Robert Downey Jr.", "Lia Sadii", "Elizabeth Olsen", "Chris Hemsworth", 
    "Benedict Cumberbatch", "Tom Holland", "Mark Ruffalo", "Chris Evans",
    "Scarlett Johansson", "Paul Hemsworth"
]
for guest in guest_list:
    print(f"Dear {guest}, you are invited to dinner.")


# 3-5. Changing Guest List: One guest can't make it; replace them.
print("\nWhoops! Mark Ruffalo can't make it.\n")
index = guest_list.index("Mark Ruffalo")
guest_list[index] = "Leonardo da Vinci"
for guest in guest_list:
    print(f"Dear {guest}, you are invited to dinner.")


# 3-6. More Guests: A bigger table; add more guests.
print("\nWe found a bigger table !!!\n")
guest_list.insert(0, "Austin")
guest_list.insert(len(guest_list) // 2, "Ana de Armas")
guest_list.append("Sadie Rhodes")
for guest in guest_list:
    print(f"Dear {guest}, you are invited to dinner.")



# 3-7. Shrinking Guest List: Table won't arrive; shrink the list.
print("\nUnforseen only two people can come.\n")
while len(guest_list) > 2:
    removed_guest = guest_list.pop()
    print(f"Sorry, {removed_guest}, you're uninvited.")
for guest in guest_list:
    print(f"Dear {guest}, you're still invited.")
del guest_list[:]
print("Final guest list:", guest_list)




# 3-8. Seeing the World: Store and sort locations.
locations = ["London", "Washington D.C.", "Tokyo", "Paris", "Arizona"]

print("Original order:")
print(locations)

print("\nAlphabetical:")
print(sorted(locations))

print("\nOriginal order again:")
print(locations)

print("\nReverse alphabetical:")
print(sorted(locations, reverse=True))

print("\nOriginal order again:")
print(locations)

locations.reverse()
print("\nReversed:")
print(locations)

locations.reverse()
print("\nOriginal order:")
print(locations)

locations.sort()
print("\nSorted alphabetically:")
print(locations)

locations.sort(reverse=True)
print("\nSorted reverse alphabetically:")
print(locations)


# 3-9. Dinner Guests: Print the number of guests.
guest_list = [
    "Robert Downey Jr.", "Lia Sadii", "Elizabeth Olsen", "Chris Hemsworth", 
    "Benedict Cumberbatch", "Tom Holland", "Mark Ruffalo", "Chris Evans",
    "Scarlett Johansson", "Paul Hemsworth"
]
print(f"\nI'm inviting {len(guest_list)} guests to dinner.")



# 3-10. Every Function: Use each list function at least once.
languages = ["Python", "Ruby", "Typescript", "JavaScript", "C", "Java", "C#"]

print(languages)  # print()
languages.append("Go") # append()
languages.insert(2, "Swift")  # insert()
del languages[0] # del
popped_language = languages.pop() # pop()
print(popped_language)
languages.remove("Java") # remove()
languages.sort() # sort()
print(languages)
languages.sort(reverse=True) # sort(reverse=True)
print(languages)
print(sorted(languages))  # sorted()
print(languages)
languages.reverse() # reverse()
print(languages)
print(len(languages)) # len()










# 4-1. Pizzas: Store and print favorite pizza names.
pizzas = ["Margherita", "Cheesy", "Hawaiian"]
for pizza in pizzas:
    print(f"I like {pizza} pizza.")
print("\nI like pizzas, especially Margherita, Cheesy and Hawaiian!")


# 4-2. Animals: Store and print animal names with a common trait.
animals = ["dog", "cat", "rabbit"]
for animal in animals:
    print(f"A {animal} would make a great pet..")
print("All these animals are great companions...")


# 4-3. Counting to Twenty: Print numbers 1-20.
for number in range(1, 21):
    print(number)

# 4-4. One Million (Modified - printing first 10 only)
for number in range(1, 11):
    print(number, end=', ')

print()

# 4-5. Summing a Million
numbers = list(range(1, 1000001))
print("Min:", min(numbers))
print("Max:", max(numbers))
print("Sum:", sum(numbers))


# 4-6. Odd Numbers
odd_numbers = list(range(1, 21, 2))
for number in odd_numbers:
    print(number, end=', ')

print()


# 4-7. Threes
threes = list(range(3, 31, 3))
for number in threes:
    print(number, end=', ')

print()




# 4-8. Cubes
cubes = []
for i in range(1, 11):
    cubes.append(i**3)

for cube in cubes:
    print(cube, end=', ')

print()


# 4-9. Cube Comprehension
cubes_comprehension = [number**3 for number in range(1, 11)]
print(cubes_comprehension)



# 4-10. Slices
my_foods = ['Pizza', 'cake', 'Sushi', 'Burger', 'Ice cream', 'Pasta']

print("The first three items are:", my_foods[:3])
print("Three items from the middle are:", my_foods[1:4])
print("The last three items are:", my_foods[-3:])



# 4-11. My Pizzas, Your Pizzas
pizzas = ["Margherita", "Cheesy", "Hawaiian"]
friend_pizzas = pizzas[:]  # copy not point
pizzas.append("Pepperoni")
friend_pizzas.append("Mushroom")

print("My favorite pizzas are:")
for pizza in pizzas:
    print(f"- {pizza}")

print("\nMy friend's favorite pizzas are:")
for pizza in friend_pizzas:
    print(f"- {pizza}")




# 4-12. More Loops (Modified for clarity - 2 separate loops)
my_foods = ['pizza', 'Sushi', 'Burger']
friend_foods = my_foods[:]

my_foods.append("cannoli")
friend_foods.append("Pasta", "Ice Cream")

print("\nMy favorite foods are:")
for food in my_foods:
  print(food)

print("\nMy friend's favorite foods are:")
for food in friend_foods:
  print(food)



# 4-13. Buffet
basic_foods = ("Pasta", "Salad", "Bread", "Tomato Soup", "Fruits")  # Tuple
print("\nOriginal menu:")
for food in basic_foods:
    print(food)

basic_foods[0] = "Rice"  # will cause error as immutable

basic_foods = ("Rice", "Salad", "Bread", "Tomato Soup", "Fruits")  # Create a new tuple
print("\nRevised menu:")
for food in basic_foods:
    print(food, end=', ')

print()
