from django.urls import path
from . import views
urlpatterns = [
    path('', views.TakeNote.as_view(), name='takeNote'),
    path('editNote<int:pk>/', views.NoteModelUpdateView.as_view(), name='EditNote'),
    path('deleteNote<int:pk>/', views.NoteModelDeleteView.as_view(), name='deleteNote'),
    path('archive<int:id>/<int:B>/', views.ArchiveNote.as_view(), name='Archive'),
    path('Show/archive', views.ShowArchiveNote.as_view(),name='ShowArchive')
]

