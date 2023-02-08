import sys
import os.path
from os import path
import csv

if (len(sys.argv) <= 2):
    sys.exit("Too few command-line arguments")
elif len(sys.argv) > 3:
    sys.exit("Too many command-line arguments")
elif not path.exists(sys.argv[1]):
    sys.exit("File does not exist")
else:
    students = []

    with open(sys.argv[1]) as csvfile:
        r = csv.DictReader(csvfile)
        for row in r:
            names = row['name'].split(', ')
            fn = names[1]
            ln = names[0]
            h = row['house']
            students.append({'first': fn, 'last': ln, "house": h})

    keys = students[0].keys()
    with open(sys.argv[2], 'w', newline='') as csvfile:
        writer = csv.DictWriter(csvfile, keys)
        writer.writeheader()
        writer.writerows(students)