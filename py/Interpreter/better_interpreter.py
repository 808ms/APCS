y=float(input("first number"))
b=input("operator")
c=float(input("second number"))

if b=="+":
    sumplus = y + c
    print("answer: "+ str(sumplus))
elif b=="-":
    summinus = y - c
    print("answer: "+ str(summinus))
elif b=="/":
    sumdivied = y // c
    print("answer: "+ str(sumdivied))
elif b=="*":
    product = y * c
    print("answer: "+ str(product))
else:
    print("error that is not a math operator")