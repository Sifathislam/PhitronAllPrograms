""" In here we will seee how getter and settter work  """

class User:
    def __init__(self,Name, Id, Age, money) -> None:
        self._Name = Name
        self.__Id = Id
        self._Age = Age
        self.__money = money
    

    # Now We seee how to getter realonly work 
# if We need to metod to be a attribute so we have to do this 
    @property
    def salary(self):
        return self.__money
    
# This how we can add setter function on program 
    @salary.setter
    def salary(self,value):
         self.__money = value 

Sifat = User("Sifat",2241,20,10000)

# We can't change in method 
# print(Sifat.salary())
# if We need to metod to be a attribute so we have to do this 
print(Sifat.salary)
# Now this read only becase we do not declar setter before settter
# AttributeError: property 'salary' of 'User' object has no setter
# this errro will show 
# Sifat.salary = 5000 
# After make the setter function we can change in private attribute 
Sifat.salary = 5000 
print(Sifat.salary)





        