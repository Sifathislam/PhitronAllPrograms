from django.urls import path
from . import views

urlpatterns = [
    path("course/",views.courses),
    path("Sifat_info/",views.Sifat_info),
]
