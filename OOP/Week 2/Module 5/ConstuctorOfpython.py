""" In This code we will how create or define and constructor function on a Class """

class pen_Construc:
    #This is the constuctor function of the python languge
    def __init__(self, Brand_Name, PriceOfHoleSale, priceOfLocalSale,innkColor):
        self.Brand_Name = Brand_Name
        self.PriceOfHoleSale = PriceOfHoleSale
        self.priceOfLocalSale = priceOfLocalSale
        self.innkColor = innkColor

    def profitFromLoaclMarket(self, quntity,perpicePrice,mainprice):
        sale = quntity * perpicePrice
        revenue = sale - mainprice
        return revenue
    
goodLouckTopper = pen_Construc("Good Luck",4,5,"Black")
waterMan = pen_Construc("Water Man",20,50,"RGB")
FeberCalsatll = pen_Construc("Feber Calsatll",400,500,"Golden")

        
print(goodLouckTopper.Brand_Name,goodLouckTopper.PriceOfHoleSale,goodLouckTopper.priceOfLocalSale,goodLouckTopper.innkColor,'\n')
print(waterMan.Brand_Name,waterMan.PriceOfHoleSale,waterMan.priceOfLocalSale,waterMan.innkColor,'\n')
print(FeberCalsatll.Brand_Name,FeberCalsatll.PriceOfHoleSale,FeberCalsatll.priceOfLocalSale,FeberCalsatll.innkColor,'\n')

print(f"Profit of {goodLouckTopper.Brand_Name} {goodLouckTopper.profitFromLoaclMarket(100,5,400)}")
print(f"Profit of {waterMan.Brand_Name} {waterMan.profitFromLoaclMarket(100,50,20000)}")
print(f"Profit of {FeberCalsatll.Brand_Name} {FeberCalsatll.profitFromLoaclMarket(100,500,400000)}")
