from cs50 import get_int

height = 0

while height not in range(1, 9):
    height = get_int("Height: ")

for row in range(1, height + 1):
    print(" " * (height - row) + "#" * row + "  " + "#" * row)