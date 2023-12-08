from django import forms
from djangoModes.models import studentModel

class studentForm(forms.Form):
    class Meta: 
        model = studentModel
        fields = '__all__'
