def forArgs(*agrs):
    sum = 0
    for num in agrs:
        sum+= num
    print(sum)

forArgs(1,2,3,4,5)

def forKargs(**kargs):
    for key,value in kargs.items():
        print(f"{key} : {value}")
forKargs(Name='Sifat',age=20,Adress= 'Bangladesh')