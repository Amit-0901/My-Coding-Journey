#8. Write a python function to print multiplication table of a given number.

def table(num ):
    i = 1
    while(i<11):
        print(f"{num} * {i} = {num * i}")
        i += 1



table(int(input("Enter the number :")))

