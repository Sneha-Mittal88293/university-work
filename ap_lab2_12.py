length = float(input("enter the length of the rectangle : "))
width = float(input("enter the width of the rectangle : "))
radius = float(input("enter the radius of the circle: "))

area_of_rectangle = length*width
perimeter_of_rectangle = 2*(length*width)
area_of_circle = 3.14*radius**2
circumference_of_circle = 2*3.14*radius


print(f"area of rectangle is {round(area_of_rectangle,2)}")
print(f"perimeter of rectangle is {round(perimeter_of_rectangle,2)}")
print(f" area of circle is {round(area_of_circle,2)}")
print(f"circumference of circle is {round(circumference_of_circle,2)}")