from django.views.generic import FormView
from . import forms
from django.urls import reverse_lazy
from django.contrib import messages
from django.contrib.auth.views import LoginView, LogoutView
from django.contrib.auth.decorators import login_required
from django.utils.decorators import method_decorator 
from django.contrib.auth.models import User
# Create your views here.

# ======================= This is Register View work ======================================== 
class Register_Form(FormView):
     template_name = 'form.html'
     success_url = reverse_lazy('register')
     form_class = forms.Register
     model = User
     success_message = "Your account was created successfully "

     def form_valid(self,form):
          response = super().form_valid(form)
          self.user = form.save()  
          messages.success(self.request, self.success_message)
          return response
     def get_context_data(self,**kwargs):
         context = super().get_context_data(**kwargs)
         context['type'] = 'Register'
         return context


# ======================= This is Login View work ======================================== 
class User_login(LoginView):
    template_name = 'form.html'
    # form_class = AuthenticationForm
    
    def get_success_url(self):
        return reverse_lazy('homepage')

    def form_valid(self, form):
        messages.success(self.request, "WellCome You Logged In Successfully")
        return super().form_valid(form)
    
    def form_invalid(self, form):
        messages.warning(self.request, "You Provide Wrong Informaiton")
        return super().form_invalid(form)
    
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context['type'] = 'Login'

        return context


# ======================= This is Logout View work ======================================== 
@method_decorator(login_required, name='dispatch')
class userLogout(LogoutView):
    template_name = 'form.html'

    def get_success_url(self):
        return reverse_lazy('homepage')
    
    def dispatch(self, request, *args, **kwargs):
        response = super().dispatch(request, *args, **kwargs)

        messages.success(self.request, "Your Account Successfully Logged Out")
        return response
    