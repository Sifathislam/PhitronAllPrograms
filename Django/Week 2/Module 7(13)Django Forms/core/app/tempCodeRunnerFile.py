 def clean(self):
        cleaned_data = super().clean()
        valName = self.cleaned_data['name']
        valEmail = self.cleaned_data['email']
        if len(valName) < 10:
            raise forms.ValidationError("Enter a name with at leaset 10 char")    
        
        if '.com' not in valEmail:
            raise forms.ValidationError("You need give .com for procced")