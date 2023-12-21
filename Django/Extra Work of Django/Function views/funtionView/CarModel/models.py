from django.db import models
from BrandModel.models import CreateBrand
from django.contrib.auth.models import User
# Create your models here.

class CarModel(models.Model):
    name = models.CharField(max_length=150)
    price = models.DecimalField(max_digits=10, decimal_places=0)
    quntity = models.IntegerField()
    description = models.TextField()
    image = models.ImageField(upload_to='CarModel/media/uploads', height_field=None, width_field=None,max_length=None, default='')
    brand_name = models.ForeignKey(CreateBrand, on_delete=models.CASCADE)
    
    def __str__(self):
        return self.name

class Comment(models.Model):
    # CModel = models.ForeignKey(CarModel, on_delete=models.CASCADE)
    name = models.CharField(max_length=100)
    body = models.TextField()
    created_on = models.DateTimeField(auto_now_add=True)
    

    def __str__(self):
        return f"Comment By {self.name}"
    

class buying_history(models.Model):
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    purchase_date = models.DateTimeField(auto_now_add=True)
    car = models.ForeignKey(CarModel,on_delete=models.CASCADE)

    def __str__(self):
        return f"{self.user.first_name} buy this car name: {self.car.name}"