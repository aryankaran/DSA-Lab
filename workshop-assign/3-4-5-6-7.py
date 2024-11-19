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

