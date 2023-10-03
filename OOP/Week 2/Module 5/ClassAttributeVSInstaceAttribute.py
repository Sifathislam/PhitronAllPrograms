""" IN This We will see the difference bettwen Class attributes and Instace """

# Calss atribute 
class AttributeOfClass:
    ShopCart = []
    def __init__ (self, name,buget):
        self.name = name
        self.id = id
    def AddToCart (self,item,idd):
        self.ShopCart.append({idd,item})

# AttributeOfInstace
class AttributeOfInstace:
    def __init__(self,name,buget):
        self.name = name
        self.buget = buget
        self.ShopCart =[]
    
    def AddToCart (self, item, idd):
        self.ShopCart.append({idd,item})

# Print of Class Attribute
ClassAt_person1 = AttributeOfClass('person1',100000)
ClassAt_person1.AddToCart("GTX4090",99220)
ClassAt_person1.AddToCart("AMD ULTRA",199220)
ClassAt_person1.AddToCart("Conster",53920)
print(ClassAt_person1.ShopCart)

ClassAt_person2 = AttributeOfClass('person2',100000)
ClassAt_person2.AddToCart("T-Shit",20342)
ClassAt_person2.AddToCart("Pant",35223)
ClassAt_person2.AddToCart("Shoe",35152)

print(ClassAt_person1.ShopCart)
# Print of Class Attribute
ClassAt_person1 = AttributeOfInstace('person1',100000)
ClassAt_person1.AddToCart("GTX4090",99220)
ClassAt_person1.AddToCart("AMD ULTRA",199220)
ClassAt_person1.AddToCart("Conster",53920)
print(ClassAt_person1.ShopCart)

ClassAt_person2 = AttributeOfInstace('person2',100000)
ClassAt_person2.AddToCart("T-Shit",20342)
ClassAt_person2.AddToCart("Pant",35223)
ClassAt_person2.AddToCart("Shoe",35152)

print(ClassAt_person2.ShopCart)