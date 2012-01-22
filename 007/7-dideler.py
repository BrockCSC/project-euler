#/usr/bin/env python

"""
What is the 10 001st prime number?
"""

def sieve(n):
  """
  Sieve of Eratosthenes should be efficient enough for slow Python.
  """
  primes = []
  array = [0, 0]  # Mark 0 and 1 as non-prime.
  for i in range(2, n):
    array.append(1)  # Mark all other numbers > 2 as possibly-prime.
  
  for i in range(2, n):
    if array[i] == 1:
      for j in range(i*i, n, i):
        array[j] = 0  # Point out the posers.
      primes.append(i)
      if len(primes) >= 10001:  # Stop as soon as we reach prime 10,001
        return primes
  return primes

print sieve(1000000)[10000]
