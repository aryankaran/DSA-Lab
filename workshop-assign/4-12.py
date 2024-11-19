# 4-12. More Loops (Modified for clarity - 2 separate loops)
my_foods = ['pizza', 'Sushi', 'Burger']
friend_foods = my_foods[:]

my_foods.append("cannoli")
friend_foods.append("Pasta")

print("\nMy favorite foods are:")
for food in my_foods:
  print(food)

print("\nMy friend's favorite foods are:")
for food in friend_foods:
  print(food)

