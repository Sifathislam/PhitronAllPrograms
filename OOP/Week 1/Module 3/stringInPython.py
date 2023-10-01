"""  On this Page we will see many string method and how to declear string   """
typeOneOfString = 'Sifat Islam'
typeTwoOfString = "Sifat Islam"
typeThreeOfString = """Sifat Shaik Siam"""

# print(typeOneOfString)
# print(typeTwoOfString)
# print(typeThreeOfString)

# """ Remember that String is Imutable means you can't change any on it   """
# # typeTwoOfString[1] = 'l'
# # String sequnce printing method 
# print(typeOneOfString[3])
# print(typeOneOfString[1:3])
# print(typeOneOfString[-3])
# print(typeOneOfString[:: -1])

# # Check word exits or not in string 
# for sifat in typeThreeOfString:
#     print("YES")
#     break
# # method of String 
# lower(): Converts all uppercase characters in a string into lowercase
# print(typeOneOfString.lower())
# # upper(): Converts all lowercase characters in a string into uppercase
# print(typeOneOfString.upper())
# # title(): Convert string to title case
# print(typeOneOfString.title())
                                                                                                                                        
# str.strip(), str.lstrip(), and str.rstrip(): These methods remove leading and trailing whitespace characters from a string, or just from the left or right side.

text = "  Hi  This is Sifat    "
print(str(text.strip))
print(str(text.lstrip))
print(str(text.rstrip))