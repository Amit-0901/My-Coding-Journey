# 2. Write a program to fill in a letter template given below with name and date.
# letter = '''
# Dear <|Name|>,
# You are selected!
# <|Date|>
# '''
letter = '''Dear <|Name|>,
You are selected!
<|Date|>
'''
letter = letter.replace("<|Name|>", input("Enter your name: ").replace)