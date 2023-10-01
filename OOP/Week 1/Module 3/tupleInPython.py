""" In This we will how tuple work and some method """

# Declar 
# number = (1,2,3,4,5)
# print(number)
# with diffrent dtata type 
tupleList = 1,3,4,["sifat","shaik","siam"],{"FirstName": "Sifat","SecondName":"Islam"},1.5,"String"
# print(tupleList)

# # print Deffernent way 
# print(tupleList[5])
# print(tupleList[1:4])
# print(tupleList[:: -1])

# # You can't change value in tuple because it is immutable 
# # tupleList[1] = "Apon"

# # But you can change tuple value of value if it is mutable 
# tupleList[3][1] = "Apon"
# print(tupleList)

# print key value 
print(tupleList[4]['FirstName'])
# if value exitt 
for String in tupleList:
    print("yes")