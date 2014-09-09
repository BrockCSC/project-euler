# Project Euler Problem # 10

def isPrime(n):
  # 0 and 1 are not prime numbers
  if n < 2:
    return False
  
  # Mark 2 as a prime number
  if n == 2:
    return True
  
  # Check for any even number and return false, bitwise and
  if not n & 1:
    return False
  
  # Range starts with 3 and only needs to go up the squareroot of n
  # for all odd numbers
  for x in range(3,(n**0.5)+1,2):
    if n % x == 0:
      return False
  return True 

count = 0
for i in range(0,2000001):
  if isPrime(i):
    count += i
  if i%100000 == 0:
    print (i/2000000*100)

print count
