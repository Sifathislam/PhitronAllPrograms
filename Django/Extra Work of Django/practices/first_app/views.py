from django.shortcuts import render
from django.urls import reverse_lazy
from django.views.generic import TemplateView # for template view
from django.views.generic.base import View # for View Class
from django.http import HttpResponse # for View Class
from django.utils import timezone #for the details view
from django.views.generic.detail import DetailView #for the details view
from . models import Article 
# This view will show the template for us   with Templateview Class
from django.views.generic.base import RedirectView # For Redirect views Class
from django.views.generic.edit import CreateView # This is for crateing a new post 
from . forms import createviewForm
from django.views.generic import ListView # With this we will see the list of the data sotredd in our data base 
from django.views.generic import DetailView # with this we will delete spacific items
# Create your views here.

# This view will show the template for us   with Templateview Class
class HomeView(TemplateView):
    template_name = 'home.html'

# This view will show the template for us   with View Class
class ViewClass(View):
    def get(self, request, *args,**kwargs):
        return HttpResponse("This view class only")

# This view will Redirect to another page for us with Redirect Class
# class RedirectView(RedirectView): normally we won't use it here we use it in the urls section 
class NewPageView(View): # for the redirect not nessecary but i use it to test
    def get(self, request, *args,**kwargs):
        return HttpResponse("Well come To the New  Page")

# This view will show the DetailView works 
class ArticleDetailsView(DetailView):
    model = Article
    template_name = 'details.html'
    context_object_name = 'article'

# This view will how we can create a post 
class AddArticle(CreateView):
    model = Article
    form_class = createviewForm
    template_name = 'addpost.html'
    success_url = reverse_lazy('homepage')
    context_object_name = 'form'

# This view will how we can see a list of the post

class CreateListView(ListView):
    model = Article
    template_name = 'details.html' 
    context_object_name = 'posts'

# This view will delete spacific items from data base
class DeleteViewClass(DetailView):
    model = Article
    template_name = 'delete.html'

    def post(self, request, *args, **kwargs):
        print("Post method called")
        return super().request(request, *args, **kwargs)
    
    def get_success_url(self):
        return reverse_lazy('listview')
    
