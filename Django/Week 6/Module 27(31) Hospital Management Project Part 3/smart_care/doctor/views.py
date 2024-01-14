from django.shortcuts import render
from rest_framework import viewsets,filters, pagination
from . import models
from . import serializers
from rest_framework.permissions import IsAuthenticatedOrReadOnly,IsAuthenticated

# Create your views here.
class DoctorPagination(pagination.PageNumberPagination):  
    permission_classes = [IsAuthenticatedOrReadOnly] #For single use 
    page_size = 1 #ak page koyta thakbe item
    page_size_query_param = page_size
    max_page_size = 100

class DoctorViewSet (viewsets.ModelViewSet):
    queryset = models.Doctor.objects.all()
    serializer_class = serializers.DoctorSerializer
    filter_backends = [filters.SearchFilter]
    pagination_class = DoctorPagination
    search_fields = ['user__first_name', 'user__email', 'designation__name', 'specialization__name']
  

class SpacializationViewSet (viewsets.ModelViewSet):
    permission_classes = [IsAuthenticated]
    queryset = models.Specialization.objects.all()
    serializer_class = serializers.SpacializationSerializer

class DasignationViewSet (viewsets.ModelViewSet):
    permission_classes = [IsAuthenticated]
    queryset = models.Designation.objects.all()
    serializer_class = serializers.DesignationSerializer

class AvailableTimeForSpacificDoctor(filters.BaseFilterBackend):
    def filter_queryset(self, request, queryset, view):
        doctor_id = request.query_params.get("doctor_id")
        if doctor_id:
            return queryset.filter(doctor = doctor_id)
        return queryset



class AvailableTimeViewSet (viewsets.ModelViewSet):
    permission_classes = [IsAuthenticatedOrReadOnly] #For single use 
    queryset = models.AvailableTime.objects.all()
    serializer_class = serializers.AvailableTimeSerializer
    filter_backends = [AvailableTimeForSpacificDoctor]

class ReviewViewSet (viewsets.ModelViewSet):
    permission_classes = [IsAuthenticatedOrReadOnly] #For single use  
    queryset = models.Review.objects.all()
    serializer_class = serializers.ReviewSerializer

