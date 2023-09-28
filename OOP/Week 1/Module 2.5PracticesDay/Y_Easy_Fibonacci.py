n = int(input())
if n == 1:
    print(0)
else:   
    fibonacci = [0,1]
    m = 2
    while m < n:
        fibonacci.append(fibonacci[m - 1] + fibonacci[m - 2])
        m+=1
        
    for num in fibonacci:
        print(num,end=" ")