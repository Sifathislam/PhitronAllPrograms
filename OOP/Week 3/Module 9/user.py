# In here we will the Ride Share Platform
from abc import ABC, abstractmethod
from datetime import datetime
# S--> 1 : Main Rider share Plat form work
class Ride_Share:
    def __init__(self, Name) -> None:
         self.Name = Name
         self.Driver_List = []
         self.Rider_List = []

    def add_Rider(self,rider):
         self.Rider_List.append(rider)

    def add_Driver(self,Driver):
         self.Driver_List.append(Driver)
    
    def __repr__(self) -> str:
         return f"{self.Name} Plat Form has Drivers : {len(self.Driver_List)} And Riders {len(self.Rider_List)}"

# S--> 2 : User Class work
class User(ABC):
    def __init__(self,name, email, nid) -> None:
          self.Name = name
          self.email = email
          self.__Nid = nid
     
    @abstractmethod
    def display_profile(self):
         raise NotImplementedError
    
# S--> 3 : Rider Class work
class Rider(User):
    def __init__(self, name, email, nid, intial_amount, current_location) -> None:
          super().__init__(name, email, nid)
          self.current_ride = None
          self.Wallet = intial_amount
          self.current_location = current_location
     
    def display_profile(self):
         return f"The rider Name :{self.Name} and Email : {self.email}"
    
    def load_Cash(self,amount):
        self.Wallet += amount
    
    def update_location(self, Loaction):
         self.current_location = Loaction
    
    def Requst_Ride(self,NameOfPlatform, destination):
         if not self.current_ride:
              ride_requst = Ride_request(self, destination)
              ride_matcher = Ride_Matching(NameOfPlatform.Driver_List) 
              ride = ride_matcher.find_driver(ride_requst)
              self.current_ride = ride
    def show_current_ride(self,driver):
          print(f"Rider: {self.Name} is going {self.current_ride} with Driver: {driver.Name}")

# S--> 4 : Driver All INfo
class Driver(User):
    def __init__(self, name, email, nid,current_location) -> None:
        super().__init__(name, email, nid)
        self.current_location = current_location
        self.wallet = 0
    
    def display_profile(self):
         return f"Driver Name : {self.Name} and email : {self.email}"
    
    def accept_ride(self,ride):
         ride.setDriver(self)
    
# S--> 5 : Ride All INfo
class Ride:
    def __init__(self,start_location, end_location) -> None:
        self.start_location = start_location
        self.end_location = end_location
        self.driver = None
        self.Rider = None
        self.start_time = None
        self.end_time = None
        self.estimate_fare = None
        self.wallet = 0
    
    def setDriver(self,driver):
         self.driver = driver
    
    def start_ride(self):
         self.start_time = datetime()

    def end_ride(self, amount):
        self.end_time = datetime()
        self.driver.wallet += self.estimate_fare
        self.Rider.wallet -= self.estimate_fare

    def __repr__(self) -> str:

         return f"{self.start_location} to {self.end_location}"
# S--> 6 : Ride requst 

class Ride_request:
     def __init__(self, riderItSelf, destination) -> None:
          self.ride = riderItSelf
          self.end_location = destination

# S--> 7 : Ride matching
class Ride_Matching:
     def __init__(self,drivers) -> None:
          self.available_driver = drivers
     
     def find_driver(self, ride_requst):
          if len(self.available_driver) > 0:
               print("Looking for a driver")
               driver = self.available_driver[0]
               ride = Ride(ride_requst.ride.current_location,ride_requst.end_location)
               driver.accept_ride(ride)
               return ride
          

#Give the commmand for the itergration

Uber = Ride_Share("UBER")

Sifat = Rider("Sifat","Sifathislam790@gmail.com",9923242,1000,"Narayanganj")
Ronaldo = Driver("Cristiano Ronaldo","cristinoRonaldo@gmai.com",0,"Narayaganj")
Uber.add_Rider(Sifat)
Uber.add_Driver(Ronaldo)

print(Uber)
Sifat.Requst_Ride(Uber,"Dhaka")
Sifat.show_current_ride(Ronaldo)