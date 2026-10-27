n=int(input("Enter a number: "))
sum=0
for i in range(1, n+1):
    for j in range(1,i+1):
        print(j,end=" ")
        sum=sum+j
    print()
print("\nSum of triangle: %d"%sum)    