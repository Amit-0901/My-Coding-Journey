# Write a program to create a dictionary of Hindi words with values as their English
#translation. Provide user with an option to look it up!
translatio_dict = {
    "नमस्ते": "Hello",
    "धन्यवाद": "Thank you",
    "कृपया": "Please",
    "माफ़ कीजिए": "Excuse me"
}
word = input("Enter a Hindi word to translate: ")
if word in translatio_dict:
    print(f"The English translation of '{word}' is '{translatio_dict[word]}'")  
    