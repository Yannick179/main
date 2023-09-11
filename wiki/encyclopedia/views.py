from django.shortcuts import render
import markdown

from . import util


def index(request):
    return render(request, "encyclopedia/index.html", {
        "entries": util.list_entries()
    })

def title(request, title):
    if util.get_entry(title) is not None:
        return render(request, "encyclopedia/title.html", {
            "page": markdown.markdown(util.get_entry(title))
        })
    else:
        return render(request, "encyclopedia/error.html")
