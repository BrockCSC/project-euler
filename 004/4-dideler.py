#/usr/bin/env python

"""
Find the largest palindrome made from the product of two 3-digit numbers.
"""

max = 0
for i in reversed(range(900, 1000)):  # Unleash the reversed iterators!
  for j in reversed(range(900, 1000)):
    product = i * j
    if product == int(str(product)[::-1]) and product > max:  # Palindrome and max check.
      max = product

print max
