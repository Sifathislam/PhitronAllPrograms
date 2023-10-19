""" Shopping app """
from abc import ABC, abstractmethod

# Section : 1 Make Shopping platform
class Shopping_App:
    def __init__(self,NameOfCompany,trade_Licence) -> None:
        self.NameOfCompany = NameOfCompany
        self.Trade_Licence = trade_Licence
        self.sellers_list = {}
        self.buyers_list = {}
        self.products = {}

    def show_User_List(self):
        print("_______SELLERS_______")
        for user in self.sellers_list:
            print(f"Name: {self.sellers_list[user].Name}, User Name: {self.sellers_list[user].UserName}")
        print("_______BUYERS_______")
        for user in self.buyers_list:
            print(f"Name: {self.buyers_list[user].Name}, User Name: {self.buyers_list[user].UserName}")

    def show_Products(self) -> str:
        if len(self.products) > 0:
            for product in self.products:
                print(f"Product Name: {self.products[product].Name} , Quntity: {self.products[product].Quantity} and Single Item Price: {self.products[product].SingleItemPrice}")
        else:
            print("NO Product Available")
    def deleteProducts(self,name,qunatity):
        if name in self.products:
            self.products[name].Quantity -= qunatity

# Section : 2 User Information
class User(ABC):
    def __init__(self, Name, UserName,Password) -> None:
        self.Name = Name
        self.UserName = UserName
        self.__Password = Password

    @property
    def password(self):
        return self.__Password
    @password.setter
    def password(self,newPassword):
        self.password = newPassword

    @abstractmethod
    def Display_Method(self):
        raise NotImplementedError

# Section : 3 Buyer Information
class Buyer(User):
   def __init__(self, Name, UserName, Password) -> None:
       super().__init__(Name, UserName, Password)
       self.AvailableCash = 0
   def Display_Method(self):
      return f"Name : {self.Name} , User Name: {self.UserName}"

   def Load_cash(self,money):
       self.AvailableCash += money

   def Show_cash(self):
       print(self.AvailableCash)
    #    
#    def Buy_product(self,)

# Section : 4 Product Information
class Product:
    def __init__(self,Name,Quantity,SingleItemPrice) -> None:
        self.Name = Name
        self.Quantity = Quantity
        self.SingleItemPrice = SingleItemPrice

# Section : 5 Seller Information
class Seller(User):
    def __init__(self, Name, UserName,Password) -> None:
        super().__init__(Name, UserName,Password)
    
    def Display_Method(self):
        return f"Name : {self.Name} , User Name: {self.UserName}"
    
    def add_products(self,product,shopping_app): 
        shopping_app.products.append(product)

# Work of registation_And_Login 

class registation_And_Login:
    def __init__(self) -> None:
        self.loged_in = None
    def register(self,userType,Name,UserName, Password,MallName):
        if userType == "Seller":
            if UserName is not MallName.sellers_list:
                newUser = Seller(Name,UserName,Password)
                MallName.sellers_list[UserName] = newUser
                print(f"{Name} SuccsessFully Registerd")
            else:
                print("You are already registerd")
        if userType == "Buyer":
            if UserName is not MallName.buyers_list:
                 newUser = Buyer(Name,UserName,Password)
                 MallName.buyers_list[UserName] = newUser
                 print(f"{Name} SuccsessFully Registerd")
            else:
                 print("You are already registerd")

    def logIn(self,UserType,UserName,Passward,MallName):
        if UserType == "Seller":
            if UserName in MallName.sellers_list and Passward == MallName.sellers_list[UserName].password:
                self.loged_in = MallName.sellers_list[UserName]
                print(f"{MallName.sellers_list[UserName].Name} SuccsessFully Loged In")
                return True
            else:
                print("You have enterd worng password or user name ")
        elif UserType == "Buyer":
            if UserName in MallName.buyers_list and Passward == MallName.buyers_list[UserName].password:
                self.loged_in = MallName.buyers_list[UserName]
                print(f"{MallName.buyers_list[UserName].Name} SuccsessFully Loged In")
                return True
            else:
                print("You have enterd worng password or user name ")
    def logOut(self):
        self.loged_in = None
        
    

