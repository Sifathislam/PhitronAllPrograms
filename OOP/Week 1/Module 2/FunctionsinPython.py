""" We can use function on python like this way """
# num = input("Give the number : ")
# def func1(num):
#     print(num)

# func1(num)

a = int(input(": "))
b = int(input(": "))
c = int(input(": "))
def func(a, b, c):
    if a > b:
        c += a + b
    elif b < c:
        a += c * b
    else:
        return a + b + c
    return a * (c - b)

print(func(a, b, c))