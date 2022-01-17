cube = 1
number = int(input())
for i in range(number):
 cube=i*i*i
 if(cube==number):
  print("The number is perfect cube")
  print(f"{i}*{i}*{i} = {number}")
  break
 elif cube>number:
  print("The number is not perfect cube")
  break