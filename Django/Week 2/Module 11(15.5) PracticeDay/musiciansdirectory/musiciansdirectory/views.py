from django.shortcuts import render,redirect
from album.models import album_model
from musician.models import musician_model
from album.forms import AlbumForm
from musician.forms import MusicainForm
def home(request):
    data = album_model.objects.all()
    return render(request, 'home.html',{'data':data})

def edit_post(request, id):
    postOfAlbum = album_model.objects.get(pk=id) 
    post_formofalbum = AlbumForm(instance=postOfAlbum)
    
    if request.method == 'POST': 
        post_form_album = AlbumForm(request.POST, instance=postOfAlbum) 
        if post_form_album.is_valid(): 
            post_form_album.save() 
            return redirect('homepage')
    else:
        post_form_album = AlbumForm(instance=postOfAlbum) 
        

    return render(request, 'edit.html', {'form' : post_form_album})

def edit_post_musician(request, id):
    postOfmusician = musician_model.objects.get(pk=id) 
    post_formoMusicain = MusicainForm(instance=postOfmusician)
    
    if request.method == 'POST': 
        post_form_musicain = MusicainForm(request.POST, instance=postOfmusician) 
        if post_form_musicain.is_valid(): 
            post_form_musicain.save() 
            return redirect('homepage')
    else:
        post_form_musicain = MusicainForm(instance=postOfmusician) 
        

    return render(request, 'edit.html', {'form' : post_form_musicain})



def delete_post(request, id):
    postOfAlbum = musician_model.objects.get(pk=id) 
    postOfAlbum.delete()
    return redirect('homepage')