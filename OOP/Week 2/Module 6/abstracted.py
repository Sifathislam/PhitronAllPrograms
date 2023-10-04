""" IN here we will see how abstracd funtion work """
from abc import ABC,abstractmethod
class Parent(ABC):
    @abstractmethod
    def __init__(self, Name,Roll) -> None:
        self.Name = Name
        self.Roll = Roll
    @abstractmethod
    def Moveing(self, move):
        self.move = move

    @abstractmethod
    def __repr__(self) -> str:
        return f"{self.Name} and {self.Roll}"
    
class childOrabstractworkd(Parent):
    def __init__(self, Name, Roll) -> None:
       self.Name = Name
       self.Roll = Roll
    
    def Moveing(self, move):
        self.move = move

    def __repr__(self) -> str:
        return f"{self.Name} and {self.Roll}"

part = childOrabstractworkd("Hapo",234)

print(part)