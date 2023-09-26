""" This how you can add more argument you want """

def funcOfargs(num , num2, *args):
    print(num + num2)

    for n in args:
        print(n)


funcOfargs(10, 20, 100, 200, 300, 400,500)