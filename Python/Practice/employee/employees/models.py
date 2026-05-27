from django.db import models

# Create your models here.
class Employees(models.Model):
    name = models.CharField(max_length=50)
    email = models.EmailField()
    department = models.CharField(max_length=100)
    salary = models.FloatField()