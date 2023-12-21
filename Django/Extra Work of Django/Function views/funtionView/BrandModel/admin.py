from django.contrib import admin
from .models import CreateBrand
# Register your models here.

class BrandAdmin(admin.ModelAdmin):
    prepopulated_fields = {'slug' :('name',)}
    list_display = ['slug','name']


admin.site.register(CreateBrand,BrandAdmin)
