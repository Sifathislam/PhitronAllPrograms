n = int(input())

if n == 1:
    number = int(input())
    if number != 1:
        print(1)
    else:
        print(0)
else:
    numbers = list(map(int, input().split()))
    dictionary = {}
    counter = 0
    for i in numbers:
        if i in dictionary:
            dictionary[i]+= 1
        else:
            dictionary[i] = 1


    for num,counted in dictionary.items():
        if counted == num:
            continue
        else:
            if num > counted:
                counter += counted
            elif num < counted:
                counter += counted - num 
            
    print(counter)
