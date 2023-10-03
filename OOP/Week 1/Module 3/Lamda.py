# LambDa function 
""" if we need to write any funtion one line than we will use the lambda fucntion  """
 
def double (x):
    return x ** x

print(double(3))
result =lambda num : num ** num
print(result(3))

sum = lambda x,y : x + y
print(sum(3,5))


actor = [
            {'name': "sifat",'age': 40},
            {'name': "shaik",'age': 10},
            {'name': "siam",'age': 22},
            {'name': "akuna",'age': 70},
            {'name': "jojo",'age': 30},
         ]

junior = filter(lambda x : x['age'] < 40, actor)

print(list(junior))