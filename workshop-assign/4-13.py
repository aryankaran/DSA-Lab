# 4-13. Buffet
basic_foods = ("Pasta", "Salad", "Bread", "Tomato Soup", "Fruits")  # Tuple
print("\nOriginal menu:")
for food in basic_foods:
    print(food, end=', ')

print()


basic_foods[0] = "Rice"  # will cause error as immutable

basic_foods = ("Rice", "Salad", "Bread", "Tomato Soup", "Fruits")  # Create a new tuple
print("\nRevised menu:")
for food in basic_foods:
    print(food, end=', ')

print()
