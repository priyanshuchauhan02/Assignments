from django.shortcuts import render,redirect
from employees.models import *
# Create your views here.

def employee_list(request):
    employees = Employees.objects.all()
    return render(request, 'employee_list.html', {'employees': employees})


def add_employee(request):

    if request.method == 'POST':
        data = request.POST
        name = data.get('name')
        email = data.get('email')
        department = data.get('department')
        salary = data.get('salary')

        Employees.objects.create(
            name=name,
            email=email,
            department=department,
            salary=salary
        )
        return redirect('/')

    return render(request, 'add_employee.html')

def update_employee(request, id):

    employee = Employees.objects.get(id=id)

    if request.method == 'POST':
        data = request.POST
        employee.name = data.get('name')
        employee.email = data.get('email')
        employee.department = data.get('department')
        employee.salary = data.get('salary')

        employee.save()
        return redirect('/')

    return render(request, 'update_employee.html', {'employee': employee})

def delete_employee(request, id):
    employee = Employees.objects.get(id=id)
    employee.delete()
    return redirect('/')
