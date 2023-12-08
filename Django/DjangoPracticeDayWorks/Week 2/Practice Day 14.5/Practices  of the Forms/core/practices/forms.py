from django import forms
import datetime
class practices(forms.Form):
    # Work of the ordinary coder s 
    name = forms.CharField()
    age = forms.IntegerField(required=False)
    coment1 = forms.CharField(widget=forms.Textarea)
    comment2 = forms.CharField(widget=forms.Textarea(attrs={'rows':3}))
    email = forms.EmailField()
    agree = forms.BooleanField()
    date = forms.DateField()
    birth_date = forms.DateField(widget=forms.DateInput(attrs={'type': 'date'}))
    BIRTH_YEAR_CHOICES = range(1900, 2023)  
    birth_year = forms.DateField(widget=forms.SelectDateWidget(years=BIRTH_YEAR_CHOICES))
    value = forms.DecimalField()
    message = forms.CharField(
	max_length = 10,
    )
    email_address = forms.EmailField( 
    label="Please enter your email address",
    )
    first_name = forms.CharField(initial='Your name')
    agree = forms.BooleanField(initial=True)
    day = forms.DateField(initial=datetime.date.today)
    FAVORITE_COLORS_CHOICES = [
    ('blue', 'Blue'),
    ('green', 'Green'),
    ('black', 'Black'),
    ]
    favorite_color = forms.ChoiceField(choices=FAVORITE_COLORS_CHOICES)
    favorite_color = forms.ChoiceField(widget=forms.RadioSelect, choices=FAVORITE_COLORS_CHOICES)
    favorite_colors = forms.MultipleChoiceField(choices=FAVORITE_COLORS_CHOICES)
    favorite_colors = forms.MultipleChoiceField(widget=forms.CheckboxSelectMultiple,choices=FAVORITE_COLORS_CHOICES,)

    # Work of the geek for geeks
    roll_number = forms.IntegerField(  
        help_text = "Enter 6 digit roll number")  
    geeks_field = forms.RegexField(regex = "G.*s") 
    UrlField = forms.URLField( ) 
    # typeChoicefield = forms.TypedChoiceField( 
    #                choices = GEEKS_CHOICES, 
    #                coerce = str
    #               ) 
    DatatimeField= forms.DateTimeField()
    DurationFidld = forms.DurationField() 
    FileField = forms.FileField()
    FilePathField = forms.FilePathField(path = "practices/")
    FloatField = forms.FloatField() 
    ImageField = forms.ImageField()
    GenericipField = forms.GenericIPAddressField()
     
    DEMO_CHOICES =( 
        ("1", "Naveen"), 
        ("2", "Pranav"), 
        ("3", "Isha"), 
        ("4", "Saloni"), 
    )  
    typemultipleChoice = forms.TypedMultipleChoiceField(choices = DEMO_CHOICES, coerce = int)
    NullBollean = forms.NullBooleanField( ) 