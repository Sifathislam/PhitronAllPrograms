""" IN This Lets Mulitple INheritance """

class Father:
    def __init__(self,FatherName) -> None:
        self.FatherName = FatherName

    def FatherNameSent(self):
        return self.FatherName

class Mother:
    def __init__(self, MotherName) -> None:
        self.MotherName = MotherName

    def MotherNameSent(self):
        return self.MotherName

class Son(Father,Mother):
    def __init__(self, Name,FatherName,MotherName) -> None:
        self.Name = Name
        Father.__init__(self,FatherName)
        Mother.__init__(self,MotherName)
    def FatherNameSent(self):
        return super().FatherNameSent()
    
    def MotherNameSent(self):
        return super().MotherNameSent()
    
    def __repr__(self) -> str:
        return f"{self.Name} from {self.FatherNameSent()} and form{self.MotherNameSent()}"

son = Son("Junior Sifat","Sifat Islam","___ Islam")

print(son)
      