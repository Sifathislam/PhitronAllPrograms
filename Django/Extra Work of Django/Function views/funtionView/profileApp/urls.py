from django.urls import path,include
from . import views
urlpatterns = [
    path('register/',views.register, name='register'),
    path('login/' , views.userlogin, name='login'),
    path('profile/' , views.profile, name='profile'),
    path('edit/', views.ProfileEdit, name = 'ProfileChange'),
    path('Logout/' , views.userLogout, name='logout'),
    path('changePass/', views.changePass, name = 'changepass')
]