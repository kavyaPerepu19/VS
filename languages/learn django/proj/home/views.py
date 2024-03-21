from django.shortcuts import render,HttpResponse
def index(request):
    context={
        'variable':"this is sent",
        "variable2":"hello"
    }
    return render(request,'hi.html',context)
def base(request):
    return HttpResponse("this is a services page .retry")
def password(request):
    return HttpResponse("This is password page")

# Create your views here.
