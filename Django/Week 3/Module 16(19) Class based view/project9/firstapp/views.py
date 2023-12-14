from django.shortcuts import render
from datetime import datetime, timedelta
from django.http import HttpResponse
# Create your views here.
def home(request):
    return render(request,'home.html')


# Those are the work of the COOKIes 
def setCookies(request):
    response = render(request, 'set_cookeis.html')
    response.set_cookie('name', 'sifat')
    response.set_cookie('logtimeName','Shaik', expires=datetime.utcnow()+timedelta(days=9))
    return response


def getCookies(request):
    name = request.COOKIES.get('name')
    longtimename = request.COOKIES.get('logtimeName')
    return render (request, 'get_cookeis.html',{'name': name, 'longtimename':longtimename})
def del_cookie(request):
    response = render(request,'delCookeis.html')
    response.delete_cookie('name')
    response.delete_cookie('logtimeName')
    return response


# Those works are for the Session 

def set_session(request):
   # data = {
    #     'name' : 'rahim',
    #     'age' : 23,
    #     'language' : 'Bangla'
    #  }
    # print(request.session.get_session_cookie_age())
    # print(request.session.get_expiry_date())
    # request.session.update(data)
    request.session['name'] = 'Karim'
    return render(request,'set_session.html')

def get_session(request):
    if 'name' in request.session:
        name = request.session.get('name','Guest')
        request.session.modified = True
        return render(request,'get_session.html',{'name':name})
    else:
        return HttpResponse("Your session has been expried .. Login again ")


def del_session(request):
    # del request.session['name']
    request.session.flush()
    return render(request,'del_session.html')