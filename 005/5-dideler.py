#/usr/bin/env python

"""
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
"""

num = 2520 # Safe to start searching from this number according to the example.
rem = -1
while True:
  for i in reversed(range(1,20)):
    rem = num % i
    if rem != 0: break # Fail, restart search with increased number.
  if rem == 0: break # Success, number is evenly divisible by 1-20.
  num += 20

print num
