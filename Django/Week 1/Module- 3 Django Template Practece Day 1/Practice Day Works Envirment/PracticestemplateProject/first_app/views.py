from django.shortcuts import render
from datetime import datetime, timedelta


# Create your views here.
def home(request):
    return render(request, 'PracticesWork/home.html')

def Practices(request):
    dictornary = {
        'namelist':['Sifath', 'is' , 'a', 'good', 'boy'],
        'datafilter':datetime.now(),
        'fordefaultuse':None,
        'ForAddFilterINT':10,
        'ForCapfirstFilter':'dhaka',
        'ForCutFilter':" S i f a t ",
        'ForDictsortFilter':[
            {'name': 'Sifat', 'age': 20},
            {'name': 'Shaik', 'age': 26},
            {'name': 'Apon', 'age': 25},
            {'name': 'Akuna', 'age': 28},
        ],
        'ForEscapeFilter':"<strong> Sifat </strong> is Good < BOY",
        'ForFirstFilter':['Apple', 'Mango', 'Orenge'],
        'ForLastFilter':['Apple', 'Mango', 'Orenge'],
        'ForLengthFilter':['Apple', 'Mango', 'Orenge','Pinapple','Avacado'],
        'ForLinenumbersFilter':'"First Line \nSecond Line \nThird Line',
        'ForLowerFilter':'SIFAT IS DOING WELL IN LOWER',
        'ForUpperFilter':'sifat is doing well in upper',
        'ForTitleFilter':'sifat is doing well in Title',
        'ForRandomFilter':['a','b','c','d','e'],
        'ForSliceFilter':['a','b','c','d','e'],
        'ForTimeFilter': datetime.now(),
        'ForTimesinceFilter':datetime.now() - timedelta(days=2),
        'ForTruncatecharsFilter':"Sifath is good boy",
        'ForWordcountFilter':"Sifat is a good boy. He can do code",
        'ForTruncatewordsFilter':"Sifat is a good boy. He can do code",
        'ForStriptagsFilter':"<b>I</b> <button>love</button> <span>dogs</span>", 
        'ForPluralizeFilter': 5,
        'ForMake_listFilter': "Sifat",
        'Foraddslashes':"I'm Sifat",
        'ForCenterFilter':"Sifat",
        'Fordivisibleby':9,
        'Forfilesizeformat': 1234789,
        'Forslugify':"Sifat is number 1 sulg",
        'ListOfValue':['Course','Price','Seats'],
        'ListOfValueCourseName':['C','C++','Python','Django'],
        




        
    }
    return render(request, 'PracticesWork/Pactices.html',dictornary)

