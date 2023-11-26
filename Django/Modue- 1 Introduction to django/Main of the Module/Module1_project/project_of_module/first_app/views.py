from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.

def courses(request):
    return HttpResponse("This course page")


def Sifat_info(request):
    return HttpResponse("Hi I'am Sifat.......")