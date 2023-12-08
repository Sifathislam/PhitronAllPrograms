from django.urls import path
from . import views 
urlpatterns = [
    path('', views.home,name= 'homepage'),
    path('about/', views.about,name= "aboutpage"),
    path('form/', views.form,name= "formpage"),
    # path('django_form/',views.django_form, name="django_form")
    # path('django_form/',views.StudentForm, name="django_form")
    path('django_form/', views.Project, name = "django_form"),
]
