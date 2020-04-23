import random

# print(random.random())
# print('printing random integer with randint',random.randint(0,9))
# print('print random integer nums with randrange',random.randrange(0,10,2))



name=['phyo','pyae','sone','green','hackers']

#random.choice
print('select random element with random.choice',random.choice(name))

#random.sample
print('select random element with random.sample',random.sample(name,2))

#random.seed
random.seed(10)
print('random number from seed()',random.random())

#random.shuffle
random.shuffle(name)
print('before shuffle',name)
print('printing random nums with shuffle')
print('after shuffle',name)

#random.uniform
print('after uniform',random.uniform(2.5,7.5))

#random.triangular
print('random num with triangular',random.triangular(10.5,20.5,5.5))