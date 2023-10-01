""" In here we will see how to write a programm that can write in another file  """

# csv . Comma separate value 
with open('text.txt','w') as file:
    file.write("We write this with out go therere")
    
with open('text.txt','a') as file:
    file.write("We write this with out go therere")


    
with open('text.txt','r') as file:
    text = file.read()
    print(text)
