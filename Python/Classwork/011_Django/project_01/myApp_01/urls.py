from django.urls import path,include
from myApp_01.views import *

urlpatterns = [
    path("", index, name = "index")
]
