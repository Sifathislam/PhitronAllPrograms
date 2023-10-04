""" In Here we will see how decarator function work  """
import math
def Decarator(whoCalled):
    print("Iam decarator")
    def innerDecarator(*args, **kwargs):# becasue of we don't know how much argument's will the use pass so we use args and kwargs
        print("Start The function")
        whoCalled(*args,**kwargs)
        print("Ended The fucntion")
    return innerDecarator

@Decarator
def Get_factorial(n,m):
    result = math.factorial(n)
    result2 = math.factorial(m)
    resutl3 = result + result2
    print(resutl3)
Get_factorial(n  = 5,m = 5)
    