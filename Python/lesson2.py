# firstNumber = int(input('Please enter first number'))
# secondNumber = int(input('Please enter second number'))

# if firstNumber<secondNumber:
#     print("first number is less than second number")
# elif firstNumber==secondNumber:
#     print("first number equal second number")
# else:
#     print("first number is greater than second number")


# str="helloworld"
# print(str[2:5])


print('press 1 to add :>')
print('press 2 to substract :>')
print('press 3 to multiply :>')
print('press 4 to divide :>')
user=int(input('Please enter something >>>>>>>>'))
num1=int(input('enter num 1'))
num2=int(input('enter num 2'))
# num3=int(input('enter num 3'))

if user==1:
    opt='+'
    temp=num1+num2
    print("num1 "+opt+"num2 is {}".format(temp))
elif user==2:
    opt='-'
    temp=num1-num2
    print("num1 "+opt+"num2 is {}".format(temp))
elif user==3:
    opt='*'
    temp=num1*num2
    print("num1 "+opt+"num2 is {}".format(temp))
elif user==4:
    opt='/'
    temp=num1/num2
    print("num1 "+opt+"num2 is {}".format(temp))