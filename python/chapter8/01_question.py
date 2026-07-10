#1. Write a program using functions to find greatest of three numbers 
def greatest(a,b,c):
    if(a>b and a>c):
        print(f"{a} is greatest")
    elif(b>c and b>a):
        print(f"{b} is greatest")
    else:
        print(f"{c} is greatest")

a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
c = int(input("Enter the third number: "))

greatest(a,b,c)