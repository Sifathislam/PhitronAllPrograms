from django.urls import path
from . import views
urlpatterns = [
    
    path('', views.home, name = 'home'),
# Those are work of the cookies 
    #  path('set/',views.setCookies),
    # path('get/',views.getCookies),
    # path('del/',views.del_cookie),
# Those are work of the session 
    path('set/',views.set_session),
    path('get/',views.get_session),
    path('del/',views.del_session),
]
