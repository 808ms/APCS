math = input("Input Equation: ")

x, y, z = math.split(" ")

new_x = float(x)
new_z = float(z)

if y=="+":
    answer = new_x + new_z
elif y=="-":
    answer = new_x - new_z
elif y=="/":
    answer = new_x / new_z
elif y=="*":
    answer = new_x * new_z

print(round(answer, 1))