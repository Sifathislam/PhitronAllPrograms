# Section Of Extra
import random

# Secton ---------:> 1) Bank Class


class Bank:
    def __init__(self, Name, Loaction) -> None:
        self.Name = Name
        self.Location = Loaction
        self.Users = []
        self.total_Balance = 0
        self.total_Loan = 0
        self.Bankrupt = False
        self.Loan_System = True

# Secton ---------:> 2)User Class


class User:
    def __init__(self, Name, Email, Address, Account_Type, PassWord) -> None:
        self.Name = Name
        self.Email = Email
        self.Address = Address
        self.Account_Type = Account_Type
        self.__Password = PassWord
        self.Balance = 0
        self.Account_ID = random.randint(10000, 10000)
        self.Transaction_history = []
        self.Loan_Times = 2

     # Get password
    @property
    def password(self):
        return self.__Password

     # Set password
    @password.setter
    def password(self, passW):
        self.password = passW

    # Deposit Money
    def deposit_Money(self, Bank, amount):
        if Bank.Bankrupt == False:
            self.Bank = Bank
            self.Balance += amount
            self.Bank.total_Balance += amount
            history = f"Balance has been deposited {amount}"
            self.Transaction_history.append(history)
            print(f"\nSuccessfully Balance Deposited Amount of: {amount}\n")
        else:
            print("The Bank is Bankrupt you can't deposit money")

    # Withdraw Money
    def withdraw_Money(self, Bank, amount):
        if Bank.Bankrupt == False:
            if self.Balance > amount:
                self.Bank = Bank
                self.Balance -= amount
                self.Bank.total_Balance -= amount
                history = f"Balance has been withdrawed {amount}"
                self.Transaction_history.append(history)
                print(
                    f"\nSuccessfully Balance Withdrawed Amount of: {amount}\n")
            else:
                print("\nWithdrawal amount exceeded\n")
        else:
            print("\nThe Bank is Bankrupt you can't deposit money\n")

    # Show Money
    def show_Balance(self):
        print(f"\nYour Current Balance is : {self.Balance}\n")

    # Show Transaction History
    def show_Transaction_History(self):
        if len(self.Transaction_history) > 0:
            for transaction in self.Transaction_history:
                print(transaction)
        else:
            print("\nNo Trasnaction have done yet\n")

    # Take loan
    def take_loan(self, Bank, amount):
        self.Bank = Bank
        if self.Bank.Bankrupt == False:
            if self.Bank.Loan_System == True:
                if self.Loan_Times >= 1:
                    self.Balance += amount
                    self.Bank.total_Balance -= amount
                    self.Bank.total_Loan += amount
                    history = f"Loan has been taken amount of:{amount},and added to the Balance"
                    self.Transaction_history.append(history)
                    print(f"\nSuccessfully Loan Taken Amount of: {amount}\n")
                    self.Loan_Times -= 1
                else:
                    print("\nYou can't take loan, you have exceeded loan 2 times\n")
            else:
                print("\nThe Bank is Loan System Is Turned OFF\n")
        else:
            print("\nThe Bank is Bankrupt you can't Take Loan \n")

    # Tranfer Moeny to user
    def transfer_money(self, Bank, amount, userName):
        self.Bank = Bank
        if len(self.Bank.Users) > 0:
            for user in self.Bank.Users:
                if userName == user.Name:
                    if self.Balance > amount:
                        user.Balance += amount
                        self.Balance -= amount
                        history = f"Balance Tranfered to {userName} amount of :{amount},and added to the {userName} Balance and deducted from {self.Name}"
                        self.Transaction_history.append(history)
                    else:
                        print("\nTransactional amount exceeded\n")
        else:
            print("\nNo User Add yet\n")

# Secton ---------:> 3)Admin Class:
# Admin ID: admin
# Admin Passwod: 123
class Admin:
    def __init__(self, Bank) -> None:
        self.Bank = Bank
        self.Name = 'Admin'
        self.__passWord = 123

    # Get password
    @property
    def password(self):
        return self.__passWord

    # Show All Users
    def Show_Users(self):
        if len(self.Bank.Users) > 0:
            print("\n_______________Available Users in the bank_____________________\n")
            for user in self.Bank.Users:
                print(
                    f"Name : {user.Name} , User ID: {user.Account_ID} , Email: {user.Email} , Address: {user.Address} , Account_Type: {user.Account_Type}")
            print()
        else:
            print("\n_______ No User Add yet _________\n")

    # Show Bank Balance
    def Check_Bank_BL(self):
        print(
            f"\nThe {self.Bank.Name} Total Balance is : {self.Bank.total_Balance} Taka\n")

    # Show Bank Balance
    def Check_Bank_Loan(self):
        print(
            f"\nThe {self.Bank.Name} Total Loan is : {self.Bank.total_Loan} Taka\n")

    def Loan_Feature(self, switch):
        if switch == 'ON':
            self.Bank.Loan_System = True
            print("\n The Loan Feature is Turned ON\n")
        else:
            self.Bank.Loan_System = False
            print("\n The Loan Feature is Turned OFF\n")

    def Bankrupt(self, switch):
        if switch == 'YES':
            self.Bank.Bankrupt = True
            print("\n The Bankrupted by the Admin\n")
        else:
            self.Bank.Loan_System = False
            print("\n The Bank is solvent by the Admin\n")

    def Delete_User(self, Email):
        for user in self.Bank.Users:
            if user.Email == Email:
                print(f"\nSuccessfully Delete user {user.Name}\n")
                self.Bank.Users.remove(user)
                return
        print("\nEnterd Email User Not Found\n")


# Secton ---------:> 4)Registation
class RegistationAndLogin:
    def __init__(self) -> None:
        self.Loged_in = None

    def Registation(self, Bank, user):
        self.Bank = Bank
        self.user = user
        for users in Bank.Users:
            if self.user.Email == users.Email:
                print("\nThis Email is Already Registerd\n")
                return
        self.Bank.Users.append(self.user)
        print(f"\nUser: {self.user.Name} has registered succsessfully\n")

    def Longin(self, Bank, Email, password):
        self.Bank = Bank
        for user in self.Bank.Users:
            if user.Email == Email and user.password == password:
                self.Loged_in = user
                print(f"\nUser {user.Name} succsessfully logged in\n")
                return True
        print("\nInvalid Email or Password, Please try again\n")

    def logOut(self):
        self.Loged_in = None


# Secton ---------:> 5) Replica of management
IFCI_Bank = Bank("IFCI Bank", "Dhaka Panthopath")
admin_Email = 'admin'
admin_password = "123"
admin = Admin(IFCI_Bank)
register = RegistationAndLogin()

while True:
    print(f"\nWelcome to the {IFCI_Bank.Name} \n")
    print("Are you ADMIN or USER?")
    print("1. ADMIN")
    print("2. USER")
    print("3. EXIT")
    option = input("Choose Option Form Above: ")

    if option == "1":
        print("\nADMIN ID: admin , ADMIN PASSWORD: 123\n")
        print("Login for Admin\n")
        UserName = input("Enter Your ADMIN ID: ")
        Password = input("Enter Your Password: ")
        if UserName == admin_Email and Password == admin_password:
            print("\nAdmin Successfully Logged in")
            while True:
                print("\nOPTION: 1 : Create Account For User")
                print("\nOPTION: 2 : Show All User Accounts")
                print("\nOPTION: 3 : Show Total Available Balance")
                print("\nOPTION: 4 : Show Total Loan Amount")
                print("\nOPTION: 5 : Delete User Account")
                print("\nOPTION: 6 : ON/OFF Loan feature")
                print("\nOPTION: 7 : Bankrupt")
                print("\nOPTION: 8 : LogOut"
                Option = input("\nENTER YOUR OPTION: ")
                if Option == "1":
                    Name = input("\nEnter Your Name: ")
                    Email = input("\nEnter Your Email: ")
                    Address = input("\nEnter Your Address: ")
                    Account_type = input("\nEnter Your Account type for Savings Account type Only Write '1' for Current Account type Only Write ' 2 ' Type: ")
                    Password = input("\nEnter Your Password: ")
                    if Account_type == '1':
                        newUser = User(Name, Email, Address, "Savings ", Password)
                    elif Account_type == '2':
                        newUser = User(Name, Email, Address, "Current", Password)
                    else:
                        print("\nYour Account type is invalid")
                        break
                    register.Registation(IFCI_Bank, newUser)
                elif Option == "2":
                    admin.Show_Users()
                elif Option == "3":
                    admin.Check_Bank_BL()
                elif Option == "4":
                    admin.Check_Bank_Loan()
                elif Option == "5":
                    email = input(
                        "\nGive the email of the user want delete: ")
                    admin.Delete_User(email)
                elif Option == "6":
                    print("\nFor Loan Feature type exect :ON || OFF")
                    switch = input(" :")
                    admin.Loan_Feature(switch)
                elif Option == "7":
                    print("\nFor Bankrupt type exect :YES || NO")
                    switch = input(" :")
                    admin.Bankrupt(switch)
                elif Option == "8":
                    break
                else:
                    print(
                        "\nYou selected wrong number , Choose from those options\n")
        else:
            print("\nYour Enterd Password or Email is inValid")
    elif option == "2":
        if len(IFCI_Bank.Users) > 0:
            print("For Login As User \n")
            UserName = input("Enter Your Email: ")
            Password = input("Enter Your Password: ")
            LogIn = register.Longin(IFCI_Bank, UserName, Password)
            if LogIn:
                while True:
                    print("\nOPTION: 1 : Show Balance")
                    print("\nOPTION: 2 : Deposite Money")
                    print("\nOPTION: 3 : Withdraw Money")
                    print("\nOPTION: 4 : Transfer Money")
                    print("\nOPTION: 5 : Check Transaction history")
                    print("\nOPTION: 6 : Take Loan")
                    print("\nOPTION: 7 : LogOut")
                    Option = input("\nENTER YOUR OPTION: ")
                    user = register.Loged_in
                    if Option == "1":
                        user.show_Balance()
                    elif Option == "2":
                        amount = int(input("\nHow Much Want to Deposite: "))
                        user.deposit_Money(IFCI_Bank, amount)
                    elif Option == "3":
                        amount = int(input("\nHow Much Want to Withdraw: "))
                        user.withdraw_Money(IFCI_Bank, amount)
                    elif Option == "4":
                        emailOfReciver = input("\nGive Email Of the Receiver: ")
                        amountSend = int(input("\nGive the amount :"))
                        user.transfer_money(
                            IFCI_Bank, amountSend, emailOfReciver)
                    elif Option == "5":
                        user.show_Transaction_History()
                    elif Option == "6":
                        loanamount = int(input("\nGive the amount: "))
                        user.take_loan(IFCI_Bank, loanamount)
                    elif Option == "7":
                        register.loged_in = None
                        break
        else:
            print("\nThere are no user.If you want open an account go the ADMIN")
    elif option == "3":
        break
        
           
    
