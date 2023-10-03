n = input()
numbers = list(map(int,input().split()))

findTheMaxIndex = numbers.index(max(numbers))
findTheMinIndex =numbers.index(min(numbers))
numbers[findTheMaxIndex],numbers[findTheMinIndex] = numbers[findTheMinIndex] ,numbers[findTheMaxIndex]

print(*numbers)