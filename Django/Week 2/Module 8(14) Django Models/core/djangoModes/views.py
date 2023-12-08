from django.shortcuts import render,redirect 
from . import models
from .forms import studentForm
# Create your views here.
def home(request):
    form = studentForm()
    return render(request, 'home.html', {'form': form})
    # # student = models.Student.objects.all()
    # if request.method == 'POST':
    #     form = studentForm(request.POST)
    #     if form.is_valid():
    #         # Process the form data (save to the database, etc.)
    #         # ...
    #         return redirect('homepage')  # Redirect after successful form submission
    # else:

    # return render(request, "home.html",{'data':student})

# def delete_student(request, roll):
#     std = models.Student.objects.get(pk = roll).delete()
#     return redirect("homepage")
