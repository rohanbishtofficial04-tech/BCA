# Check if a number is an Armstrong number
num = 153
sum = 0
temp = num
n = len(str(num))  # Number of digits

while temp > 0:
    digit = temp % 10
    sum = sum+digit**3
    temp = temp //  10

if num == sum:
    print(num, "is an Armstrong number")
else:
    print(num, "is not an Armstrong number")
