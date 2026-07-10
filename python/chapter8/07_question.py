# 7. Write a python function to remove a given word from a list and strip it at the same time.
# Function to remove a word and strip spaces
def remove_and_strip(lst, word):
    new_list = []
    for item in lst:
        item = item.strip()      # Remove leading/trailing spaces
        if item != word:         # Keep only items not equal to the given word
            new_list.append(item)
    return new_list

# Example list
words = ["  Amit  ", "Apple", "  Banana ", "Amit", " Mango  "]

# Calling the function
result = remove_and_strip(words, "Amit")

# Printing the result
print(result)