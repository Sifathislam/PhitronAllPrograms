""" Shopping app """
from abc import ABC, abstractmethod

# Section : 1 Make Shopping platform
class Shopping_App:
    def __init__(self,NameOfCompany,trade_Licence) -> None:
        self.NameOfCompany = NameOfCompany
        self.Trade_Licence = trade_Licence
        self.seller = []

# Section : 2 User Information
class User(ABC):
    def __init__(self, Name, email,Password) -> None:
        self.Name = Name
        self.email = email
        self.__Password = Password
    @abstractmethod
    def Display_Method(self):
        raise NotImplementedError

# Section : 3 Buyer Information
class Buyer(User):
    def __init__(self, Name, email,Password) -> None:
        super().__init__(Name, email,Password)

    def Display_Method(self):
        return f"Name : {self.Name} , Email: {self.email}"


# Section : 4 Product Information
class Product:
    def __init__(self,Name,Quantity,SingleItemPrice) -> None:
        self.Name = Name
        self.Quantity = Quantity
        self.SingleItemPrice = SingleItemPrice

# Section : 4 Product Information
class Product_Stock:
    def __init__(self) -> None:
        self.Chlothes = []
    def show_Products(self) -> str:
            for chloth in self.Chlothes:
                print(f"Clothe Name: {chloth.Name} , Quntity: {chloth.Quantity} and Single Item Price: {chloth.SingleItemPrice}")

# Section : 5 Seller Information
class Seller(User,Product_Stock):
    def __init__(self, Name, email,Password) -> None:
        super().__init__(Name, email,Password)
    
    def Display_Method(self):
        return f"Name : {self.Name} , Email: {self.email}"
    
    def add_products(self,P_Name,Quntity,SigleIeamPrice):
        self.ad_product = Product(P_Name,Quntity,SigleIeamPrice)    
        self.Chlothes.append(self.ad_product)

   


RichManapp = Shopping_App("Rich Man",1003322)

sifat = Seller('Sifat',"Sifathislam79@gmail.com",11223344)
rifat = Buyer("rifat","rifathislam703@gmail.com",1122334455)
RichManapp.seller.append(sifat)
print(sifat.Display_Method())
print(rifat.Display_Method())


while True:
    print(f"Welcome to the {RichManapp.NameOfCompany} App")
    print("OPTION: 1 : Login")
    print("OPTION: 2 : Register New Account")

    option = int(input("ENTER YOUR OPTION: "))

    if option == 1:
        print("OPTION: 1 : Login for Seller")
        print("OPTION: 2 : Login for Buyer")
        LGoption = int(input("ENTER YOUR OPTION: "))
        if LGoption == 1: 
            print("Seller Login Successfull")
            print("OPTION: 1 : View Profile")
            SellerOption = int(input("ENTER YOUR OPTION: "))

            if SellerOption == 1: 
                name = input("Give the name")
                if name in RichManapp.seller[0]:
                    print(name.Display_Method())

        elif LGoption == 2:
            print("Buyer Login Successfull")
            print("Seller Login Successfull")
            print("OPTION: 1 : View Profile")
            BuyerOption = int(input("ENTER YOUR OPTION: "))
            if BuyerOption == 1:
                print(Buyer.Display_Method())

    if option == 2:
        print("OPTION: 1 : Register New Account For SELLER")
        print("OPTION: 2 : Register New Account For BUYER")
        ACoption = int(input("ENTER YOUR OPTION: "))
        if ACoption == 1: 
            name = input("Enter Your Name: ")
            email = input("Enter Your Email: ")
            Password = input("Enter Your Password: ")
            name = Seller(name,email,Password)
            RichManapp.seller.append(name)
            print("Seller Registion Successfull")
        elif ACoption == 2: 
            name = input("Enter Your Name: ")
            email = input("Enter Your Email: ")
            Password = input("Enter Your Password: ")
            
            name = Buyer(name,email,Password)
            print("Buyer Registion Successfull")

            