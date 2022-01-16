new_num = 0
number = input()
length = len(number)
num = int(number)

for i in range(length):
  digit = num%10
  if digit==9:
   digit = -1
  digit = digit+1

  if i==0:
    new_num += (digit + 10*i)
    num = num//10
  else:
    new_num += (digit*10**i)
    num = num//10

print(new_num)