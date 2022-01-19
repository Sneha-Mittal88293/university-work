num1 = int(input("Enter first number : \n"))
num2 = int(input("Enter second number : \n"))
a = num1
b = num2
if num1>num2:
 smaller = num1
else:
 smaller = num2
for i in range(1,smaller+1):
  if ((num1%i==0) and (num2%i==0)):
    hcf = i
print(f"HCF = {hcf}")