unit=input("Enter Temp Unit C/F: ")
if(unit=="C" or unit=="c"):
    temp=float(input("Enter Temperature: "))
    temp=(9/5*temp)+32
    print(temp)
elif(unit=="F" or unit=="f"):
    temp=float(input("Enter Temperature: "))
    temp=5/9*(temp-32)
    print(temp)
else:
    print("Not A Valid Temp Unit")