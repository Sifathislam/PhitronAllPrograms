# MoBile BUUz BD
# Those are call inheriteance 
#1)Base Class, parent Class, common attribute + fuctions
#1)child Class, derved Class, uncommon attribute + fuctions

class CommonDeviceEspec:
    def __init__(self, Brand, Price, Model) -> None:
        self.Brand = Brand
        self.Price= Price
        self.Model = Model


class Infinix:
    def __init__(self,chargewatt,extraRam) -> None:
        self.chargewatt = chargewatt
        self.extraRam = extraRam

class Iphone_15proMax:
    def __init__(self) -> None:
        pass

class Laptop:
    def __init__(self, prossesor, ram, ssd, Adapter) -> None:
        self.prossesor = prossesor
        self.ram = ram
        self.ssd = ssd
        self.Adapter == Adapter
        self.InstalledApp = []
    
    def intallApps(self, app_name, app_size):
        self.app_name = app_name
        self.app_size = app_size

         

class SmartWatch:
    def __init__(self, screenSize, screenpixel) -> None:
        self.screenSize = screenSize
        self.screenpixel = screenpixel
    
    def Call_Number(self, Number):
        return f"Calling to {Number}"
        

class Charger:
    def __init__(self,watt,isFastCharge) -> None:
        self.watt = watt
        self.isFastCharge = isFastCharge