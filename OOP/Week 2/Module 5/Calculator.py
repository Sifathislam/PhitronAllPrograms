""" In Here we will make a calculator 
    under a class all function ar called as method
"""

class Calculator:
    name = "Casio"

    # Sum function
    def sum(self, a, b): # we must always need give self or other extar one argument because of it's python instance 
        return a + b
    
    #Multiply function
    def multi(self, a, b):
        return a * b
    
    # Decuted function 
    def decuted(self, a, b):
        return a - b

    # Diveded function 
    def divede(self, a, b):
        return a // b
    
    # Moduls function 
    def modulo(self, a, b):
        return a % b
    
    # factorial function
    def factorial(self, n):
        result = 1
        for i in range(1, n+1, 1):
            result = result * i
        return result

    
# Now Time to test all methods 
Calculate = Calculator()
# sum 
print(Calculate.sum(10,10))
# divede 
print(Calculate.divede(10,10))
# minus 
print(Calculate.decuted(10,10))
# multiply 
print(Calculate.multi(10,10))
# modulas 
print(Calculate.modulo(10,10))
# factioral 
print(Calculate.factorial(10))
