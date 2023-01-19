text = input("Text: ")

l = sum(map(str.isalpha, text))
w = len(text.split())
score = text.count('.') + text.count('!') + text.count('?')

grade = round((5.88 * l / w) - (29.6 * score / w) - 15.8)

if grade < 1:
    print("Before Grade 1")
elif grade > 15:
    print("Grade 16+")
else:
    print(f"Grade {grade}")