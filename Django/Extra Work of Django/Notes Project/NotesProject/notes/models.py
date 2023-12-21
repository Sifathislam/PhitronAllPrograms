from django.db import models
from user.forms import User
# Create your models here.
class NoteModel(models.Model):
    title = models.CharField(max_length=100)
    body = models.TextField()
    date_time = models.DateTimeField(auto_now_add=True)
    user = models.ForeignKey(User, on_delete=models.CASCADE)

    def __str__(self):
        return f"Note Of  {self.user.username}"