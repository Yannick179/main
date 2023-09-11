from django.http import HttpResponse
from django.shortcuts import render


# Create your views here.
def index(request):
    return render(request, "app1/index.html")

def yannick(request):
    return HttpResponse("Hello Yannick")

def greet(request, name):
    return render(request, "app1/greet.html", {
        "name": name.capitalize()
    })