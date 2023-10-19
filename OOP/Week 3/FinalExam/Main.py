from user import Bank, User
from admin import Admin, Register
Bank_company = Bank("Bank company")
admin = Admin(Bank_company)
registation = Register()

while True:
    print("1.admin")
    print("2.user")
    print("3.exit")
    option = input("Give option input: ")

    if option == "1":
        print("admin id: admin")
        AdminId = input("Enter admin id: ")
        
        if AdminId == "admin":
            print("Admin Logged IN ")
            while True:
                print("OPTION 1.Create New Account Of User")
                print("OPTION 2.delete_user")
                print("OPTION 3.show_user")
                print("OPTION 4.check_total_available_balance")
                print("OPTION 5.check_loan")
                print("OPTION 6.bank_crupt")
                print("OPTION 7.bank_feature")
                print("OPTION 8.LOGOUT")

                option2 = input("Choose option: ")
                if option2 =="1":
                    name = input("input Name :")
                    email = input("input email :")
                    address = input("input admress :")
                    account_type = input("input account type (savings / Cuurent):")

                    Nuser = User(name, email,address,account_type,Bank_company)
                    registation.registration(Bank_company,Nuser)

                elif option2 =="2":
                    emailOfuser = input("give email id:")
                    admin.delete_user(emailOfuser)
                elif option2 =="3":
                    admin.show_user()
                elif option2 =="4":
                    admin.check_available_balance()
                elif option2 =="5":
                    admin.check_loan()
                elif option2 =="6":
                    bankcrpt= input("Want crupt the bank type; Yes: ")
                    admin.bank_crupt(bankcrpt) 
                elif option2 =="7":
                    loanf = input("bank loand system ON/OFF: ")
                    admin.bank_feature(loanf)
                elif option2 =="8":
                    break
        else:
            print("Wrong Admin Id")
    elif option == "2":
        print("Login user")
        Email = input("Give email: ")
        log = registation.login(Bank_company,Email)
        if log == True:
            while True:
                print("OPTION 1.deposit")
                print("OPTION 2.withdraw")
                print("OPTION 3.available_balance")
                print("OPTION 4.check_transaction_history")
                print("OPTION 5.take_loan")
                print("OPTION 6.transfer_money")
                print("OPTION 7.LOGOUT")

                option3 = input("Give option: ")

                currentUser = registation.loggedIn
                if option3 =="1":
                    amountD = int(input("Give amount: "))
                    currentUser.deposit(amountD) 
                elif option3 =="2":
                     amountW = int(input("Give amount: "))
                     currentUser.withdraw(amountW)
                elif option3 =="3":
                    currentUser.available_balance()
                elif option3 =="4":
                    currentUser.check_transaction_history()
                elif option3 =="5":
                    amountL = int(input("Give Loan amount: "))
                    currentUser.take_loan(amountL)
                elif option3 =="6":
                    reciveEmail = input("Give email want to send: ")
                    amountT = int(input("Give amount"))
                    currentUser.transfer_money(amountT,reciveEmail)
                elif option3 =="7":
                    break
    elif option == "3":
        break
    
                 

