""" In This page we will work with the users the are in the restaurant """

from abc import ABC, abstractmethod

# Section --> 1 User 
class User(ABC):
    def __init__(self,name, phone, email, address) -> None:
        self.name = name
        self.phone = phone
        self.email = email
        self.address = address


# ---------> Custormer(User)
class Customer(User):
    def __init__(self, name, phone, email, address, money) -> None:
        self.wallet = money
        self.__order = None
        self.due_amount = 0
        super().__init__(name, phone, email, address)
    @property
    def order(self):
        return self.__order
    
    @order.setter
    def order(self, order):
        self.__order = order
    
    def place_order(self,order):
        self.order = order
        self.due_amount += order.bill
        print(f"{self.name} Place Order of bill is  {order.bill}")
    
    def eat_food(self, order):
        print(f"{self.name} is eating {order.items}")
    
    def pay_for_order(self, amount):
        #TODO sumit the money to the manager 
        pass
    def give_tips(self, tips_amont):
        pass
    def review(self,starts):
        pass

# ---------> Employee(User)
class Employee(User):
    def __init__(self, name, phone, email, address,salary, starting_date,department) -> None:
        self.salary = salary
        self.starting_date = starting_date
        self.due = salary
        self.department = department
        super().__init__(name, phone, email, address)
    
    def recevie_salary(self):
        self.due = 0

# ---------> Chef(Employee)
class Chef(Employee):
    def __init__(self, name, phone, email, address, salary, starting_date, department, cooking_item) -> None:
        self.cooking_item = cooking_item
        super().__init__(name, phone, email, address, salary, starting_date, department)

# ---------> Server(Employee)
class Server(Employee):
    def __init__(self, name, phone, email, address, salary, starting_date, department) -> None:
        self.tips_earning = 0
        super().__init__(name, phone, email, address, salary, starting_date, department)
    
    def take_order(self,order):
        pass
    def transfer_order(self, order):
        pass
    def serve_food(self, order):
        pass
    def recevice_tips(self, amount):
        pass
# ---------> Manager (Employee)
class Manager(Employee):
    def __init__(self, name, phone, email, address, salary, starting_date, department) -> None:
        super().__init__(name, phone, email, address, salary, starting_date, department)
