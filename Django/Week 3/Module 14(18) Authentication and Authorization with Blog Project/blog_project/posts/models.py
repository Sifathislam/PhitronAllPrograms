from django.db import models
from categories.models import Category
from django.contrib.auth.models import User
# Create your models here.
class Post(models.Model):
    title = models.CharField(max_length=50)
    content = models.TextField()
    category = models.ManyToManyField(Category) # 1 post can in multipe post and 1 category can have multiple post
    author = models.ForeignKey(User, on_delete=models.CASCADE)

    def __str__(self):
        return self.title 
    
    