from django.shortcuts import render, redirect
from django.views.generic import ListView
from notes.models import NoteModel
class HomeView (ListView):
    model = NoteModel
    template_name = "home.html"
    context_object_name = 'Notes'
    queryset = NoteModel.objects.filter( is_achive= False)