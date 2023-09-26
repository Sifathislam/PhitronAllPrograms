# List methods 
from os import remove


number = [1,2,3,4,55,6]

# append 
number.append(55)

# Extend
# number.extend()

# insert 
number.insert(2,17)

# remove
if 4 in number:
    number.remove(4) # must be in the list 
else:
    print("There is no ", 4)

# pop 
print(number.pop())

# index 
index = number.index(3,1,4)
print(index)

# count 
howmanytimes = number.count(55)
print(howmanytimes)

# sort 
number.sort()

# reverse
number.reverse()

print(number)