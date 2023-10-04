""" In Here we will se how multi level Inheritance work """

# Class of the GreatGrand Father 
class greatGrandFather:
    def __init__(self,Name,numberofInheritance) -> None:
        self.Name = Name
        self.numberofInheritance = numberofInheritance
    
    def __repr__(self) -> str:
        return f"I'am {self.Name} of All the Class of here. And the inheritance number is {self.numberofInheritance}"


class GrandFather(greatGrandFather):
    def __init__(self, Name,numberofInheritance) -> None:
        super().__init__(Name,numberofInheritance)

    def __repr__(self) -> str:
        return super().__repr__()

class Father(GrandFather):
    def __init__(self, Name, numberofInheritance) -> None:
        super().__init__(Name, numberofInheritance)
    def __repr__(self) -> str:
        return super().__repr__()
    
class Son(Father):
    def __init__(self, Name, numberofInheritance) -> None:
        super().__init__(Name, numberofInheritance)
    def __repr__(self) -> str:
        return super().__repr__()
    
class grandSon(Son):
    def __init__(self, Name, numberofInheritance) -> None:
        super().__init__(Name, numberofInheritance)
    def __repr__(self) -> str:
        return super().__repr__()
    
class greatGranSon(grandSon):
    def __init__(self, Name, numberofInheritance) -> None:
        super().__init__(Name, numberofInheritance)
    def __repr__(self) -> str:
        return super().__repr__()

GGFClass = greatGrandFather("Great Grand Father",1)
GFClass = GrandFather("Grand Father",2)
FClass = Father("Father",3)
SClass = Son("Son",4)
GSClass = grandSon("Grand Son",5)
GGSClass = GrandFather("Great Grand Son",6)

print(GGFClass)
print(GFClass)
print(FClass)
print(SClass)
print(GSClass)
print(GGSClass)