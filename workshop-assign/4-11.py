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

