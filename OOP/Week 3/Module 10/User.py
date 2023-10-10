# IN Here we work with users
from abc import ABC , abstractmethod
# User class 
class User:
    def __init__(self, name,phone, email, address) -> None:
        self.name = name
        self.phone = phone
        self.email = email
        self.adress = address

# Section of Customer 
class Customer(User):
    def __init__(self, name,phone, email, address, money) -> None:
        self.__order = None
        self.wallet = money
        super().__init__(name,phone, email, address)

    @property
    def order(self):
        return self.__order
    
    @order.setter
    def order(self,order):
        self.__order = order
    
    def place_order(self, order):
        self.order = order
        print(f"{self.name} placed an order {order.items}")
    
    def eat_food(self,order):
        print(f"{self.name} is eating the {order.items}")
    
    def pay_for_order(self, amount):
        # TODO: give the money to the manager
        pass

    def give_tips(self, tips_amount):
        pass

    def write_review(self, starts):
        pass

# Section of employee 

class Employee(User):
    def __init__(self, name,phone, email, address, salary, starting_date, department) -> None:
        super().__init__(name,phone, email, address)

        self.salary = salary
        self.starting_date = starting_date
        self.department = department

class Chef(Employee):
    def __init__(self, name, phone, email, address, salary, starting_date, department, cooking_item) -> None:
        super().__init__(name, phone, email, address, salary, starting_date, department)
        self.cooking_item = cooking_item

class Server(User):
    def __init__(self, name, phone, email, address) -> None:
        self.tips_earning = 0
        super().__init__(name, phone, email, address)
    def take_order(self, order):
        pass

    def transfer_order(self, order):
        pass

    def serve_food(sefl, order):
        pass

    def receive_tips(self, amount):
        self.tips_earning += amount