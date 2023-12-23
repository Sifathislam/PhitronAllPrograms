from django.shortcuts import render,get_object_or_404,redirect
from django.views.generic import CreateView, UpdateView,DeleteView
from . import models
from . import forms
from django.urls import reverse_lazy
from django.views.generic import ListView
from django.views import View
from . models import NoteModel
# Create your views here.

# ==================== Create Node work ========================
class TakeNote(CreateView):
    model = models.NoteModel
    form_class = forms.NoteForm
    template_name = 'TakeNotes.html'
    success_url = reverse_lazy('homepage')
    context_object_name = 'form'

    def form_valid(self, form):
        form.instance.user = self.request.user  # Set the user before saving
        return super().form_valid(form)

# ==================== Update Note work ========================


class NoteModelUpdateView(UpdateView):
    model = NoteModel
    form_class = forms.NoteForm
    template_name = "UpdateNote.html"
    success_url = reverse_lazy('homepage')


# ==================== Delete Note work ========================

class NoteModelDeleteView(DeleteView):
    model = NoteModel
    template_name = "delete.html"
    success_url = reverse_lazy('homepage')
    context_object_name = 'form'

# ==================== Archive Note work ========================
class ArchiveNote(View):
    def get(self,request, id,B):
        note = get_object_or_404(NoteModel, id = id)
        if B==1:
            note.is_achive = True
        else:
            note.is_achive = False
        note.save()
        if B==1:
            note.is_achive = True
            return redirect('homepage')
        else:
            note.is_achive = False
            return redirect('ShowArchive')

class ShowArchiveNote(ListView):
    model = NoteModel
    template_name = "archiveNote.html"
    context_object_name = 'Notes'
    queryset = NoteModel.objects.filter( is_achive= True)