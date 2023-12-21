from django.shortcuts import render
from django.views.generic import CreateView
from . import models
from . import forms
from django.urls import reverse_lazy
# Create your views here.
class TakeNote(CreateView):
    model = models.NoteModel
    form_class = forms.NoteForm
    template_name = 'home.html'
    success_url = reverse_lazy('homepage')
    context_object_name = 'form'

    def form_valid(self, form):
        form.instance.user = self.request.user  # Set the user before saving
        return super().form_valid(form)
    