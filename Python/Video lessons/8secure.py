#CSPRNG
#Cryptographically strong Pseudo-Random Number Generator
#random
#secrets from in version 3.6
import secrets
print('Printing integer number using secrets module')

# #random.randint
# secureGenerator=secrets.SystemRandom()
# randomNumber=secureGenerator.randint(0,10)
# print('Secure random Number is',randomNumber)

# #random.uniform
# randomNumber=secureGenerator.uniform(1.5,10.5)
# print('Secure randrange Number is',randomNumber)

# #random.randrange
# randomNumber=secureGenerator.randrange(0,50,4)
# print('Secure randrange Number is',randomNumber)

# #random.triangular
# randomNumber=secureGenerator.triangular(10.5,50,5.5)
# print('Secure triangular Number is',randomNumber)

# #random.choice
# number=[11,12,13,14,15,16,17,18,19]
# randomNumber=secureGenerator.choice(number)
# print('Secure choice Number is',randomNumber)

# #random.sample
# randomNumber=secureGenerator.sample(number,3)
# print('Secure sample Number is',randomNumber)


print(secrets.token_bytes(4))
print(secrets.token_hex(4))
passwordresetLink="https://phyopyaesone.com/crazycoder/reset="
passwordresetLink+=secrets.token_urlsafe(8)
print('Generating secure URL',passwordresetLink)