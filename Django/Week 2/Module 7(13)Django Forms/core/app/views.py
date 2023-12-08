from django.shortcuts import render
from . forms import passwordValidation

# Create your views here.

def home(req):
    return render(req, 'home.html')

def form(req):
        return render(req, 'form.html')

# workd post 
def about(req):
    if req.method == 'POST':
        Email = req.POST.get('Email')
        password = req.POST.get('Password')
        check = req.POST.get('check')
        return render(req,'about.html',{'Email':Email, 'Pass':password, 'check':check})
    else:
        return render(req, 'about.html')
# workd get 
# def about(req):
#     if req.method == 'GET':
#         Email = req.GET.get('Email')
#         password = req.GET.get('Password')
#         check = req.GET.get('check')
#         return render(req,'about.html',{'Email':Email, 'Pass':password, 'check':check})
#     else:
#         return render(req, 'about.html')


# Djangoo form work 
# def django_form(request):
#     if request.method == 'POST':
#      form = ContactForm(request.POST, request.FILES)
#      if form.is_valid():
#          file = form.cleaned_data['file']
#          with open('./app/upload/' + file.name, 'wb+') as destination :
#              for chunk in file.chunks():
#                  destination.write(chunk)
#          print(form.cleaned_data)
#          return render(request, 'django_forms.html',{'form': form})
#     else:
#         form = ContactForm()
#     return render(request, 'django_forms.html',{'form': form})

# def StudentForm(request):
#     if request.method == 'POST':
#         form = StudentData(request.POST, request.FILES)
#         if form.is_valid():
#             print(form.cleaned_data)
#             pass
#     else:
#         form = StudentData()
#     return render(request, 'django_forms.html',{'form': form})

def Project(request):
    if request.method == 'POST':
        form = passwordValidation(request.POST)
        if form.is_valid():
            print(form.cleaned_data)
    else:
        form = passwordValidation()
    return render(request, 'django_forms.html',{'form': form})
