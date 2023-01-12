coke = 50

while coke > 0:
    print ("Amount Due: ", coke)
    pay = int(input("Insert coin: "))
    if pay in [25, 10, 5]:
        coke -= pay
owed =abs(coke)
print("Changed owed: ", owed)
