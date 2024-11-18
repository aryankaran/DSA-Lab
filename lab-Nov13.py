'''
Set:-> collection of elements

Implementing set theory oprations in python ....
'''


set_s1 = set([1, 3, 4, 5, 7, "hey"])
set_s2 = set([90, 34, 3123, 123])

print("Set 1:-> ", set_s1, "\n", "Set 2:-> ", set_s2, sep='')
print("Set difference:", set.difference(set_s1, set_s2) )
print("Set Union:", set.union(set_s1, set_s2) )
print("Set intersection:", set.intersection(set_s1, set_s2) )
print("Set symmetric difference:", set.symmetric_difference(set_s1, set_s2) )


# tuples

tup = tuple(set_s1)
print("Tuple:->", tup)

tup.count


