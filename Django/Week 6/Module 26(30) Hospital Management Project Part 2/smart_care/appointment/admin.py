from django.contrib import admin
from .models import Appointment
# Register your models here.
class AppointmentAdmin(admin.ModelAdmin):
    list_display = ['doctorname', 'patientname','appointment_types','appointment_status','symptom','time','cancel']

    
    def doctorname(self, obj):
        return obj.doctor.user.first_name
    def patientname(self, obj):
        return obj.patinet.user.first_name


admin.site.register(Appointment, AppointmentAdmin)

