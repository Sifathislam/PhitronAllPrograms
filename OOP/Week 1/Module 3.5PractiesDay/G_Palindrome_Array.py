# n = int(input())
# ArrList = list(map(int,input().split()))
# if n == 1:
#     print("YES")
# else:
#     j = n - 1
#     flag = True
#     for i in range(0, n,1):
#         if ArrList[i] != ArrList[j]:
#             flag = False
#         j-= 1
#     if flag:
#         print("YES")
#     else:
#         print("NO")

#  Another answer 
n = int(input())
ArrList = list(map(int,input().split()))
if n == 1:
    print("YES")
else:
    ArrListCopy = ArrList.copy()
    ArrListCopy.reverse()
    flag = True
    for i in range(0, n,1):
        if ArrListCopy[i] != ArrList[i]:
            flag = False
            break
    if flag:
        print("YES")
    else:
        print("NO")