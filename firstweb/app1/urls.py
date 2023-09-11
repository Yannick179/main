from django.urls import path

from . import views

urlpatterns = [
    path("", views.index, name="index"),
    path("yannick", views.yannick, name="yannick"),
    path("<str:name>", views.greet, name="greet")
]