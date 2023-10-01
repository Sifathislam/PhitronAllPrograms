x,n = input().split()
n = int(n)
x = int(x)
def eqution(n,x):
    sum = 0
    for num in range(2,n+1,2):
        sum+= (x**num)
    print(int(sum))

eqution(n,x)
