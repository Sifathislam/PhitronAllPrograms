from django.shortcuts import render
import datetime

# Create your views here.
def home(request):
    dictionary = {'author': 'Sifat', 'age':9,'course':[

        {
            'Id': 1,
            'Name': 'Python',
            'Fee': 5000
        },

        {
            'Id': 2,
            'Name': 'C++',
            'Fee': 6000
        },

        {
            'Id': 3,
            'Name': 'C',
            'Fee': 50000
        }

    ], 'lst':['python', 'is', 'fun'], 'birthDate': datetime.datetime.now()}
    return render(request,'home.html',context=dictionary)
    # return render(request,'home.html',dictionary) or this way 