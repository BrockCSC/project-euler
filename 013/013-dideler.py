#/usr/bin/env python

'''
Calculate the first ten digits of the sum of a hundred 50-digit integers.
'''

f = open('input', 'r')
sum = 0

for line in f:
  sum += int(line)

print str(sum)[:10]
