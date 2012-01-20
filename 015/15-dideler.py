'''
How many routes are there through a 20x20 grid, from the top-left to the bottom-right corner?

This is a combinatorics problem and can be done without a program.
It's a binomial coefficient. distance = (X+Y distance) choose (X distance)
In this case, 40 choose 20. Plug it into Wolfram Alpha and you're done.

I still wanted to make a program for fun.
Need to calculate: n choose k = n! / (n - k)! k!
'''

def factorial(n):
  if n == 0:
    return 1;
  else:
    return n * factorial(n-1)

def binomial(n, k):
  return factorial(n) / (factorial(n-k) * factorial(k))

def number_of_ways(x, y):
  return binomial(x+y, x)

print number_of_ways(20, 20)
