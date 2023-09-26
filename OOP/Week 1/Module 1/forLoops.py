# how to we will use loop in python  
# there ar sevaral way to do this but for in loop mostly used 
number = [1,2,3,4,5,6,7,8,9,10]
for num in number:
    print(num)
sum = 0
for num in number:
    sum += num

print(sum)

# for char and string 
text = ' Sifat islam'
for char in text:
    print(char)
words = ["mango","banana","lemon","onion"]
for string in words:
    print(string)

# Print number in range without declear 
for nums in range(1,10):
    print(nums)
for nums in range(1,10,2):
    print(nums)
for nums in range(90,100,2):
    print(nums)