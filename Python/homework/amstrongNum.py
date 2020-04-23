a = int(input("Please Enter any Number: "))
lastValue=a
s=str(a)
d=0
i=0
b=0
c=0
e=0
Count = 0
while(a > 0):
    a = a // 10
    Count = Count + 1
while(i<Count):
    b=s[i]
    c=int(b)
    d=c**Count
    e+=d
    i=i+1
if(lastValue==e):
    print("Your number is amstrong number")
else:
    print("Sorry! your number is not amstrong number")