""" In Here We will see about overload and override """


class person:
    def __init__(self, Name, Age, height) -> None:
        self.Name = Name
        self.Age = Age
        self.height = height

    def eat(self):
        print("Normal Bangladeshi People eat rice")

    def exersise(self):
        print("Normal People on do exersise")


class BodyBuilder(person):
    def __init__(self, Name, Age, height, weight) -> None:
        self.weight = weight
        super().__init__(Name, Age, height)

    def __repr__(self) -> str:
        return f"Name: {self.Name}, Age: {self.Age}, Height: {self.height}, Weight: {self.weight}"
    # Because He is Body builder So he don't eat nomal food os We Need Over ride The function

    def eat(self):
        print("Body Builder Eat bread , red rice, vegitables")
    # Because He is Body builder So he don't exersise like nomal people We Need Over ride The function

    def exersise(self):
        print("He Daily need 50 push up 20 leg 30 chest 20 biceps etc")
# Because of + dose not on this object so this over loaded so we need override it

    def __add__(self, other):
        return self.Age + other.Age
# Because of + dose not on this object so this over loaded so we need override it

    def __mul__(self, other):
        return self.weight * other.weight


Sifat = BodyBuilder("Sifat", 20, 5.10, 75)
print(Sifat)
Sifat.eat()
Sifat.exersise()

# Over Loading
Shaik = BodyBuilder("Shaik", 24, 5.7, 78)
print(Shaik)

# Because of + dose not on this object so this over loaded so we need override it
print(Shaik + Sifat)
# Because of * dose not on this object so this over loaded so we need override it
print(Shaik * Sifat)

# Like this over load and over ride work on prgram
