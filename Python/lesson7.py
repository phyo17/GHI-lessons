list=[9,8,7,6,5]
list1=['g','r','e','e','n']
def func1(a,b,c,*d):
    print(a)
    print(b)
    print(c)
    print(d)
    print(d[1][2])
func1(1,2,3,list,list1,12,13,14,15)