num =[]
max=0
odd_notfound=0

for i in range (10):
 num.append(int(input()))

for i in range (10):
 if num[i]%2!=0:
  odd_notfound =1
  if num[i]>max:
   max = num[i]

if odd_notfound==0:
  print("Odd number not found")

if(max!=0):
   print(f"Largest odd number {max}")