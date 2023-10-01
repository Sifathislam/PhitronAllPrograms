""" In We will see how set work and some method """
# This how declaer set 
# Set Always Have Uniqe values 
number = [1,234,4,2,42,14,3423,141,4,1,4,2,1]

number = set(number)
num1 = {1,2,31,3241,4,21,2,2,2,2}

# print(num1[1]) #You can't access this like this
num1.add(12)
num1.add(12)
num1.add(12)
num1.add(12)
num1.add(12)
num1.add(12)#When you add same value serveral time it  make it one time
num1.add(12)
num1.add(12)
num1.add(12)
num1.add(12)
num1.add(12)
num1.add(12)
num1.add(12)
# Use the update() method to add multiple elements (from an iterable) to a set.
num1.update([333,444,555])
# Removing Elements:

# Use the remove() method to remove a specific element. It raises an error if the element is not found.
# Use the discard() method to remove a specific element without raising an error if it's not found.
# Use the pop() method to remove and return an arbitrary element from the set.
num1.remove(12)
num1.discard(333)
num1.pop()

# Checking Membership:

# You can check if an element is in a set using the in keyword.
if 444 in num1:
    print("YES")
else:
    print("NO")


#     \Set Operations:

# Union: Use the union() method or the | operator to combine two sets.
# Intersection: Use the intersection() method or the & operator to find elements common to two sets.
# Difference: Use the difference() method or the - operator to find elements in one set but not in the other.

# print(num1.union(number))
# print(num1.intersection(number))
# print(num1.difference(number))

print(num1)