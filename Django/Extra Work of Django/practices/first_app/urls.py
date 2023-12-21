from django.urls import path
from . import views
from django.views.generic.base import RedirectView # This view will show the template for us   with Templateview Class
from .views import NewPageView
urlpatterns = [
    path('',views.HomeView.as_view(),name='homepage'),
    path('view/',views.ViewClass.as_view(),name='view'),
    # for the redirect 
    path('old-page/', RedirectView.as_view(url='/new-page/'),name='old_page'),
    path('new-page/', views.NewPageView.as_view(), name='new_page'),
    # end for the redirect
    path('articels<int:pk>/',views.ArticleDetailsView.as_view(),name = 'detailsview'),
    path('addPost/', views.AddArticle.as_view(), name ='addpost'),
    path('listview/', views.CreateListView.as_view(), name='listview'),
    path('deleteview/<int:pk>/', views.DeleteViewClass.as_view(), name='deleteView')
]
