num = int(input())
while num!=0:
    n = int(input())
    while True:        
        print(n % 10,end=" ")
        n =(n//10)
        if n == 0:
            break
    print()
    num -= 1