number = [1,2,3,4,5,564,432]
odds = []
for num in number:
    if num % 2 != 0 and num % 5 == 0:
        odds.append(num)

print(odds)
# This the same way to do the above work but not readable
odd_num = [num for num in number if num % 2 != 0 and num % 5 == 0]

print(odd_num)

players = ["sakib", "msufik", "mustafix"]
ages = [33, 55,33]

for plyer in players:
    print("Player : ", plyer)
    for age in ages:
        print("Age: ",age)

age_coms = [(plyerr , ages)for plyerr in players for age in ages ]
print(age_coms)