len=int(input("Enter length of rectangle: "))
symbol=input("Enter symbol you want to use: ")

print()
for i in range(0,len+1):
    for j in range(0,i):
        print(j,end=" ")
    print()