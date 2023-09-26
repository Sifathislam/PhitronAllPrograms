""" 
1.float
2. take 3 number give largest number 
3. take 3 number give sum number 
4.run a loop and show the odd numbers
5.make grad calculator 

"""

# 2. take 3 number give largest number 
# 3. take 3 number give sum number 
# x = int(input("Give the number 1: "))
# y = int(input("Give the number 2: "))
# z = int(input("Give the number 3: "))

# if x > y and x > z:
#     print(x)
# elif y > x and y > z:
#     print(y)
# else:
#     print(z)

# print(x+z+y)

# 4.run a loop and show the odd numbers

# for nums in range(0,20):
#     if nums % 2 != 0:
#         print(nums)

# 5.make grad calculator
nums = int(input("Give the numebr you get : "))

if nums >= 90 and nums <= 100 :
    print("A+ Glden")
elif nums >= 80 and nums <= 100 :
    print("A+")
elif nums >= 70 and nums <= 79 :
    print("A-")
elif nums >= 50 and nums <= 69 :
    print("B")
elif nums >= 40 and nums <= 49 :
    print("C")
elif nums >= 33 and nums <= 39 :
    print("D")
elif nums >= 0 and nums <= 32 :
    print("F") 
else:
    print("Type Wrong Number")