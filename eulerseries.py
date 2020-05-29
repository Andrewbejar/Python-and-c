import math
n = int(input("Enter in the number of terms:"))
sum = 1
for i in range(1, n+1):
    sum = sum + (1.0/math.factorial(i))
print("The sum of the series is:")
print(float(sum))
