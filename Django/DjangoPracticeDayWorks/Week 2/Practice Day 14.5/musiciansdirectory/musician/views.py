from django.shortcuts import render,redirect
from . import forms
# Create your views here.
def add_musician(request):
        if request.method == 'POST':
            add_Musician_form = forms.MusicainForm(request.POST)
            if add_Musician_form.is_valid():
                add_Musician_form.save()
                return redirect('add_musician')

        else:
            add_Musician_form = forms.MusicainForm()
            
        return render(request, 'add_musician.html',{'form': add_Musician_form})



