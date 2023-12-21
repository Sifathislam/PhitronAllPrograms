from django import forms
from . models import Article
class createviewForm(forms.ModelForm):
    class Meta:
        model = Article
        fields = ['name', 'details']