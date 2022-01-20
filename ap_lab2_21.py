num1 = int(input("Enter number 1 : "))
num2 = int(input("Enter number 1 : "))
if num1 > num2:
 max = num1
else:
 max = num2
while(True):
 if max%num1==0 and max%num2==0 :
   break
 max = max + 1
print(f"LCM = {max}")