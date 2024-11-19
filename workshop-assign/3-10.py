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

