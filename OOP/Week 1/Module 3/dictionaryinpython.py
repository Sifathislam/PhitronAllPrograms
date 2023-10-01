""" This Module we about Dictonary  """
# Dictoinary is set of key value pair 

Dictonary = {'Name' : 'Sifat', 'Age':20, 'Adress': 'Narayanganj'}
# Printing ways of Dictonary
print(Dictonary['Name'])
print(Dictonary.values())
print(Dictonary.keys())
Dictonary['Name'] = 'Shaik'
del Dictonary['Age']
print(Dictonary)

# Spacial loop for the Dictonary 
for key, val in Dictonary.items():
    print(key,' : ',val)

# len 
print(len(Dictonary))