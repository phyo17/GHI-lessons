#For loop

# i=0
# for i in range(5):
#     print(i)

# i=0
# z=range(5)
# for i in z:
#     print(i)

# l=[10,11,12,13,14,15]
# print(l[0])
# for i in l:
#     print(i)

# s='phyopyaesone'
# for i in s:
#     print(i)

s=('a','b','c',3,4,5)
for i in s:
    print(i)

floatnum=[1.2,1.3,1.4,1.5,1.6,10.5]
print('The numbers first select is ',floatnum[0:3])
print('The numbers second select is ',floatnum[2:-1])
print('All float number in list is ',floatnum[:])

a=[1,2,3,4,5]
b=[1,2,3,4,5]

print('Address of list a is ',id(a))
print('Address of list b is ',id(b))