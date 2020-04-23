print("hello world")

a = 10
b = 20

print("a value is {} / b value is {}".format(a,b))
print("b value is {} / a value is {}".format(b,a))

print("x value is {num1} / y value is {num2}".format(num1 = 7, num2 = 15))
print("x value is {num2} / y value is {num1}".format(num1 = 7, num2 = 15))

a = 2.12345
print("a value is %.2f"%a)

a = int(input("Enter something:"))
print(a)
b = 10 + a
print(b)

a = b = c = 10
print(a)

a = 5e2
print(a)

a = 5e-2
print(a)

a = complex(1,2)
print(a.real)
print(a.imag)