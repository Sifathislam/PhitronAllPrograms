from django.urls import path
from .views import UserRegistrationView, userLoginView, userLogoutView,userUpdateView
 
urlpatterns = [
    path('register/', UserRegistrationView.as_view(), name='register'),
    path('login/', userLoginView.as_view(), name='login'),
    path('logout/', userLogoutView.as_view(), name='logout'),
    path('profile/', userUpdateView.as_view(), name='profile' )
    
]