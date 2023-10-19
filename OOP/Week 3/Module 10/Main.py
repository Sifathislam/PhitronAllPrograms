""" In this page we will arange every thing to do work """
from Menu import burger,pizza,drinks,menu
from Restaurant import Restaurant
from User import Manager,Chef,Server,Customer
from Order import Order
def main():
    # Create the menu and add items in the menu
    Menu = menu()

    # Add Pizzzas 
    pizza_1 = pizza("Grill Macarony Pizza",700,"Large",["chess","macaronys","beef becons"])
    pizza_2 = pizza("Cheesy Meat Pizza",1700,"Large",["chess","Beef","Olive"])
    pizza_3 = pizza("Extra Naga Pizza",750,"Large",["chess","Chili","beef souces"])
    pizza_4 = pizza("Chess muton Pizza",900,"Large",["chess" ,"mouton"])
    Menu.add_menu("pizza",pizza_1)
    Menu.add_menu("pizza",pizza_2)
    Menu.add_menu("pizza",pizza_3)
    Menu.add_menu("pizza",pizza_4)
    
    # Add burger
    burger_1 = burger("Extra Patis Chess Burger",1000,"Beef",["Beef patte","bread","Souce"])
    burger_2 = burger("Mutton Burger",1500,"Beef",["Mutton patte","bread","Souce"])
    burger_3 = burger("Vegitable Chess Burger",100,"Beef",["Vagetable Patte","bread","Souce"])
    Menu.add_menu("burger",burger_1)
    Menu.add_menu("burger",burger_2)
    Menu.add_menu("burger",burger_3)
    # Add drinks
    drinks_1 = drinks("American Latte", 400,False)
    drinks_2 = drinks("Soft Drink", 40,True)
    Menu.add_menu("drink",drinks_1)
    Menu.add_menu("drink",drinks_2)
    
    # show menu
    Menu.show_menu()

    # Restaurant 
    MIRestaurant = Restaurant("Moye Moye restaurent",2500,Menu)

    # Add Employeee
    MoyeManager = Manager("MOYE Manager", 1,"moyeMora@gmail.com","RangaMati",1500,"1993/1/20","Manager")
    MIRestaurant.add_employee("manager",MoyeManager)
    MFChef = Chef("MF Chef", 1231,"MFChef@gmail.com","Chottogram",3500,"2000/1/1","Chef","Everything")
    MIRestaurant.add_employee("chef",MFChef)
    TaheriSever = Server("Pagla Taheri", 11,"PagleTaharei@gmail.com","Dhaka",500,"2000/10/10","Manager")
    MIRestaurant.add_employee("server",TaheriSever)

    # Show employee 
    MIRestaurant.show_Employee()

    # Create Customer
    Customer_1 = Customer("Hulk Khan", 24,"HulkKhna@gmail.com","Avengers",100000)
    Order_1 = Order(Customer_1,[pizza_2,drinks_1,burger_3,pizza_3,drinks_2])
    Customer_1.place_order(Order_1)
    MIRestaurant.add_order(Order_1)

    # Coustomer pay for the oreder 
    MIRestaurant.receive_payment(10000,Order_1,Customer_1)
    
    print(f"\n\n\nWElCOME TO {MIRestaurant.name} \n\n")

    print("revenue and balance after one order ",MIRestaurant.revenue , MIRestaurant.balance)
    # Create Customer
    Customer_2 = Customer("Selmon Bhai", 223,"SelmonBhai@gmail.com","India",10000000)
    Order_2 = Order(Customer_2,[pizza_1,drinks_2,burger_2,burger_3,pizza_3,drinks_2])
    Customer_2.place_order(Order_2)
    MIRestaurant.add_order(Order_2)

    # Coustomer pay for the oreder 
    MIRestaurant.receive_payment(20000,Order_2,Customer_2)
    print("revenue and balance two order ",MIRestaurant.revenue , MIRestaurant.balance)

    MIRestaurant.pay_expenses(MIRestaurant.rent,"rent")
    print("after rent ",MIRestaurant.revenue , MIRestaurant.balance,MIRestaurant.expenses)
    
    MIRestaurant.pay_salary(MFChef)
    print("after salary ",MIRestaurant.revenue , MIRestaurant.balance,MIRestaurant.expenses)




if __name__ == "__main__":
    main()