""" In Here we will see some example of the encapsulatoins """

class encapsultaion:
    def __init__(self,NameofPublic,NameofPrivate,nameofProtected) -> None:
        self.NameofPublic = NameofPublic
        self.__NameofPrivate = NameofPrivate
        self._NameofProtected = nameofProtected

    # def __repr__(self) -> str:
    #     return f"Print the public {self.NameofPublic} print the private  {self.__NameofPrivate} print the protected {self._NameofProtected}"
    

class toAcessEncapsul(encapsultaion):
    def __init__(self, NameofPublic, NameofPrivate, nameofProtected) -> None:
        super().__init__(NameofPublic, NameofPrivate, nameofProtected)


Thename = encapsultaion("Publi0","Privat1","Protecte2")
print(Thename._NameofProtected)
print(Thename.NameofPublic)
print(Thename.__NameofPrivate)