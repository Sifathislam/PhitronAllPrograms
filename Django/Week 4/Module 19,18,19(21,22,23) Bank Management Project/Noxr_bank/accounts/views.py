from django.shortcuts import render,redirect
from django.views.generic import FormView, UpdateView
from . import forms
from django.contrib.auth.models import User
from django.contrib.auth import login,logout
from django.urls import reverse_lazy
from django.contrib.auth.views import LoginView, LogoutView
from django.utils.decorators import method_decorator
from django.contrib.auth.decorators import login_required
# Create your views here.

class UserRegistrationView(FormView):
    template_name = 'accounts/user_registration.html'
    form_class = forms.UserRegistrationForm
    success_url = reverse_lazy('profile')

    def form_valid(self,form):
        user = form.save()
        login(self.request, user)
        return super().form_valid(form)


class userLoginView(LoginView):
    template_name = 'accounts/userlogin.html'
    def get_success_url(self):
        return reverse_lazy ('homepage')
    
@method_decorator(login_required, name= 'dispatch')
class userLogoutView(LogoutView):
    def get_success_url(self):
        return reverse_lazy('homepage')
    

@method_decorator(login_required, name= 'dispatch')
class userUpdateView(UpdateView):
    template_name = 'accounts/profile.html'
    form_class = forms.UserUpdateForm
    model = User

    def get(self, request):
        form = self.form_class(instance = request.user)
        return render (request, self.template_name, {'form': form})
    
    def post(self, request):
        form = forms.UserRegistrationForm(request.POST, instance = request.user)

        if form.is_valid():
            form.save()
            return redirect('profile')
        return render(request, self.template_name, {'form':form})