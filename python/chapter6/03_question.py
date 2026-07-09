#3. A spam comment is defined as a text containing following keywords:
#  “Make a lot ofmoney”, “buy now”, “subscribe this”, “click this”. 
# Write a program to detect these spams
comment = input("Please enter the comment : ")
spam1 = "make a lot of money"
spam2 = "buy now"
spam3 = "subscribe this"
spam4 = "click this"
#in keyword is used to detect terms from the text
if(spam1 in comment or spam2 in comment or spam3 in comment or spam4 in comment ):
    print("Spam comment")
else :
    print("good comment")