#1. Write a program to find the greatest of four numbers entered by the user.

def maximum():
   a = int(input("Enter first number :"))
   b = int(input("Enter second number :"))
   c = int(input("Enter third number :"))
   d = int(input("Enter fourth number :"))
   if(a>b and a>c and a>d):
    print(f"The greatest number is , {a}")

   elif(b>a and b>c and b>d):
        print(f"The greatest number is , {b}")

   elif(c>a and c>b and c>d):
        print(f"The greatest number is , {c}")

   else:
        print(f"The greatest number is , {d}")

maximum()
print("The maximum number is achieved")
