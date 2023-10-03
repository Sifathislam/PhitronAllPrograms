stringList = list(map(str,input().split()))
stringList = [''.join(reversed(word)) for word in stringList]
print(*stringList)