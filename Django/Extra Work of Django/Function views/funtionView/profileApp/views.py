from django.shortcuts import render,redirect
from .forms import RegisterForm,ChangeUserForm
from django.contrib.auth.forms import PasswordChangeForm
from django.contrib.auth.forms import AuthenticationForm
from django.contrib.auth  import authenticate,login, logout
from django.contrib import messages
from django.contrib.auth import update_session_auth_hash
from CarModel.models import buying_history
# Create your views here.
def register(request):
    if request.method == 'POST':
        form = RegisterForm(request.POST)
        if form.is_valid():
            messages.success(request,"Account Created Successfully")
            form.save()
            return redirect('homepage')
            
    else:
        form = RegisterForm()
    return render(request, 'form.html', {'form': form})
            
def userlogin(request):
    if request.method == 'POST':
        form = AuthenticationForm(request=request, data = request.POST)
        if form.is_valid():
            userName = form.cleaned_data['username']
            userPass = form.cleaned_data['password']

            user = authenticate(username=userName, password =userPass)

            if user is not None:
                login(request,user)
                messages.success(request, "Login Successfully. Welcome To the Website")
                return redirect ('homepage')
            else:
                messages.warning(request, "Your Enterd Information is incorrect")
            
    else:
        form = AuthenticationForm()
    return render(request, 'form.html', {'form': form})



def profile(request):
    data = buying_history.objects.all()
    return render(request, 'profile.html',{'data':data})

def userLogout(request):
    logout(request)
    messages.success(request, "Successfully Logged Out")
    return redirect('login')
    
def ProfileEdit(request):
    if request.method == 'POST':
        form = ChangeUserForm(request.POST, instance = request.user)
        if form.is_valid():
            form.save()
            messages.success(request,"Updated Successfully")
            return redirect('profile')
    else:
        form = ChangeUserForm(instance = request.user)
    return render(request, 'form.html',{'form':form})

def changePass(request):
    if request.method == 'POST':
        form = PasswordChangeForm(request.user, data = request.POST)
        if form.is_valid():
            form.save()
            messages.success(request, "Updated Password Successfully")
            update_session_auth_hash(request, form.user)
            return redirect('profile')
        else:
            messages.warning(request, "Your Given Old PassWord is incorrrect")
    else:
        form = PasswordChangeForm(user = request.user)
    return render(request, 'form.html', {'form':form})
        