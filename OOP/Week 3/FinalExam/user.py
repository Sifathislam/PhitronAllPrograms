import random
class User:
    def __init__(self, name, email, address, account_type, bank) -> None:
        self.name = name
        self.email = email
        self.address = address
        self.account_type = account_type
        self.balance = 0
        self.loan_times = 0
        self.account_number = random.randint(1000, 1000)
        self.transaction_history = []
        self.bank = bank

    def deposit(self, amount):
        self.balance += amount
        transfer = f'Deposit was {amount}'
        self.transaction_history.append(transfer)
        self.bank.total_balance += amount


    def withdraw(self, amount):
        if self.balance > amount:
            self.balance -= amount
            transfer = f'Withdraw was {amount}'
            self.transaction_history.append(transfer)
            self.bank.total_balance -= amount

        else:
            print('Withdrawal amount exceeded')
        
    
    def available_balance(self):
        print(self.balance)

    def check_transaction_history(self):
        print('----Here was the transaction history----')
        for history in self.transaction_history:
            print(history)

    def take_loan(self, amount):
        if self.bank.crupt == False:
            if self.bank.feature == True:
                if self.loan_times < 2:
                    self.balance += amount
                    self.bank.total_balance -= amount
                    self.bank.total_loan += amount 
                    self.loan_times = self.loan_times + 1
                    transfer = f'Deposit was {amount}'
                    self.transaction_history.append(transfer)
                else:
                    print('You can take a loan from the bank at most two times.')
            else:
                print('The loan feature turn off by the Admin')
        else:
            print('Cant give you loan because Bank was Crupt')
    
    def transfer_money(self, amount, user_name):
        if len(self.bank.users) == 0:
            print('User not available')
        else:
            for user in self.bank.users:
                if user_name == user.name:
                    if self.balance > amount:
                        user.balance += amount
                        self.balance -= amount
                        transfer = f'Transfer was {amount}'
                        self.transaction_history.append(transfer)
                        return
                    else:
                        print('You dont have sufficient balance for transfer')                    
            else:
                print('cant find user name')    
                   

    

class Bank:
    def __init__(self, name) -> None:
       self.name = name
       self.total_balance = 0
       self.total_loan = 0
       self.crupt = False
       self.users = []
       self.feature = True #feature bolte loan er option off on korak bujhai