from Shopping_Platform import registation_And_Login,Shopping_App,Product
def main():
    RichManapp = Shopping_App("Rich Man",1003322)
    register = registation_And_Login()
    RichManapp.show_User_List()

    while True:

        print(f"Welcome to the {RichManapp.NameOfCompany} App")
        print("OPTION: 1 : Login")
        print("OPTION: 2 : Register New Account")
        print("OPTION: 3 : Exit")

        option = int(input("ENTER YOUR OPTION: "))

        if option == 1:
            print("OPTION: 1 : Login for Seller")
            print("OPTION: 2 : Login for Buyer")
            LGoption = int(input("ENTER YOUR OPTION: "))
            if LGoption == 1:
                UserName = input("Enter Your User Name: ")
                Password = input("Enter Your Password: ")
                LogIn = register.logIn("Seller",UserName,Password,RichManapp)
                if LogIn:
                    while True:
                        print("OPTION: 1 : View Profile")
                        print("OPTION: 2 : View Products")
                        print("OPTION: 3 : Add Products")
                        print("OPTION: 4 : Delete Products")
                        print("OPTION: 4 : LogOut")
                        SellerOption = int(input("ENTER YOUR OPTION: "))

                        if SellerOption == 1: 
                            user = register.loged_in
                            if user.UserName in RichManapp.sellers_list:
                                print(f"Name: {user.Name},User ID: {user.UserName}")
                            else:
                                print("User not found")
                        elif SellerOption == 2:
                            RichManapp.show_Products()
                        elif SellerOption == 3:
                            product_name = input("Product Name: ")
                            Quntity = int(input(" Give The Quntity "))
                            singleItemPrice = int(input("Give the Single item Price"))
                            product = Product(product_name,Quntity,singleItemPrice)
                            RichManapp.products[product_name]= product
                        elif SellerOption == 4:
                            register.loged_in = None
                            break
            elif LGoption == 2:
                UserName = input("Enter Your User Name: ")
                Password = input("Enter Your Password: ")
                LogIn = register.logIn("Buyer",UserName,Password,RichManapp)
                if LogIn:
                    while True:
                        print("OPTION: 1 : View Profile")
                        print("OPTION: 2 : View Products")
                        print("OPTION: 3 : Buy Products")
                        print("OPTION: 4 : Load Cash")
                        print("OPTION: 5 : Show Cash")
                        print("OPTION: 6 : LogOut")
                        BuyerOption = int(input("ENTER YOUR OPTION: "))
                        user = register.loged_in
                        if BuyerOption == 1:
                            if user.UserName in RichManapp.buyers_list:
                                print(f"Name: {user.Name},User ID: {user.UserName}")
                            else:
                                print("User not found")
                        elif BuyerOption == 2:
                            RichManapp.show_Products()

                        elif BuyerOption == 3:
                            pass
                        elif BuyerOption == 4:
                            cash = int(input("Give the Cash"))
                            user.Load_cash(cash)
                        elif BuyerOption == 5:
                            user.Show_cash()
                        elif BuyerOption == 6:
                            register.loged_in = None
                            break

        if option == 2:
            print("OPTION: 1 : Register New Account For SELLER")
            print("OPTION: 2 : Register New Account For BUYER")
            ACoption = int(input("ENTER YOUR OPTION: "))
            if ACoption == 1: 
                name = input("Enter Your Name: ")
                UserName = input("Enter Your User Name: ")
                Password = input("Enter Your Password: ")
                register.register("Seller",name,UserName,Password,RichManapp)


            elif ACoption == 2: 
                name = input("Enter Your Name: ")
                UserName = input("Enter Your User Name: ")
                Password = input("Enter Your Password: ")
                register.register("Buyer",name,UserName,Password,RichManapp)
        elif option == 3:
            break
                
    



if __name__ == "__main__":
    main()