# 6. Write a python function which converts inches to cms.
# Function to convert inches to centimeters
def inches_to_cm(inches):
    return inches * 2.54

# Taking input from the user
inches = float(input("Enter length in inches: "))

# Calling the function
cm = inches_to_cm(inches)

# Displaying the result
print("Length in centimeters:", cm)