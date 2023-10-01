S = input()

length = len(S)
counter = 0
ListoFString =[]
temp = ""
# sizeofL = 0
for i in range(0,length):
    temp+= S[i]
    if temp.count('L') == temp.count('R'):
       ListoFString.append(temp)
       temp = ""
       counter+= 1
    # else:
    #    temp+= S[i]

# Print the result 
print(counter)
for strings in ListoFString:
    print(strings)
