'''
check all numbers less than 9^5 times the length of checked number
'''
n=2
s=str(n)
total=0
while n < (9**5)*len(s):
	sum=0
	for digit in s:
		sum=sum+int(digit)**5
	if sum == n:
		total=total+n
		print(n)
	n=n+1
	s=str(n)
print(total)
