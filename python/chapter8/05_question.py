# 5. Write a python function to print first n lines of the following pattern.
# ***
# **
# *
# - for n = 3
def pattern(n):
    for i in range(0,n):
    #  print("*" * n)
     print("*" * (n-i))

pattern(5)

#by recurssion 

def pattern_1(n):
   if(n==0):
      return
   print("*"*n)
   pattern_1(n-1)

pattern_1(6)

