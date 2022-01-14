mark = []
total_marks = 0
print("enter marks:  ")

for i in range (5):
    print(f"enter the marks of subject {i+1} out of 100:  ",end =" ")
    mark.insert(i,int(input()))
    if mark[i]>100:
     print(f"Re-Enter marks of subject {i+1} out of 100 : ",end = " ")
     mark.insert(i,int(input()))
for i in range(5):
    total_marks += mark[i]

print(f"\nAggregate marks = {total_marks}")
print(f"Percentage marks = {round((total_marks/600)*100,2)}")
