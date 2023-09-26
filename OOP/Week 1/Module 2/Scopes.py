""" let see an example of gobal scope 
    and let's see some work and local scope
 """
global_variable = 1000

def local_Scope(title, price):
    gextrax = 500
    global global_variable
    global_variable -= price
    print("Before buy the ",title,"The main price was : ",global_variable)
    print("The after global variable value: ", global_variable)
# print(extrax)
local_Scope("T_Shirts", 500)

