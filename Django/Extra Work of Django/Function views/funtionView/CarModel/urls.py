from django.urls import path,include
from . import views
urlpatterns = [
    path('Views_Details<int:id>/', views.ViewDetails,name='Views_Details'),
    path('buynow/<int:id>', views.buynow, name='buynow')
]
