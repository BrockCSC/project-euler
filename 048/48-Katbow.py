'''
Finds the last 10 digits in the outcome of the series 1^1 + 2^2 + ... + 1000^1000
'''
a = range (1, 1001)
sum = 0

for count in a:
  b = count**count
  sum = sum + b

s = str(sum) 
print (s[-10:])
