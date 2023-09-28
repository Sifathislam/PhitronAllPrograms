
test = int(input())

while test>0:
    a,b = input().split()
    a = int(a)
    b = int(b)

    mx = max(a,b)
    mn = min(a,b)

    sum = 0
    
    for i in range(mn+1,mx):
        if i%2!=0:
            sum+=i
    print(sum)
    test-=1