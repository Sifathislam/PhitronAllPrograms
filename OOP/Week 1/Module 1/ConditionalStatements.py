#in , not not in ,is ,in not
# <, > ,>= ,<=,==, =!
# and , or 
a = 10
if a < 5:
    print("A is less than 5")
    if a <= 4: 
      print("A is less than 4 or equal")
      if a <= 3:
        print("A is less than 3 or equal")
        if a <= 2:
            print("A is less than 2 or equal")
            if a <= 1:
                print("A is less than 1 or equal")
elif a == 11 or a == 12 :
   print(f"A is {a}")
elif a > 10:
   print("A is grater than 10 " ,a)
else:
   print("A is out of bound")


print("Work with another level condition")

isworkdone = True

if isworkdone is True :
   print("Yes work done")
else:
   print("NO the work is not done")

if isworkdone is not False and a == 10:
   print("Yes work done")
else: 
   print("NO the work is not done")