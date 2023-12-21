from django.urls import path
from . import views
urlpatterns = [
    path('', views.TakeNote.as_view(), name='takeNote')
]
