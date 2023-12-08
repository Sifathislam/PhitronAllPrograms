from django.shortcuts import render

# Create your views here.

def home(request):
    context ={
        'text': "Dive into a world of flavor with our irresistible chicken delights. Our signature Chicken Fries boast a perfect blend of crispiness and tenderness, making every bite a celebration of taste and texture. Elevate your dining experience with our Grilled Chicken Breast, expertly crafted for those who appreciate the art of grilling. At Albaik Delights, weprioritize quality and passion in every dish. Our commitment to using the finest ingredients ensures a dining adventure that exceeds expectations.From the satisfying crunch of our Chicken Fries to the juicy perfection of our Grilled Chicken Breast, each dish tells a story of culinary expertise.Join us in a cozy ambiance where hospitality meets excellence. Albaik Delights is not just a restaurant; it s a destination for chicken enthusiasts seeking an unforgettable culinary journey. Embark on a gastronomic adventure with us and savor the essence of extraordinary chicken creations. Indulge your cravings. Experience Albaik Delights today!"
    }
    return render(request,'home.html',context)