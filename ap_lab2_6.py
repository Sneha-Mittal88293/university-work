print("enter the marks obtainted in different subject: ")
s1,s2,s3,s4,s5,s6 = input().split(" ")
marks = (float(s1)+float(s2)+float(s3)+float(s4)+float(s5)+float(s6))
print(f"sum of marks is: {round(marks,2)}")
print(f"percentage: {round((marks/600)*100,2)}")
