#function
#Standard Library Function
#programmer defined function
from math import sqrt
import math
# ls=[1,2,3,4,5]
# print("The length of ls is :",len(ls))
# print("The square of 4 is :",sqrt(4))


# data=int(input("Please enter number to make square root :>"))
# print("The square root of {} is {}".format(data,sqrt(data)))

# print("The value of pi is ",math.pi)

# print("The exp of {} is {}".format(data,math.exp(data)))

# print("The hex value of {} is {}".format(data,hex(data)))


# def myFun():
#     print("I'm from myFun")
# myFun()


def add(a,b):
    return a+b
def substract(a,b):
    return a-b
def multiply(a,b):
    return a*b
def divide(a,b):
    return a/b
fdata=int(input('Please enter first number:'))
sdata=int(input('Please enter second number:'))
print('adding ',add(fdata,sdata))
print('substarcting ',substract(fdata,sdata))
print('multiplying ',multiply(fdata,sdata))
print('dividing ',divide(fdata,sdata))