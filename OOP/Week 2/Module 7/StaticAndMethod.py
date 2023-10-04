""" We will see some method of Class and static things  """

class company :
    companys = [] # This the Static Atrribute of A Class
    StatciName = "Meta"

    def __init__(self, Name , Adress):
        self.Name = Name   # Those are instacce attribute 
        self.Adress = Adress
    def see(self):
        print(self.Name , self.Adress)
    # If want declear any function that  declarte in the outside but it work with the main class 
    # this Called the Static Method 
    # And we also make CLass in using methods  
    # fisr let see about the stactic Method 
    @staticmethod
    def staticeMethod(a, b):
        print(a * b)

    # Static Class 
    @classmethod
    def subCompany(self,Name, subAdress):
        self.Name = Name
        self.subAdress = subAdress
        print("Name : ",Name,"Adress : ",subAdress)
    
Basundhara = company("Basundhara", "Dhaka")
Basundhara.see() 
Basundhara.staticeMethod(5,4) # This work with instance
# In Static method you can't use self  
company.staticeMethod(5,3)
company.subCompany("choto basudhara", "shanarper")