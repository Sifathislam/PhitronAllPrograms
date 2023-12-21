from django.shortcuts import render
from CarModel.models import CarModel
from BrandModel.models import CreateBrand
def home(request,slugName = None):
    data = CarModel.objects.all()
    if slugName is not None:
        Brand = CreateBrand.objects.get(slug = slugName)
        data = CarModel.objects.filter(brand_name= Brand)
    Brand = CreateBrand.objects.all()
    return render(request, 'home.html', {'data': data, 'brands':Brand})
