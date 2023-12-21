from django.db import models

# Create your models here.
class CreateBrand(models.Model):
    name = models.CharField(max_length=150)
    slug = models.SlugField(max_length=250, unique=True, null =True, blank = True)

    def __str__(self) :
        return self.name