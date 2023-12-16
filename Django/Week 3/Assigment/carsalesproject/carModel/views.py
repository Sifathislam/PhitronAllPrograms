from django.shortcuts import render,redirect
from . import models
from django.views.generic import DetailView
from django.urls import reverse_lazy
from . import forms
from django.contrib import messages

# Create your views here.

class ViewDetails(DetailView):
    model = models.CarModel
    pk_url_kwarg = 'id'
    template_name = 'view_details.html'
    
    def post(self, request, *args, **kwargs):
        comment_form = forms.CommentForm(data=self.request.POST)
        post = self.get_object()
        if comment_form.is_valid():
            new_comment = comment_form.save(commit=False)
            new_comment.post = post
            new_comment.save()


        if 'buy_the_car' in request.POST:
            if post.quntity > 0:
                post.quntity -=1
                post.save()
                models.Purcehase_history.objects.create(user=request.user, car=post)
            else:
                messages.warning(self.request, 'Your provided information is incorrect')
        return self.get(request, *args, **kwargs)
        
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        post = self.object # post model er object ekhane store korlam
        comments = post.comments.all()
        comment_form = forms.CommentForm()
        
        context['comments'] = comments
        context['comment_form'] = comment_form
        return context



# class buycar(DetailView):
#     model = models.CarModel
#     pk_url_kwarg = 'id'
#     template_name = 'view_details.html'
    
#     def post(self, request, *args, **kwargs):
#         comment_form = forms.CommentForm(data=self.request.POST)
#         post = self.get_object()
#         if comment_form.is_valid():
#             new_comment = comment_form.save(commit=False)
#             new_comment.post = post
#             new_comment.save()
#         return self.get(request, *args, **kwargs)
        
#     def get_context_data(self, **kwargs):
#         context = super().get_context_data(**kwargs)
#         post = self.object # post model er object ekhane store korlam
#         comments = post.comments.all()
#         comment_form = forms.CommentForm()
        
#         context['comments'] = comments
#         context['comment_form'] = comment_form
#         return context
