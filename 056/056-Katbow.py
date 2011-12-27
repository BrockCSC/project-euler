a = range(1, 100)
b = range(1, 100)
max = -1

for count in a:
  for exponent in b:
    c = count**exponent

    # calculate digital sum of c
    digsum = 0
    s = str(c)  # casts c to a string
    for digit in s:
      d = int(digit)
      digsum = digsum + d

    # find max digital sum
    if digsum > max:
      max = digsum

print (max)
