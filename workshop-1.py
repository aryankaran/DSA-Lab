
# 3-4. Guest List: Invite atleast three people to dinner.
guest_list = [
    "Robert Downey Jr.", "Lia Sadii", "Elizabeth Olsen"
]
for guest in guest_list:
    print(f"Dear {guest}, you are invited to dinner.")

Output:
Dear Robert Downey Jr., you are invited to dinner.
Dear Lia Sadii, you are invited to dinner.
Dear Elizabeth Olsen, you are invited to dinner.






# 3-5. Changing Guest List: Modify guest list as one cannot make it.
guest_list = [
    "Robert Downey Jr.", "Lia Sadii", "Elizabeth Olsen"
]

cant_make_it = guest_list[2]
print(f"\nUnfortunately, {cant_make_it} can't make it to dinner.")

guest_list[2] = "Chris Hemsworth"

print("\nNew set of invitations:")
for guest in guest_list:
    print(f"Dear {guest}, you are invited to dinner.")


Output:

Unfortunately, Elizabeth Olsen can't make it to dinner.

New set of invitations:
Dear Robert Downey Jr., you are invited to dinner.
Dear Lia Sadii, you are invited to dinner.
Dear Chris Hemsworth, you are invited to dinner.






# 3-6. More Guests: Add more guests to the dinner list.
guest_list = [
    "Robert Downey Jr.", "Lia Sadii", "Chris Hemsworth"
]

print("\nGood news! We found a bigger dinner table!")

guest_list.insert(0, "Benedict Cumberbatch")
guest_list.insert(2, "Tom Holland")
guest_list.append("Mark Ruffalo")

print("\nNew set of invitations with more guests:")
for guest in guest_list:
    print(f"Dear {guest}, you are invited to dinner.")


Output:

Good news! We found a bigger dinner table!

New set of invitations with more guests:
Dear Benedict Cumberbatch, you are invited to dinner.
Dear Robert Downey Jr., you are invited to dinner.
Dear Tom Holland, you are invited to dinner.
Dear Lia Sadii, you are invited to dinner.
Dear Chris Hemsworth, you are invited to dinner.
Dear Mark Ruffalo, you are invited to dinner.






# 3-7. Shrinking Guest List: Reduce the guest list to only two people.
guest_list = [
    "Benedict Cumberbatch", "Robert Downey Jr.", "Tom Holland", "Lia Sadii",
    "Chris Hemsworth", "Mark Ruffalo"
]

print("\nOh no! The new dinner table won't arrive in time, we can only invite two people.")

while len(guest_list) > 2:
    removed_guest = guest_list.pop()
    print(f"Sorry {removed_guest}, we can't invite you to dinner anymore.")

print("\nInvitations for the remaining two guests:")
for guest in guest_list:
    print(f"Dear {guest}, you are still invited to dinner.")

del guest_list[:]
print("\nEmpty guest list:", guest_list)


Output:

Oh no! The new dinner table won't arrive in time, we can only invite two people.
Sorry Mark Ruffalo, we can't invite you to dinner anymore.
Sorry Chris Hemsworth, we can't invite you to dinner anymore.
Sorry Lia Sadii, we can't invite you to dinner anymore.
Sorry Tom Holland, we can't invite you to dinner anymore.
Invitations for the remaining two guests:
Dear Robert Downey Jr., you are still invited to dinner.
Dear Benedict Cumberbatch, you are still invited to dinner.
Empty guest list: []






# 3-8. Seeing the World: Explore list manipulation for places to visit.
places_to_visit = ["Tokyo", "Paris", "Machu Picchu", "New York", "Cairo"]

print("Original order:", places_to_visit)
print("\nSorted (alphabetical):", sorted(places_to_visit))
print("\nOriginal order is still:", places_to_visit)
print("\nSorted (reverse alphabetical):", sorted(places_to_visit, reverse=True))
print("\nOriginal order is still:", places_to_visit)

places_to_visit.reverse()
print("\nReversed order:", places_to_visit)

places_to_visit.reverse()
print("\nBack to original order:", places_to_visit)

places_to_visit.sort()
print("\nSorted (alphabetical, modified list):", places_to_visit)

places_to_visit.sort(reverse=True)
print("\nSorted (reverse alphabetical, modified list):", places_to_visit)


Output:
Original order: ['Tokyo', 'Paris', 'Machu Picchu', 'New York', 'Cairo']

Sorted (alphabetical): ['Cairo', 'Machu Picchu', 'New York', 'Paris', 'Tokyo']

Original order is still: ['Tokyo', 'Paris', 'Machu Picchu', 'New York', 'Cairo']

Sorted (reverse alphabetical): ['Tokyo', 'Paris', 'New York', 'Machu Picchu', 'Cairo']

Original order is still: ['Tokyo', 'Paris', 'Machu Picchu', 'New York', 'Cairo']

Reversed order: ['Cairo', 'New York', 'Machu Picchu', 'Paris', 'Tokyo']

Back to original order: ['Tokyo', 'Paris', 'Machu Picchu', 'New York', 'Cairo']

Sorted (alphabetical, modified list): ['Cairo', 'Machu Picchu', 'New York', 'Paris', 'Tokyo']

Sorted (reverse alphabetical, modified list): ['Tokyo', 'Paris', 'New York', 'Machu Picchu', 'Cairo']






# 3-9. Dinner Guests: Print the number of dinner guests.
guest_list = [
    "Robert Downey Jr.", "Lia Sadii", "Chris Hemsworth", "Benedict Cumberbatch",
    "Tom Holland", "Mark Ruffalo"
]
number_of_guests = len(guest_list)
print(f"\nYou are inviting {number_of_guests} people to dinner.")


Output:

You are inviting 6 people to dinner.






# 3-10. Every Function: Demonstrate list functions with a list of countries.
countries = ["USA", "Canada", "UK", "Germany", "Japan"]

print("Original list:", countries)

countries.append("Australia")
print("\nappend(): Added 'Australia':", countries)

countries.insert(2, "France")
print("\ninsert(): Inserted 'France' at index 2:", countries)

del countries[1]
print("\ndel(): Deleted item at index 1:", countries)

popped_country = countries.pop()
print("\npop(): Popped last item:", popped_country)
print("List after pop():", countries)

countries.remove("France")
print("\nremove(): Removed 'France':", countries)

countries.sort()
print("\nsort(): Alphabetically sorted list:", countries)

countries.sort(reverse=True)
print("\nsort(reverse=True): Reverse alphabetically sorted list:", countries)

countries.reverse()
print("\nreverse(): Reversed list order:", countries)

print("\nlen(): Length of the list:", len(countries))

sorted_countries = sorted(countries)
print("\nsorted(): Alphabetically sorted list (non-modifying):", sorted_countries)
print("Original list is unchanged:", countries)


Output:
Original list: ['USA', 'Canada', 'UK', 'Germany', 'Japan']

append(): Added 'Australia': ['USA', 'Canada', 'UK', 'Germany', 'Japan', 'Australia']

insert(): Inserted 'France' at index 2: ['USA', 'Canada', 'France', 'UK', 'Germany', 'Japan', 'Australia']

del(): Deleted item at index 1: ['USA', 'France', 'UK', 'Germany', 'Japan', 'Australia']

pop(): Popped last item: Australia
List after pop(): ['USA', 'France', 'UK', 'Germany', 'Japan']

remove(): Removed 'France': ['USA', 'UK', 'Germany', 'Japan']

sort(): Alphabetically sorted list: ['Germany', 'Japan', 'UK', 'USA']

sort(reverse=True): Reverse alphabetically sorted list: ['USA', 'UK', 'Japan', 'Germany']

reverse(): Reversed list order: ['Germany', 'Japan', 'UK', 'USA']

len(): Length of the list: 4

sorted(): Alphabetically sorted list (non-modifying): ['Germany', 'Japan', 'UK', 'USA']
Original list is unchanged: ['Germany', 'Japan', 'UK', 'USA']






# 4-3. Counting to Twenty: Print numbers from 1 to 20 using a for loop.
print("Counting to Twenty:")
for number in range(1, 21):
    print(number)


Output:
Counting to Twenty:
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20






# 4-4. One Million: Create and print numbers up to one million (optional print).
# numbers_million = list(range(1, 1000001))
# for number in numbers_million: # Uncomment to print (may take long)
#     print(number)
numbers_million = list(range(1, 1000001))
print("List of one million numbers created (printing is optional to avoid long output).")


Output:
List of one million numbers created (printing is optional to avoid long output).






# 4-5. Summing a Million: Sum, min, and max of a list of one million numbers.
numbers_million = list(range(1, 1000001))
print("Minimum of the list:", min(numbers_million))
print("Maximum of the list:", max(numbers_million))
print("Sum of the list:", sum(numbers_million))


Output:
Minimum of the list: 1
Maximum of the list: 1000000
Sum of the list: 500000500000






# 4-6. Odd Numbers: List and print odd numbers from 1 to 20 using range.
odd_numbers = list(range(1, 21, 2))
print("Odd numbers from 1 to 20:")
for number in odd_numbers:
    print(number)


Output:
Odd numbers from 1 to 20:
1
3
5
7
9
11
13
15
17
19






# 4-7. Threes: List and print multiples of 3 from 3 to 30.
threes = list(range(3, 31, 3))
print("Multiples of 3 from 3 to 30:")
for number in threes:
    print(number)


Output:
Multiples of 3 from 3 to 30:
3
6
9
12
15
18
21
24
27
30






# 4-8. Cubes: List and print the cubes of the first 10 integers.
cubes = []
for number in range(1, 11):
    cube = number**3
    cubes.append(cube)

print("Cubes of the first 10 integers:")
for cube in cubes:
    print(cube)


Output:
Cubes of the first 10 integers:
1
8
27
64
125
216
343
512
729
1000






# 4-9. Cube Comprehension: Generate a list of the first 10 cubes using comprehension.
cube_comprehension = [number**3 for number in range(1, 11)]
print("Cubes using list comprehension:", cube_comprehension)


Output:
Cubes using list comprehension: [1, 8, 27, 64, 125, 216, 343, 512, 729, 1000]






# 4-10. Slices: Use slices to extract parts of a list.
players = ['charles', 'martina', 'michael', 'florence', 'eli']

print("The first three items in the list are:", players[:3])
print("Three items from the middle of the list are:", players[1:4])
print("The last three items in the list are:", players[-3:])


Output:
The first three items in the list are: ['charles', 'martina', 'michael']
Three items from the middle of the list are: ['martina', 'michael', 'florence']
The last three items in the list are: ['michael', 'florence', 'eli']






# 4-11. My Pizzas, Your Pizzas: Copy and modify pizza lists to prove independence.
my_pizzas = ['pepperoni', 'cheese', 'margherita']
friend_pizzas = my_pizzas[:]

my_pizzas.append('mushroom')
friend_pizzas.append('veggie')

print("My favorite pizzas are:")
for pizza in my_pizzas:
    print(pizza)

print("\nMy friend's favorite pizzas are:")
for pizza in friend_pizzas:
    print(pizza)


Output:
My favorite pizzas are:
pepperoni
cheese
margherita
mushroom

My friend's favorite pizzas are:
pepperoni
cheese
margherita
veggie






# 4-12. More Loops: Use for loops to print food lists.
my_foods = ['pizza', 'falafel', 'carrot cake']
friend_foods = my_foods[:]

print("My favorite foods are:")
for food in my_foods:
    print(food)

print("\nMy friend's favorite foods are:")
for food in friend_foods:
    print(food)


Output:
My favorite foods are:
pizza
falafel
carrot cake

My friend's favorite foods are:
pizza
falafel
carrot cake






# 4-13. Buffet: Explore tuples by creating and modifying a buffet menu.
buffet_foods = ('soup', 'salad', 'bread', 'steak', 'fruit')

print("Original buffet menu:")
for food in buffet_foods:
    print(food)

# buffet_foods[0] = 'fish' # This will cause a TypeError

buffet_foods = ('fish', 'salad', 'chicken', 'steak', 'ice cream')
print("\nModified buffet menu:")
for food in buffet_foods:
    print(food)


Output:
Original buffet menu:
soup
salad
bread
steak
fruit

Modified buffet menu:
fish
salad
chicken
steak
ice cream






# 5-1. Conditional Tests: Write and predict results of conditional tests.
car = 'subaru'
print("Is car == 'subaru'? I predict True.")
print(car == 'subaru')

print("\nIs car == 'audi'? I predict False.")
print(car == 'audi')

age = 25
print("\nIs age > 18? I predict True.")
print(age > 18)

print("\nIs age < 21? I predict False.")
print(age < 21)

name = "Alice"
print("\nIs name == 'Alice'? I predict True.")
print(name == 'Alice')

print("\nIs name != 'Bob'? I predict True.")
print(name != 'Bob')

number = 10
print("\nIs number >= 10? I predict True.")
print(number >= 10)

print("\nIs number <= 5? I predict False.")
print(number <= 5)

is_sunny = True
print("\nIs is_sunny == True? I predict True.")
print(is_sunny == True)

is_rainy = False
print("\nIs is_rainy == False? I predict True.")
print(is_rainy == False)


Output:
Is car == 'subaru'? I predict True.
True

Is car == 'audi'? I predict False.
False

Is age > 18? I predict True.
True

Is age < 21? I predict False.
False

Is name == 'Alice'? I predict True.
True

Is name != 'Bob'? I predict True.
True

Is number >= 10? I predict True.
True

Is number <= 5? I predict False.
False

Is is_sunny == True? I predict True.
True

Is is_rainy == False? I predict True.
True






# 5-2. More Conditional Tests: Expand conditional tests with various types.
string1 = "hello"
string2 = "World"

print("Equality test (strings):", string1 == "hello")
print("Inequality test (strings):", string1 != string2)

print("Lower case function test:", string1.lower() == "HELLO".lower())

number1 = 10
number2 = 20
print("Numerical equality test:", number1 == 10)
print("Numerical inequality test:", number1 != number2)
print("Greater than test:", number2 > number1)
print("Less than test:", number1 < number2)
print("Greater than or equal to test:", number2 >= 20)
print("Less than or equal to test:", number1 <= 15)

list_items = [1, 2, 3, 4, 5]
print("Test item in list:", 3 in list_items)
print("Test item not in list:", 6 not in list_items)


Output:
Equality test (strings): True
Inequality test (strings): True
Lower case function test: True
Numerical equality test: True
Numerical inequality test: True
Greater than test: True
Less than test: True
Greater than or equal to test: True
Less than or equal to test: True
Test item in list: True
Test item not in list: True






# 5-3. Alien Colors #1: Simple if test for alien color.
alien_color = 'green'

if alien_color == 'green':
    print("You just earned 5 points!")

alien_color = 'red' # Version that fails the if test
if alien_color == 'green':
    print("You just earned 5 points!") # No output


Output:
You just earned 5 points!






# 5-4. Alien Colors #2: if-else chain for alien color points.
alien_color = 'green'

if alien_color == 'green':
    print("You just earned 5 points for shooting the alien.")
else:
    print("You just earned 10 points.")

alien_color = 'red' # Version that runs the else block
if alien_color == 'green':
    print("You just earned 5 points for shooting the alien.")
else:
    print("You just earned 10 points.")


Output:
You just earned 5 points for shooting the alien.






# 5-5. Alien Colors #3: if-elif-else chain for different alien colors.
alien_color = 'green'
if alien_color == 'green':
    print("You earned 5 points.")
elif alien_color == 'yellow':
    print("You earned 10 points.")
elif alien_color == 'red':
    print("You earned 15 points.")

alien_color = 'yellow'
if alien_color == 'green':
    print("You earned 5 points.")
elif alien_color == 'yellow':
    print("You earned 10 points.")
elif alien_color == 'red':
    print("You earned 15 points.")

alien_color = 'red'
if alien_color == 'green':
    print("You earned 5 points.")
elif alien_color == 'yellow':
    print("You earned 10 points.")
elif alien_color == 'red':
    print("You earned 15 points.")


Output:
You earned 5 points.
You earned 10 points.
You earned 15 points.






# 5-6. Stages of Life: if-elif-else chain for determining life stage by age.
age = 15

if age < 2:
    print("The person is a baby.")
elif age < 4:
    print("The person is a toddler.")
elif age < 13:
    print("The person is a kid.")
elif age < 20:
    print("The person is a teenager.")
elif age < 65:
    print("The person is an adult.")
else:
    print("The person is an elder.")


Output:
The person is a teenager.






# 5-7. Favorite Fruit: Independent if statements to check for favorite fruits.
favorite_fruits = ['banana', 'apple', 'mango']

if 'banana' in favorite_fruits:
    print("You really like bananas!")
if 'apple' in favorite_fruits:
    print("You really like apples!")
if 'mango' in favorite_fruits:
    print("You really like mangoes!")
if 'orange' in favorite_fruits:
    print("You really like oranges!")
if 'grape' in favorite_fruits:
    print("You really like grapes!")


Output:
You really like bananas!
You really like apples!
You really like mangoes!






# 5-8. Hello Admin: Greetings based on username, special for 'admin'.
usernames = ['admin', 'eric', 'jane', 'peter', 'sarah']

for username in usernames:
    if username == 'admin':
        print("Hello admin, would you like to see a status report?")
    else:
        print(f"Hello {username}, thank you for logging in again.")


Output:
Hello admin, would you like to see a status report?
Hello eric, thank you for logging in again.
Hello jane, thank you for logging in again.
Hello peter, thank you for logging in again.
Hello sarah, thank you for logging in again.






# 5-9. No Users: Check for empty username list.
usernames = [] # Or usernames = ['admin', 'eric', 'jane', 'peter', 'sarah']

if usernames:
    for username in usernames:
        if username == 'admin':
            print("Hello admin, would you like to see a status report?")
        else:
            print(f"Hello {username}, thank you for logging in again.")
else:
    print("We need to find some users!")

usernames = ['admin', 'eric', 'jane', 'peter', 'sarah'] # Reset list for next part
usernames = [] # Empty list again to test empty list condition
if usernames:
    for username in usernames:
        if username == 'admin':
            print("Hello admin, would you like to see a status report?")
        else:
            print(f"Hello {username}, thank you for logging in again.")
else:
    print("We need to find some users!")


Output:
We need to find some users!
We need to find some users!






# 5-10. Checking Usernames: Ensure unique usernames, case-insensitive.
current_users = ['john', 'jane', 'Admin', 'Peter', 'Sarah']
new_users = ['eric', 'John', 'JANE', 'mike', 'lisa']

current_users_lower = [user.lower() for user in current_users]

for new_user in new_users:
    if new_user.lower() in current_users_lower:
        print(f"Sorry, the username '{new_user}' is not available. Please enter a new username.")
    else:
        print(f"The username '{new_user}' is available.")


Output:
The username 'eric' is available.
Sorry, the username 'John' is not available. Please enter a new username.
Sorry, the username 'JANE' is not available. Please enter a new username.
The username 'mike' is available.
The username 'lisa' is available.






# 5-11. Ordinal Numbers: Print ordinal endings for numbers 1-9.
numbers = list(range(1, 10))

for number in numbers:
    if number == 1:
        ending = "st"
    elif number == 2:
        ending = "nd"
    elif number == 3:
        ending = "rd"
    else:
        ending = "th"
    print(f"{number}{ending}")


Output:
1st
2nd
3rd
4th
5th
6th
7th
8th
9th






# 6-1. Person: Dictionary to store and print information about a person.
person_info = {
    'first_name': 'marie',
    'last_name': 'curie',
    'age': 45,
    'city': 'paris',
}

print("First Name:", person_info['first_name'].title())
print("Last Name:", person_info['last_name'].title())
print("Age:", person_info['age'])
print("City:", person_info['city'].title())


Output:
First Name: Marie
Last Name: Curie
Age: 45
City: Paris






# 6-2. Favorite Numbers: Dictionary of people's favorite numbers and print.
favorite_numbers = {
    'alice': 7,
    'bob': 12,
    'charlie': 3,
    'david': 9,
    'eve': 5,
}

for name, number in favorite_numbers.items():
    print(f"{name.title()}'s favorite number is {number}.")


Output:
Alice's favorite number is 7.
Bob's favorite number is 12.
Charlie's favorite number is 3.
David's favorite number is 9.
Eve's favorite number is 5.






# 6-3. Glossary: Dictionary of programming terms and their meanings.
glossary = {
    'variable': 'Named storage location in memory.',
    'loop': 'Repeating a block of code until a condition is met.',
    'function': 'Reusable block of code that performs a specific task.',
    'list': 'Ordered collection of items.',
    'dictionary': 'Collection of key-value pairs.',
}

print("Glossary:\n")
print(f"Variable:\n\t{glossary['variable']}\n")
print(f"Loop:\n\t{glossary['loop']}\n")
print(f"Function:\n\t{glossary['function']}\n")
print(f"List:\n\t{glossary['list']}\n")
print(f"Dictionary:\n\t{glossary['dictionary']}\n")


Output:
Glossary:

Variable:
	Named storage location in memory.

Loop:
	Repeating a block of code until a condition is met.

Function:
	Reusable block of code that performs a specific task.

List:
	Ordered collection of items.

Dictionary:
	Collection of key-value pairs.






# 6-4. Glossary 2: Clean up glossary with loop and add more terms.
glossary = {
    'variable': 'Named storage location in memory.',
    'loop': 'Repeating a block of code until a condition is met.',
    'function': 'Reusable block of code that performs a specific task.',
    'list': 'Ordered collection of items.',
    'dictionary': 'Collection of key-value pairs.',
    'tuple': 'Immutable ordered collection of items.',
    'set': 'Unordered collection of unique items.',
    'class': 'Blueprint for creating objects.',
    'method': 'Function associated with an object.',
    'module': 'File containing Python code, often functions and classes.',
}

for term, meaning in glossary.items():
    print(f"{term.title()}:\n\t{meaning}\n")


Output:
Variable:
	Named storage location in memory.

Loop:
	Repeating a block of code until a condition is met.

Function:
	Reusable block of code that performs a specific task.

List:
	Ordered collection of items.

Dictionary:
	Collection of key-value pairs.

Tuple:
	Immutable ordered collection of items.

Set:
	Unordered collection of unique items.

Class:
	Blueprint for creating objects.

Method:
	Function associated with an object.

Module:
	File containing Python code, often functions and classes.






# 6-5. Rivers: Dictionary of rivers and countries, print sentences and names.
rivers = {
    'nile': 'egypt',
    'amazon': 'brazil',
    'yangtze': 'china',
}

for river, country in rivers.items():
    print(f"The {river.title()} runs through {country.title()}.")

print("\nRivers:")
for river in rivers.keys():
    print(river.title())

print("\nCountries:")
for country in rivers.values():
    print(country.title())


Output:
The Nile runs through Egypt.
The Amazon runs through Brazil.
The Yangtze runs through China.

Rivers:
Nile
Amazon
Yangtze

Countries:
Egypt
Brazil
China






# 6-6. Polling: Use favorite_languages.py and poll people, thank or invite.
favorite_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python',
}

poll_people = ['sarah', 'bob', 'phil', 'mike', 'jen']

for person in poll_people:
    if person in favorite_languages.keys():
        print(f"{person.title()}, thank you for responding to the poll!")
    else:
        print(f"{person.title()}, we would like to invite you to take the poll.")


Output:
Sarah, thank you for responding to the poll!
Bob, we would like to invite you to take the poll.
Phil, thank you for responding to the poll!
Mike, we would like to invite you to take the poll.
Jen, thank you for responding to the poll!






# 6-7. People: List of dictionaries representing people, loop and print info.
person1 = {
    'first_name': 'marie',
    'last_name': 'curie',
    'age': 45,
    'city': 'paris',
}

person2 = {
    'first_name': 'albert',
    'last_name': 'einstein',
    'age': 76,
    'city': 'princeton',
}

person3 = {
    'first_name': 'ada',
    'last_name': 'lovelace',
    'age': 36,
    'city': 'london',
}

people = [person1, person2, person3]

for person in people:
    print("\nPerson Information:")
    for key, value in person.items():
        print(f"\t{key.title()}: {value.title() if isinstance(value, str) else value}")


Output:

Person Information:
	First_Name: Marie
	Last_Name: Curie
	Age: 45
	City: Paris

Person Information:
	First_Name: Albert
	Last_Name: Einstein
	Age: 76
	City: Princeton

Person Information:
	First_Name: Ada
	Last_Name: Lovelace
	Age: 36
	City: London






# 6-8. Pets: List of pet dictionaries, loop and print pet info.
pet_dog = {
    'name': 'buddy',
    'animal_type': 'dog',
    'owner_name': 'alice',
}

pet_cat = {
    'name': 'whiskers',
    'animal_type': 'cat',
    'owner_name': 'bob',
}

pet_rabbit = {
    'name': 'bunny',
    'animal_type': 'rabbit',
    'owner_name': 'charlie',
}

pets = [pet_dog, pet_cat, pet_rabbit]

for pet in pets:
    print("\nPet Information:")
    for key, value in pet.items():
        print(f"\t{key.title()}: {value.title()}")


Output:

Pet Information:
	Name: Buddy
	Animal_Type: Dog
	Owner_Name: Alice

Pet Information:
	Name: Whiskers
	Animal_Type: Cat
	Owner_Name: Bob

Pet Information:
	Name: Bunny
	Animal_Type: Rabbit
	Owner_Name: Charlie






# 6-9. Favorite Places: Dictionary of favorite places per person, loop and print.
favorite_places = {
    'alice': ['beach', 'mountains', 'forest'],
    'bob': ['city', 'museum'],
    'charlie': ['home', 'library', 'park'],
}

for person, places in favorite_places.items():
    print(f"\n{person.title()}'s favorite places are:")
    for place in places:
        print(f"\t{place.title()}")


Output:

Alice's favorite places are:
	Beach
	Mountains
	Forest

Bob's favorite places are:
	City
	Museum

Charlie's favorite places are:
	Home
	Library
	Park






# 6-10. Favorite Numbers: Modify 6-2 to store multiple favorite numbers.
favorite_numbers = {
    'alice': [7, 10],
    'bob': [12, 5],
    'charlie': [3, 8, 11],
    'david': [9],
    'eve': [5, 1],
}

for name, numbers in favorite_numbers.items():
    print(f"\n{name.title()}'s favorite numbers are:")
    for number in numbers:
        print(f"\t{number}")


Output:

Alice's favorite numbers are:
	7
	10

Bob's favorite numbers are:
	12
	5

Charlie's favorite numbers are:
	3
	8
	11

David's favorite numbers are:
	9

Eve's favorite numbers are:
	5
	1






# 6-11. Cities: Dictionary of cities with country, population, and fact.
cities = {
    'london': {
        'country': 'uk',
        'population': 9000000,
        'fact': 'home to the Buckingham Palace',
    },
    'paris': {
        'country': 'france',
        'population': 2100000,
        'fact': 'known as the city of love',
    },
    'tokyo': {
        'country': 'japan',
        'population': 14000000,
        'fact': 'largest metropolitan area in the world',
    },
}

for city_name, city_info in cities.items():
    print(f"\nCity: {city_name.title()}")
    country = city_info['country'].title()
    population = city_info['population']
    fact = city_info['fact']

    print(f"\tCountry: {country}")
    print(f"\tPopulation: {population}")
    print(f"\tFact: {fact}")


Output:

City: London
	Country: Uk
	Population: 9000000
	Fact: home to the Buckingham Palace

City: Paris
	Country: France
	Population: 2100000
	Fact: known as the city of love

City: Tokyo
	Country: Japan
	Population: 14000000
	Fact: largest metropolitan area in the world






# 6-12. Extensions: Extend an example program from chapter 6 (6-11 extended).
cities = {
    'london': {
        'country': 'uk',
        'population': 9000000,
        'fact': 'home to the Buckingham Palace',
        'currency': 'GBP', # Added key
    },
    'paris': {
        'country': 'france',
        'population': 2100000,
        'fact': 'known as the city of love',
        'currency': 'EUR', # Added key
    },
    'tokyo': {
        'country': 'japan',
        'population': 14000000,
        'fact': 'largest metropolitan area in the world',
        'currency': 'JPY', # Added key
    },
}

for city_name, city_info in cities.items():
    print(f"\nCity: {city_name.title()}")
    country = city_info['country'].title()
    population = city_info['population']
    fact = city_info['fact']
    currency = city_info['currency'] # Accessing added key

    print(f"\tCountry: {country}")
    print(f"\tPopulation: {population}")
    print(f"\tFact: {fact}")
    print(f"\tCurrency: {currency}") # Printing added value


Output:

City: London
	Country: Uk
	Population: 9000000
	Fact: home to the Buckingham Palace
	Currency: GBP

City: Paris
	Country: France
	Population: 2100000
	Fact: known as the city of love
	Currency: EUR

City: Tokyo
	Country: Japan
	Population: 14000000
	Fact: largest metropolitan area in the world
	Currency: JPY






# 8-1. Message: Function to print a simple message.
def display_message():
    """Prints a message about what is being learned in this chapter."""
    print("I am learning about functions in this chapter!")

display_message()


Output:
I am learning about functions in this chapter!






# 8-2. Favorite Book: Function to print a message about a favorite book.
def favorite_book(title):
    """Prints a message about a person's favorite book."""
    print(f"One of my favorite books is {title.title()}.")

favorite_book('alice in wonderland')


Output:
One of my favorite books is Alice In Wonderland.






# 8-3. T-Shirt: Function to describe a t-shirt with size and message.
def make_shirt(size, message):
    """Summarizes the shirt's size and message."""
    print(f"\nShirt size: {size.upper()}")
    print(f"Message to be printed: '{message}'")

make_shirt('medium', 'Keep it simple.') # Positional arguments
make_shirt(message='Python is fun!', size='large') # Keyword arguments


Output:

Shirt size: MEDIUM
Message to be printed: 'Keep it simple.'

Shirt size: LARGE
Message to be printed: 'Python is fun!'






# 8-4. Large Shirts: Modified make_shirt with default size and message.
def make_shirt(size='large', message='I love Python'):
    """Summarizes shirt, large size and default message."""
    print(f"\nShirt size: {size.upper()}")
    print(f"Message to be printed: '{message}'")

make_shirt() # Large shirt with default message
make_shirt(size='medium') # Medium shirt with default message
make_shirt(size='small', message='Think different.') # Custom size and message


Output:

Shirt size: LARGE
Message to be printed: 'I love Python'

Shirt size: MEDIUM
Message to be printed: 'I love Python'

Shirt size: SMALL
Message to be printed: 'Think different.'






# 8-5. Cities: Function to describe a city with default country.
def describe_city(city_name, country='Iceland'):
    """Prints a sentence describing a city and its country."""
    print(f"{city_name.title()} is in {country.title()}.")

describe_city('reykjavik') # Using default country
describe_city('paris', country='france') # Specifying country
describe_city('london', country='united kingdom') # Specifying country


Output:
Reykjavik is in Iceland.
Paris is in France.
London is in United Kingdom.






# 8-6. City Names: Function to return formatted city and country string.
def city_country(city, country):
    """Returns a string formatted as 'City, Country'."""
    return f"\"{city.title()}, {country.title()}\""

location1 = city_country('santiago', 'chile')
location2 = city_country('london', 'england')
location3 = city_country('new york', 'usa')

print(location1)
print(location2)
print(location3)


Output:
"Santiago, Chile"
"London, England"
"New York, Usa"






# 8-7. Album: Function to build album dictionary, optional tracks parameter.
def make_album(artist_name, album_title, tracks=None):
    """Builds a dictionary describing a music album."""
    album = {'artist': artist_name, 'title': album_title}
    if tracks:
        album['tracks'] = tracks
    return album

album1 = make_album('metallica', 'master of puppets')
album2 = make_album('miles davis', 'kind of blue')
album3 = make_album('adele', '21', tracks=11) # Including tracks

print(album1)
print(album2)
print(album3)


Output:
{'artist': 'metallica', 'title': 'master of puppets'}
{'artist': 'miles davis', 'title': 'kind of blue'}
{'artist': 'adele', 'title': '21', 'tracks': 11}






# 8-8. User Albums: While loop to get album info from user and print.
def make_album(artist_name, album_title, tracks=None):
    """Builds a dictionary describing a music album."""
    album = {'artist': artist_name, 'title': album_title}
    if tracks:
        album['tracks'] = tracks
    return album

while True:
    print("\nPlease enter album information:")
    print("(enter 'q' at any time to quit)")

    artist = input("Artist name: ")
    if artist == 'q':
        break

    title = input("Album title: ")
    if title == 'q':
        break

    album = make_album(artist, title)
    print(album)

print("Program ended.")


Output:
Please enter album information:
(enter 'q' at any time to quit)
Artist name: Metallica
Album title: Master of Puppets
{'artist': 'Metallica', 'title': 'Master of Puppets'}
Please enter album information:
(enter 'q' at any time to quit)
Artist name: q
Program ended.






# 8-9. Magicians: Function to print magician names from a list.
def show_magicians(magician_list):
    """Prints the name of each magician in the list."""
    for magician in magician_list:
        print(magician.title())

magician_names = ['houdini', 'david blaine', 'teller']
show_magicians(magician_names)


Output:
Houdini
David Blaine
Teller






# 8-10. Great Magicians: Modify magician names list to add 'the Great'.
def make_great(magician_list):
    """Modifies magician names by adding 'the Great' to each."""
    great_magicians = []
    for magician in magician_list:
        great_magician = magician + ' the Great'
        great_magicians.append(great_magician)
    return great_magicians

def show_magicians(magician_list):
    """Prints the name of each magician in the list."""
    for magician in magician_list:
        print(magician.title())

magician_names = ['houdini', 'david blaine', 'teller']
great_magician_names = make_great(magician_names)
show_magicians(great_magician_names)


Output:
Houdini The Great
David Blaine The Great
Teller The Great






# 8-11. Unchanged Magicians: Call make_great with copy, return new list.
def make_great(magician_list):
    """Returns a new list with 'the Great' added to each magician name."""
    great_magicians = []
    for magician in magician_list:
        great_magician = magician + ' the Great'
        great_magicians.append(great_magician)
    return great_magicians

def show_magicians(magician_list):
    """Prints the name of each magician in the list."""
    for magician in magician_list:
        print(magician.title())

magician_names = ['houdini', 'david blaine', 'teller']
great_magicians_names = make_great(magician_names[:]) # Passing a copy
show_magicians(magician_names) # Original list
print("\nGreat Magicians:")
show_magicians(great_magicians_names) # New list with "the Great"


Output:
Houdini
David Blaine
Teller

Great Magicians:
Houdini The Great
David Blaine The Great
Teller The Great






# 8-12. Sandwiches: Function to accept and print sandwich item list.
def sandwich_items(*items):
    """Prints a summary of the sandwich being ordered."""
    print("\nMaking a sandwich with the following items:")
    for item in items:
        print(f"- {item}")

sandwich_items('cheese', 'ham', 'lettuce')
sandwich_items('turkey', 'swiss cheese')
sandwich_items('peanut butter', 'jelly', 'banana', 'honey')


Output:

Making a sandwich with the following items:
- cheese
- ham
- lettuce

Making a sandwich with the following items:
- turkey
- swiss cheese

Making a sandwich with the following items:
- peanut butter
- jelly
- banana
- honey






# 8-13. User Profile: Build a user profile dictionary using build_profile().
def build_profile(first, last, **user_info):
    """Build a dictionary containing everything we know about a user."""
    user_info['first_name'] = first
    user_info['last_name'] = last
    return user_info

my_profile = build_profile('lia', 'sadii',
                            location='paris',
                            field='computer science',
                            hobby='reading')
print(my_profile)


Output:
{'location': 'paris', 'field': 'computer science', 'hobby': 'reading', 'first_name': 'lia', 'last_name': 'sadii'}






# 8-14. Cars: Function to store car info in a dictionary with kwargs.
def make_car(manufacturer, model, **kwargs):
    """Stores information about a car in a dictionary."""
    car_info = {}
    car_info['manufacturer'] = manufacturer
    car_info['model'] = model
    for key, value in kwargs.items():
        car_info[key] = value
    return car_info

car = make_car('subaru', 'outback', color='blue', tow_package=True)
print(car)


Output:
{'manufacturer': 'subaru', 'model': 'outback', 'color': 'blue', 'tow_package': True}






# 8-15. Printing Models: Move functions to printing_functions.py and import.
# printing_functions.py (separate file)
def print_models(unprinted_designs, completed_models):
    """Simulate printing designs, move to completed after printing."""
    while unprinted_designs:
        current_design = unprinted_designs.pop()
        print(f"Printing model: {current_design}")
        completed_models.append(current_design)

def show_completed_models(completed_models):
    """Show all models that were printed."""
    print("\nThe following models have been printed:")
    for completed_model in completed_models:
        print(completed_model)


# print_models.py (main file)
import printing_functions

unprinted_designs = ['phone case', 'robot pendant', 'dodecahedron']
completed_models = []

printing_functions.print_models(unprinted_designs[:], completed_models) # Pass a copy
printing_functions.show_completed_models(completed_models)


Output:
Printing model: dodecahedron
Printing model: robot pendant
Printing model: phone case

The following models have been printed:
dodecahedron
robot pendant
phone case






# 8-16. Imports: Demonstrate different import approaches.
# my_module.py (separate file)
def my_function():
    """Simple function in my_module."""
    print("Hello from my_function in my_module!")

# import_examples.py (main file)

# 1. import module_name
import my_module
my_module.my_function()

# 2. from module_name import function_name
from my_module import my_function
my_function()

# 3. from module_name import function_name as fn
from my_module import my_function as mf
mf()

# 4. import module_name as mn
import my_module as mm
mm.my_function()

# 5. from module_name import *
from my_module import *
my_function()


Output:
Hello from my_function in my_module!
Hello from my_function in my_module!
Hello from my_function in my_module!
Hello from my_function in my_module!
Hello from my_function in my_module!






# 8-17. Styling Functions: Review and style functions from chapter 8 programs (example using 8-6).
def city_country(city_name, country_name): # Descriptive function and parameter names, snake_case
    """Return a neatly formatted string of city and country.""" # Docstring explaining function purpose
    formatted_string = f"\"{city_name.title()}, {country_name.title()}\"" # Meaningful variable name
    return formatted_string # Explicit return

location1 = city_country(city_name='santiago', country_name='chile') # Keyword arguments for clarity
print(location1) # Clear print statement

location2 = city_country('london', 'england')
print(location2)

location3 = city_country('new york', 'usa')
print(location3)


Output:
"Santiago, Chile"
"London, England"
"New York, Usa"






# 9-1. Restaurant: Restaurant class with attributes and methods.
class Restaurant:
    """A simple attempt to model a restaurant."""

    def __init__(self, restaurant_name, cuisine_type):
        """Initialize restaurant name and cuisine type attributes."""
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type

    def describe_restaurant(self):
        """Prints restaurant name and cuisine type."""
        print(f"Restaurant Name: {self.restaurant_name.title()}")
        print(f"Cuisine Type: {self.cuisine_type.title()}")

    def open_restaurant(self):
        """Prints a message indicating the restaurant is open."""
        print(f"{self.restaurant_name.title()} is now open!")

restaurant = Restaurant("The Italian Place", "Italian")
print("Restaurant Name:", restaurant.restaurant_name)
print("Cuisine Type:", restaurant.cuisine_type)

restaurant.describe_restaurant()
restaurant.open_restaurant()


Output:
Restaurant Name: The Italian Place
Cuisine Type: Italian
Restaurant Name: The Italian Place
Cuisine Type: Italian
The Italian Place is now open!






# 9-2. Three Restaurants: Create and describe three Restaurant instances.
class Restaurant:
    """A simple attempt to model a restaurant."""

    def __init__(self, restaurant_name, cuisine_type):
        """Initialize restaurant name and cuisine type attributes."""
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type

    def describe_restaurant(self):
        """Prints restaurant name and cuisine type."""
        print(f"Restaurant Name: {self.restaurant_name.title()}")
        print(f"Cuisine Type: {self.cuisine_type.title()}")

    def open_restaurant(self):
        """Prints a message indicating the restaurant is open."""
        print(f"{self.restaurant_name.title()} is now open!")

restaurant1 = Restaurant("The Italian Place", "Italian")
restaurant2 = Restaurant("Tokyo Sushi", "Japanese")
restaurant3 = Restaurant("Mexican Fiesta", "Mexican")

restaurant1.describe_restaurant()
restaurant2.describe_restaurant()
restaurant3.describe_restaurant()


Output:
Restaurant Name: The Italian Place
Cuisine Type: Italian
Restaurant Name: Tokyo Sushi
Cuisine Type: Japanese
Restaurant Name: Mexican Fiesta
Cuisine Type: Mexican






# 9-3. Users: User class with attributes and methods to describe and greet users.
class User:
    """Simple class to represent a user profile."""

    def __init__(self, first_name, last_name, username, email, location):
        """Initialize user attributes."""
        self.first_name = first_name
        self.last_name = last_name
        self.username = username
        self.email = email
        self.location = location

    def describe_user(self):
        """Prints a summary of the user's information."""
        print("\nUser Information:")
        print(f"Full Name: {self.first_name.title()} {self.last_name.title()}")
        print(f"Username: {self.username}")
        print(f"Email: {self.email}")
        print(f"Location: {self.location.title()}")

    def greet_user(self):
        """Prints a personalized greeting to the user."""
        print(f"Hello, {self.username}! Welcome back!")

user1 = User("john", "doe", "johndoe123", "john.doe@email.com", "new york")
user2 = User("jane", "smith", "janesmith", "jane.smith@email.com", "london")

user1.describe_user()
user1.greet_user()

user2.describe_user()
user2.greet_user()


Output:

User Information:
Full Name: John Doe
Username: johndoe123
Email: john.doe@email.com
Location: New York
Hello, johndoe123! Welcome back!

User Information:
Full Name: Jane Smith
Username: janesmith
Email: jane.smith@email.com
Location: London
Hello, janesmith! Welcome back!






# 9-4. Number Served: Add number_served attribute and methods to Restaurant.
class Restaurant:
    """A simple attempt to model a restaurant."""

    def __init__(self, restaurant_name, cuisine_type):
        """Initialize restaurant name and cuisine type attributes."""
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type
        self.number_served = 0 # Default attribute

    def describe_restaurant(self):
        """Prints restaurant name and cuisine type."""
        print(f"Restaurant Name: {self.restaurant_name.title()}")
        print(f"Cuisine Type: {self.cuisine_type.title()}")

    def open_restaurant(self):
        """Prints a message indicating the restaurant is open."""
        print(f"{self.restaurant_name.title()} is now open!")

    def set_number_served(self, customers_served):
        """Sets the number of customers served."""
        self.number_served = customers_served

    def increment_number_served(self, customers):
        """Increments the number of customers served."""
        self.number_served += customers

restaurant = Restaurant("Delicious Diner", "American")
print(f"Customers served initially: {restaurant.number_served}")

restaurant.number_served = 5 # Changing value directly
print(f"Customers served after direct change: {restaurant.number_served}")

restaurant.set_number_served(20) # Using set_number_served()
print(f"Customers served after set_number_served(): {restaurant.number_served}")

restaurant.increment_number_served(50) # Using increment_number_served()
print(f"Customers served after increment_number_served(): {restaurant.number_served}")


Output:
Customers served initially: 0
Customers served after direct change: 5
Customers served after set_number_served(): 20
Customers served after increment_number_served(): 70






# 9-5. Login Attempts: Add login_attempts and methods to User class.
class User:
    """Simple class to represent a user profile."""

    def __init__(self, first_name, last_name, username, email, location):
        """Initialize user attributes."""
        self.first_name = first_name
        self.last_name = last_name
        self.username = username
        self.email = email
        self.location = location
        self.login_attempts = 0 # Default attribute

    def describe_user(self):
        """Prints a summary of the user's information."""
        print("\nUser Information:")
        print(f"Full Name: {self.first_name.title()} {self.last_name.title()}")
        print(f"Username: {self.username}")
        print(f"Email: {self.email}")
        print(f"Location: {self.location.title()}")

    def greet_user(self):
        """Prints a personalized greeting to the user."""
        print(f"Hello, {self.username}! Welcome back!")

    def increment_login_attempts(self):
        """Increments the value of login_attempts."""
        self.login_attempts += 1

    def reset_login_attempts(self):
        """Resets login_attempts to 0."""
        self.login_attempts = 0

user = User("john", "doe", "johndoe123", "john.doe@email.com", "new york")

user.increment_login_attempts()
user.increment_login_attempts()
user.increment_login_attempts()
print(f"Login attempts: {user.login_attempts}")

user.reset_login_attempts()
print(f"Login attempts after reset: {user.login_attempts}")


Output:
Login attempts: 3
Login attempts after reset: 0







