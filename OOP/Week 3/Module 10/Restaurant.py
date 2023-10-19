""" In This page we will store information for the restaurant """

class Restaurant:
    def __init__(self,name,rent,menu = []) -> None:
        self.name = name
        self.order = []
        self.chef = None
        self.server = None
        self.manager = None
        self.rent = rent
        self.menu = menu
        self.revenue = 0
        self.expenses = 0
        self.balance = 0
        self.profit = 0
    
    def add_employee(self, typeOfEmployee, employee):
        if typeOfEmployee == "chef":
            self.chef = employee
        elif typeOfEmployee == "server":
            self.server = employee
        elif typeOfEmployee == "manager":
            self.manager = employee
    
    def add_order(self,order):
        self.order.append(order)

    def receive_payment(self,amount,order,coustomer):
        if order.bill < amount:
            self.revenue += order.bill
            self.balance += order.bill
            coustomer.due_amount  = 0
            return amount - order.bill
        else:
            print("You don't have enough money to pay the bill")
    
    def pay_expenses(self,amount, descrition):
        self.expenses += amount
        self.balance -= amount
        print(f"Expenses {amount} for {descrition}")
    
    def pay_salary(self,employee):
        print(f"Paying salary of {employee.name} amount {employee.salary}")
        if employee.salary < self.balance:
            self.balance -= employee.salary
            self.expenses += employee.salary
            employee.recevie_salary()
    
    def show_Employee(self):
        print("\n\n_____________SHOWING EMPLOYEE INFOMATION_______________\n")
        if self.chef is not None:
            print(f"Chef Name: {self.chef.name}, Salary: {self.chef.salary}")
        if self.server is not None:
            print(f"Chef Name: {self.server.name}, Salary: {self.server.salary}")

