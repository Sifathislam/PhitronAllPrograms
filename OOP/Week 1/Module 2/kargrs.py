""" Now we see how we can set argument to a function by key  """

# Nomal function with nomal argument 
# def funcNormal(num1 , num2):
#     return num1 + num2
# print(funcNormal(10, 20))

# Normal function with defult arguments 
# def funcNormal(num1 , num2, num3 = 0, num4 = 0):
#     return num1 + num2 + num3 + num4
# print(funcNormal(10, 20, 5, 5))

# Funtion with many normal argument 
# def funcNormal(num1 , num2, *args):
#     sum = 0
#     for num in args:
#         sum+= num
#     return num1 + num2 + sum
# print(funcNormal(10, 20, 5, 5 , 5, 5, 5,59, 5,33,4,34,3,42))

# Function with many normal and key bassd argument 
# def funcNormal(num1 , num2 , *args, **kargs):
#     sum = 0
#     for num in args:
#         sum+= num
#     for key, word in kargs.items():
#         print(key, word)
#     return num1 + num2 + sum 
# Function with many normal and key bassd argument and return multiple items as taple
def funcNormal(num1 , num2 , *args, **kargs):
    sum = 0
    for num in args:
        sum+= num
    for key, word in kargs.items():
        print(key, word)
    return num1 , num2 , sum 

items = funcNormal(10, 20,70, Name = "Sifat", Surname = "Islam")
print(items)
