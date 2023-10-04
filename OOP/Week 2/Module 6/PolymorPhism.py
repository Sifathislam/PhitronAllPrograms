# """ In here we will see some polymorphism concept  """

# class animal:
#     def __init__(self,Name, Sound) -> None:
#         self.Name = Name
#         self.Sound = Sound
# class Dog(animal):
#     def __init__(self, Name, Sound) -> None:
#         super().__init__(Name, Sound)
    
#     def __repr__(self) -> str:
#         return f"The{self.Name} Say {self.Sound}{self.Sound}"

# class Cat(animal):
#     def __init__(self, Name, Sound) -> None:
#         super().__init__(Name, Sound)

#     def __repr__(self) -> str:
#         return f"The {self.Name} Say {self.Sound} {self.Sound}"        


# citi = Cat("CitiCat", " Mewo")
# Scobby = Dog("Scobby", " boooh") 

# print(Scobby)
# print(citi)
# this not a perfect example 

class Animal:
    def speak(self):
        pass

class Dog(Animal):
    def speak(self):
        return "Woof!"

class Cat(Animal):
    def speak(self):
        return "Meow!"

def animal_sound(animal):
    return animal.speak()

# Create instances of Dog and Cat
dog = Dog()
cat = Cat()

# Call the speak method on both objects without knowing their specific types
print(animal_sound(dog))  # Output: Woof!
print(animal_sound(cat))  # Output: Meow!