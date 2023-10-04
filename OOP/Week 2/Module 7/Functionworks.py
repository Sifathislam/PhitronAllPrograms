""" In here we will seee some workd of function """

# IN Here we use function in function 
def outter_Function(Name):
    print(Name)
    def innerFunction(secndName):
        print(Name +" "+secndName)
    return innerFunction

outter_Function("Sifat")("Shaik") # This how you can call a nested function with peremeters 

# In Here we send function as argument 

def ReceviedFuncion(watingfunc):
    print("Prining somethings")
    watingfunc() # if you know the peremeter is a function than you can use it and you can definit like this
    print("Prining somethings")

# This how you can send function as argument 
def senderfuntion():
    print("I'm The sender function")
ReceviedFuncion(senderfuntion)
