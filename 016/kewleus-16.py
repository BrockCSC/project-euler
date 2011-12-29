'''
Using Katbow's method of obtaining large number digits in python
'''

num = 2**1000
s = str(num)
digsum = 0

for digit in s:
	d = int(digit)
	digsum = digsum + d

print (digsum)
