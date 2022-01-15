amount = int(input("Enter amount : "))
tmp = amount
if amount>=100:
 note100 = amount//100
 amount%=100

print(f"Note of currency notes of 100 = {note100}")

if amount<=100 or amount>=50:
 note50 = amount//50
 amount%=50
 print(f"Note of currency notes of 50 = {note50}")

if amount<=50 or amount>=50:
 note10 = amount//10
 amount%=10
print(f"Note of currency notes of 10 = {note10}")