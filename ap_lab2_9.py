print("enter three numbers: ")
a = int(input("Enter A = "))
b = int(input("Enter B = "))
c = int(input("Enter C = "))

if a>b:
    if a>c:
        print(f"greatest number is {a}")
    else:
        print(f"greatest number is {c}")    
elif b>c:
    print(f"greatest number is {b}")
else:
    print(f"greatest number is {c}")
