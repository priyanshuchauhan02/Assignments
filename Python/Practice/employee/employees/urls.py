from django.urls import path
from employees import views
from employees.views import *

urlpatterns = [

    path('', views.add_employee, name='add_employee'),
    path('employees/', views.employee_list, name='employee_list'),
    path('update', views.update_employee, name='update_employee'),
    path('delete', views.delete_employee, name='delete_employee'),

]