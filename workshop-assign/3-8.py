
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
