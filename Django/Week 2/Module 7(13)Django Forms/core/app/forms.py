from typing import Any
from django import forms
from django.core import validators
# class ContactForm(forms.Form):
#     name = forms.CharField(label="User Name: ", help_text='Type your user name', required=False, widget= forms.Textarea(attrs={'id':'text_are' , 'class':'class1 class3', 'placeholder':'Enter your name'}))
#     file = forms.FileField()
#     email = forms.EmailField(label="User Email")
#     # age = forms.IntegerField( required=False)
#     # weight = forms.FloatField( required=False)
#     # balance = forms.DecimalField( required=False)

#     age = forms.CharField(widget= forms.NumberInput)
#     check = forms.BooleanField()
#     birthDay = forms.CharField(widget=forms.DateInput(attrs= {'type': 'date'}))
#     apportment = forms.DateTimeField( required=False, widget= forms.DateInput(attrs={'type': 'datetime-local'}))
#     CHOICES = [('S', 'Small'), ('M', 'Medium'),('L', 'Large')]
#     size = forms.ChoiceField(choices=CHOICES, widget= forms.RadioSelect)
#     Meal =[('P', 'Pepperroni'), ('M', 'Mashroom'), ('B', 'Beef'), ('S', 'Slanatro')]
#     pizza = forms.MultipleChoiceField(choices=Meal, widget=forms.CheckboxSelectMultiple)





# class StudentData (forms.Form):
#     name = forms.CharField(widget= forms.TextInput)
#     email = forms.CharField(widget= forms.EmailInput)
#     age = forms.CharField(widget= forms.NumberInput)


#     def clean (self):
#         cleaned_data = super().clean()
#         valname = self.cleaned_data['name']
#         valemail = self.cleaned_data['email']

#         if len(valname)< 10: 
#             raise forms.ValidationError("Enter conrrtely at least 10 words.")
        
#         if '.com' not in valemail:
#             raise forms.ValidationError('Your Eamil musht contain .com')
# class StudentData (forms.Form):
#     name = forms.CharField(widget= forms.TextInput, validators= [validators.MinLengthValidator(10, message ='Enter name with 10 char')])
#     email = forms.CharField(widget= forms.EmailInput, validators=[validators.EmailValidator(message="Enter valid mail")])
#     age = forms.CharField(widget= forms.NumberInput, validators=[validators.MaxValueValidator(30, message="Age  max 30"),validators.MinValueValidator(15, message="Age At least 24")])

# class StudentData (forms.Form):
#     name = forms.CharField(widget= forms.TextInput)
#     email = forms.CharField(widget= forms.EmailInput)
#     age = forms.CharField(widget= forms.NumberInput)


    # def clean_name (self):
    #     valName= self.cleaned_data['name']
    #     if len(valName) < 10:
    #         raise forms.ValidationError("Enter a name with at leaset 10 char")
    #     return valName
    
    # def clean_email(self):
    #     valEmail = self.cleaned_data['email']

    #     if '.com' not in valEmail:
    #         raise forms.ValidationError("You need give .com for procced")
    #     return valEmail
    
    # def clean(self):
    #     cleaned_data = super().clean()
    #     valName = self.cleaned_data['name']
    #     valEmail = self.cleaned_data['email']
    #     if len(valName) < 10:
    #         raise forms.ValidationError("Enter a name with at leaset 10 char")    
        
    #     if '.com' not in valEmail:
    #         raise forms.ValidationError("You need give .com for procced")



# class StudentData (forms.Form):
#     name = forms.CharField(widget= forms.TextInput,validators=[validators.MinLengthValidator(10, message="Enter at lest 10 char to give the input ")])
#     email = forms.CharField(widget= forms.EmailInput, validators=[validators.EmailValidator(message="Enter a valid Email")])
#     age = forms.IntegerField(validators=[validators.MaxValueValidator(30, message="Age must be below 30"), validators.MinValueValidator(20, message="Age must me above 20")])
#     file = forms.FileField(validators=[validators.FileExtensionValidator(allowed_extensions=['pdf'])])

class passwordValidation(forms.Form):
    name = forms.CharField(widget=forms.TextInput)
    password = forms.CharField(widget=forms.PasswordInput)
    confirm_password = forms.CharField(widget=forms.PasswordInput)


    def clean(self) -> dict[str, Any]:
        cleaned_data = super().clean()
        val_pass = self.cleaned_data['password']
        val_passConfirm = self.cleaned_data['confirm_password']
        valName = self.cleaned_data['name']

        if val_pass != val_passConfirm:
            raise forms.ValidationError("Password doesn't match")
        if len(valName) < 10:
            raise forms.ValidationError("Name must be at least 10 charecters")
