#5. Write a program which finds out whether a given name is present in a list or not.
list = ["aman" , "karan" , "amit" , "ajay", "shubham" ,"satish" , "rohit" ,"guddu"]
name = input("enter the name : ")
# i = 0
# while(i < len(list)):
#  if(list[i] == name):
#     print("Name is present in list")

#  i+= 1

# else: 
#     print("not present")

if(name in list ):
       print("Name is present in list")
else: 
    print("not present")