n = int(input())
number = list(map(int,input().split()))
falg = False

for num in number:
    if num % 2 != 0:
        falg = True

if falg == True:
    print(0)
else:
    counter = 0

    while True:
        number = [nums // 2 for nums in number] 
        flg = False
        for num in number:
            if num % 2 != 0:
                flg = True
        counter+=1
        if flg == True:
            break
    print(counter)
