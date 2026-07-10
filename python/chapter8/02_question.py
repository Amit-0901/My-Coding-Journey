# 2. Write a python program using function to convert Celsius to Fahrenheit.
# Function to convert Celsius to Fahrenheit
def celsius_to_fahrenheit(celsius):
    fahrenheit = (9/5) * celsius + 32
    return fahrenheit

celsius = float(input("Enter temperature in Celsius: "))
fahrenheit = celsius_to_fahrenheit(celsius)
print("Temperature in Fahrenheit:", fahrenheit)