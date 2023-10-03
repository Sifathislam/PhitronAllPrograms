n, q = input().split()
n = int(n)
q = int(q)

number_List = list(map(int,input().split()))
prefixSum =[number_List[0]]

for i in range(1,n,1):
    prefixSum.append(prefixSum[i-1] + number_List[i])

while q != 0:
    L,R = map(int,input().split())
    if L == 1:
        print(prefixSum[R-1])
    else:
        print(abs(prefixSum[L-2] - prefixSum[R-1]))
    q-=1
    

