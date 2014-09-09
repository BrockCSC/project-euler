# Project Euler Problem # 7
# What is the 10001st prime number?
# Answer: 104743

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
number = 0
while True:
  number += 1
  if isPrime(number):
    count += 1
  if count == 10001:
    break

print number
print count
