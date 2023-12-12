from django.urls import path
from . import views

urlpatterns = [
    # path('add/', views.add_author,name="add_author")
    path('register/', views.register,name="register"),
    path('login/', views.User_login,name="login"),
    path('profile/', views.profile,name="profile"),
    path('profile/edit', views.profile_edit,name="profile_edit"),
    path('passwordChange/', views.pass_change,name="passwordChange"),
    path('logout/', views.user_logout,name="logout"),
]
