# what is type casting?
# Type casting is a way to convert a variable from one data type to another data type.
# There are two types of type casting in python 
# Implicit type casting 
# Explicit type casting 
# Implicit type casting is done by python itself without any user intervention 
# Explicit type casting is done by user itself 
# Implicit type casting is done when we are trying to convert a smaller data type to a larger data type
# Explicit type casting is done when we are trying to convert a larger data type to a smaller data type 
a=10
b=20 
c = a+b
print(c) 
a="200"
b="100"
print(int(a)+int(b))
a=30
b=40 
print(a+b)
#implicit type casting
c=1.23
d=2.5664
print(c+d)
#explicit type casting
a=10
b=20.5  
print(float(a)+b)
###########Taking User Input############
a = input("Enter your name: ")
print("My name is: ",a)
x= input("Enter a number: ")   
y= input("Enter a number: ")
print(int(x)+int(y))