len=int(input("Enter length of rectangle: "))
bred=int(input("Enter breadth of rectangle: "))
symbol=input("Enter symbol you want to use: ")

if(len!=bred):
    print()
    for i in range(1,len+1):
        for j in range(1,bred+1):
            print(symbol,end=" ")
        print()

else:
    print("Length and Breadth can't be equal")
