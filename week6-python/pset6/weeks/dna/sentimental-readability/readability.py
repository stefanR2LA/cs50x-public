#prompt text from user
text = input("Text: ")

letters = 0
words = 1
sentences = 0

for i in text:
    if i.isalpha():
        letters+=1
    elif i == " ":
        words+=1
    elif i in [".", "!", "?"]:
        sentences+=1

l = (letters / words) * 100
s = (sentences / words) * 100
index = 0.0588 * l - 0.296 * s - 15.8

if index < 1:
    print("Before Grade 1")
elif index >= 16:
    print ("Grade 16+")
else:
    print("Grade ", round(index))