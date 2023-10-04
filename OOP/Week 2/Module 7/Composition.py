""" In here we will see without inheritance how you can us another class method """

class Engin :
    def start(self):
        print("This startaring engin")
    
    def stop(self):
        print("Stop the engin")

# Now here we use it 
class Car:
    def __init__(self) -> None:
        self.Engin = Engin() # this how we can do that
    
    def runing (self):
        self.Engin.start()
        print("Engin is runninhg ")

    def Break(self):
        self.Engin.stop()
        

Bugatti_Chiron = Car()

Bugatti_Chiron.Break()