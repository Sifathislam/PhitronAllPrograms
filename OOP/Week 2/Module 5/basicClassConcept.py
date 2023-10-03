# """ In Here we Will See how we can make a object class """

# class Name:
#     name = "Sifat"
#     age = 19
#     adress = "Narayanganj"

# sifatProfile = Name()

# print(sifatProfile)
# print(sifatProfile.name)
# print(sifatProfile.age)
# print(sifatProfile.adress)
class Phone:
    price = 12000
    color = 'blue'
    brand = 'samsung'

    def call(self):
        print('calling one person')

    def send_sms(self, phone, sms):
        text = f'Sending SMS to: {phone+5}'
        return text


my_phone = Phone()
result = my_phone.send_sms(41524, 'Missy, I missed to miss you')
print(result)