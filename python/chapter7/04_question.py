# 4. Write a program to find whether a given number is prime or not.
n = int(input("enter the number to check : "))
if(n < 1):
    print("number is not prime")

else:
 for i in range(2,n):
     if (n%i == 0):
      print("not prime")
      break
 else:
     print ("prime")