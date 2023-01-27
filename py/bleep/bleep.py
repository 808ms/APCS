import sys
from cs50 import get_string

def main():
    if len(sys.argv) != 2:
        sys.exit("Include a file of words to ban.")
    dictionary = sys.argv[1]
    b = set()
    d = open(dictionary, "r")

    for line in d:
        b.add(line.rstrip('\n'))
    d.close()

    message = get_string(" Message: ")
    tokens = message.split()

    b_upper = set()

    for word in b:
        b_upper.add(word.upper())
    print(b_upper)

    for token in tokens:

        if token in b:
            index = tokens.index(token)
            ban = tokens[index]
            hide = ""

            for _ in range(len(ban)):
                hide = hide + "*"
            tokens[index] = hide

    for token in tokens:
        if token in b_upper:
            index = tokens.index(token)
            ban = tokens[index]
            hide = ""

            for _ in range(len(ban)):
                hide = hide + "*"
            tokens[index] = hide
    output_message = " "

    for item in tokens:
        output_message = output_message + " " + item
    print(output_message)

if __name__ == "__main__":
    main()