#calculator program
# + - * /
print("Press 1 : For add")
print("Press 2 : For substract")
print("Press 3 : For multiply")
print("Press 4 : For Divide")

userInput=int(input("Please enter something :"))
firstNumber=int(input("Please enter First Number:"))
secondNumber=int(input("Please enter Second Number:"))
if userInput==1:
    result=firstNumber+secondNumber
elif userInput==2:
    result=firstNumber-secondNumber
elif userInput==3:
    result=firstNumber*secondNumber
elif userInput==4:
    result=firstNumber/secondNumber
else:
    print('You must enter 1/2/3/4')
print("The result number is ",result)