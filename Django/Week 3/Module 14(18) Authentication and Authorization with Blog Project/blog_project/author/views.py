from django.shortcuts import render,redirect
from .import forms
from django.contrib.auth.forms import AuthenticationForm,PasswordChangeForm 
from django.contrib.auth import authenticate, login,update_session_auth_hash,logout
from django.contrib import messages
from django.contrib.auth.decorators import login_required
from posts.models import Post
# Create your views here.

# # -------- Author ADD  Work ---------- 
# def add_author(request):
#     if request.method == 'POST':
#         author_form = forms.AuthorForm(request.POST)
#         if author_form.is_valid():
#             author_form.save()
#             return redirect('add_author')

#     else:
#         author_form = forms.AuthorForm()

#     return render(request, 'add_author.html',{'form': author_form})

def register(request):
    if request.method == 'POST':
        register_form = forms.RegistrationForm(request.POST)
        if register_form.is_valid():
            register_form.save()
            messages.success(request, 'Account Created Successfully')
            return redirect('register')

    else:
        register_form = forms.RegistrationForm()

    return render(request, 'register.html',{'form': register_form,'type': 'Register'})

def User_login(request):
    if request.method == 'POST':
        form = AuthenticationForm(request, request.POST) 
        if form.is_valid():
            User_name = form.cleaned_data['username']
            User_pass = form.cleaned_data['password']
            user = authenticate(username = User_name, password = User_pass)
            messages.success(request, 'Account Logged in Successfully')
            if user is not None:
                login(request,user)
                return redirect('profile')
            else:
                messages.warning(request, 'Entered information is incorrect')
                return redirect('login')
    else:
        form = AuthenticationForm()
    return render(request, 'register.html', {'form': form, 'type': 'Login'})
 
@login_required
def profile(request):
    data = Post.objects.filter(author = request.user)
    return render(request, 'profile.html', {'data':data})
 
@login_required
def pass_change(request):
    if request.method == 'POST':
        Change_form = PasswordChangeForm(request.user, data=request.POST)
        if Change_form.is_valid():
            Change_form.save()
            messages.success(request, 'Password Updated Successfully')
            update_session_auth_hash(request, Change_form.user)
            return redirect('profile')
    else:
        Change_form = PasswordChangeForm(user=request.user)  # Use instance without request.POST

    return render(request, 'passwordChange.html', {'form': Change_form})


 
@login_required
def profile_edit(request):
    if request.method == 'POST':
        profile_form = forms.ChangeDataOfUser(request.POST, instance=request.user)
        if profile_form.is_valid():
            profile_form.save()
            messages.success(request, 'Profile Updated Successfully')
            return redirect('profile')
    else:
        profile_form = forms.ChangeDataOfUser(instance=request.user)  # Use instance without request.POST

    return render(request, 'update_profile.html', {'form': profile_form})


def user_logout(request):
    logout(request)
    return redirect('login')