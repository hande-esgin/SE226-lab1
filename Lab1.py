name = input("What is your name ?\n")
print("Hello " + name + ".")

id = input("What is your Student ID? \n")
print("Your ID is " + id + ".")

var1 = int(input("Enter first integer value: \n"))
var2 = int(input("Enter second integer value: \n"))
sum = var1 + var2
diff = abs(var2 - var1)
prod = var1 * var2
print(f"Summation: {sum}")
print(f"difference: {diff}")
print(f"Multiplication: {prod}")
print(var1 / var2)

stuName = input("What is your name ?")
lab = int(input("Enter lab grade: "))
mid = int(input("Enter midterm grade: "))
final = int(input("Enter final grade: "))
last = lab * 0.25 + mid * 0.35 + final * 0.4
print(f"Name: {stuName}")
print(f"Lab: {lab}")
print(f"Midterm: {mid}")
print(f"Final: {final}")
print(f"Last Score: {last}")

print("*\n**\n***\n**\n*")
