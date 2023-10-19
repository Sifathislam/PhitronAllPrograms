class Admin:
    def __init__(self, bank) -> None:
        self.bank = bank
        self.name = 'Admin'
    
    def delete_user(self, email):
        for user in self.bank.users:
            if user.email == email:
                self.bank.users.remove(user)
                print('User Deleted  Successfully')
                return
        print('Cant find the user')
               

     
    def show_user(self):
        if len(self.bank.users) == 0:
            print('User not available')
        else:
            for user in self.bank.users:
                print(user.name)

    def check_available_balance(self):
       print(self.bank.total_balance)

    def check_loan(self):
        print(self.bank.total_loan)

    def bank_crupt(self, option):
        if option == 'Yes':
            self.bank.crupt = True
           
    
    def bank_feature(self, option):
       if option == 'OFF':
            self.bank.feature = False
       else:
           self.bank.feature = True
       
class Register:
    def __init__(self) -> None:
        self.loggedIn = None
    
    def registration(self, bank, current_user):
        self.bank = bank
        for user in self.bank.users:
            if current_user.email == user.email:
                print('This email already register')
                return
        self.bank.users.append(current_user)

    def login(self, bank, current_email):
        self.bank = bank
        for user in self.bank.users:
            if current_email == user.email:
                self.loggedIn = user
                return True
        print('Invalid email')

    def logOut(self):
        self.loggedIn = None