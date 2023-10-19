""" In this page we will add menu of our restaurent """
class Food:
    def __init__(self,name, price) -> None:
        self.name = name
        self.price = price
        self.Cooking_time = 15
# Inheritence
class burger(Food):
    def __init__(self, name, price,meat, ingredeans) -> None:
        super().__init__(name, price)
        self.meat = meat
        self.ingredeans = ingredeans

class pizza(Food):
    def __init__(self, name, price, size,toppings) -> None:
        super().__init__(name, price)
        self.size = size
        self.toppings = toppings

class drinks(Food):
    def __init__(self, name, price,isCold = True) -> None:
        super().__init__(name, price)
        self.isCold = isCold

# compositon
class menu:
    def __init__(self) -> None:
        self.burgers = []
        self.pizzas = []
        self.drinks = []
    
    def add_menu(self,item_type, item):
        if item_type == 'pizza':
            self.pizzas.append(item)
    
        elif item_type == 'burger':
            self.burgers.append(item)
    
        if item_type == 'drink':
            self.drinks.append(item)

    def remove_pizza(self, pizza_name):
        if pizza_name in self.pizzas:
            self.pizzas.remove(pizza_name)

    def remove_burger(self, burger_name):
        if burger_name in self.burgers:
            self.burgers.remove(burger_name)

    def remove_drink(self, drink_name):
        if drink_name in self.drinks:
            self.pizzas.remove(drink_name)

    def show_menu(self):
        print("\n_____________Pizzas Menu ________________")
        for pizza in self.pizzas:
            print(f"Name: {pizza.name} , Price: {pizza.price}")
            
        print("\n_____________Burgers Menu ________________")
        for burger in self.burgers:
            print(f"Name: {burger.name} , Price: {burger.price}")

        print("\n_____________Drinks Menu ________________")
        for drink in self.drinks:
            print(f"Name: {drink.name} , Price: {drink.price}")