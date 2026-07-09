# Write a program to create a dictionary of Hindi words with values as their English
#translation. Provide user with an option to look it up!
translation_dict = {
    "नमस्ते": "Hello",
    "धन्यवाद": "Thank you",
    "कृपया": "Please",
    "माफ़ कीजिए": "Excuse me"
}

word = input("Enter a Hindi word to translate: ")

print(translation_dict.get(word, "Translation not found"))
  
    