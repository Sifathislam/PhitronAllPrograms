from django.urls import path
from . import views
urlpatterns = [
                    # Work of the Register 
    path('register/', views.Register_Form.as_view(), name='register'), 

                    # Work of the Login 
    path('login/', views.User_login.as_view(), name='login'),

                    # Work of the Logout 
    path('logout/', views.userLogout.as_view(), name='logout'), 

]
