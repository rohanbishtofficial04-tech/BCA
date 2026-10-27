def hello(*args):
    print("Hello ",end="")
    for arg in args:
        print(arg,end=", ")

hello("Rohan1","Rohan2","Rohan3")