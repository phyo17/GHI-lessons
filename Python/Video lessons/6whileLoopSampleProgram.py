# a=21
# b=20
# while a<=b:
#     print('{} Hello i am Phyo Pyae Sone'.format(a))
#     a+=1
# print('Nothing do!')


#break
#continue
#different between break and continue

# for va in "phyo pyae sone":
#     if va=='s':
#         continue
#     print(va)
# print('_________________ending_____________')



ls=[1,2,3,4,5]
data=99
found=False
index=0

while index<len(ls):
    if ls[index]==data:
        found=True
        break
    index +=1
if not found:
    print(ls)
    print(data,' is not here')
    print('after append')
    ls.append(data)
print(ls)