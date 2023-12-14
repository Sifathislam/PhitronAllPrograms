from django import forms
from .models import Post,CommentModel

class PostForm(forms.ModelForm):
    class Meta: 
        model = Post
        # fields = '__all__'
        exclude = ['author']

class CommentForm(forms.ModelForm):
    class Meta:
        model = CommentModel
        fields = ['name','email','body']