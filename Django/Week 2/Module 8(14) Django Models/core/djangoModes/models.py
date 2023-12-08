from django.db import models

# # Create your models here.
# class Student(models.Model):
#     name = models.CharField(max_length=20)
#     roll = models.IntegerField(primary_key=True)
#     adress = models.TextField()
#     fatherName = models.TextField(default="RofiQ")

#     def __str__(self):
#         return f"Roll: {self.roll} Name: {self.name}"

class studentModel(models.Model):
        roll = models.IntegerField(primary_key=True)
        name = models.CharField(max_length=50)
        fatherName = models.CharField(max_length=50)
        address = models.TextField()

