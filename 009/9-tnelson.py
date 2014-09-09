# Project Euler Problem # 9
# Pythgorean Triplet

def ifTriplet(a,b,c):
  if ((a*a)+(b*b)) == (c*c):
    return True
  return False

def ifThousand(a,b,c):
  if (a+b+c) == 1000:
    return True
  return False

n = 0

for a in range(0,1000):
  for b in range(a,1000):
    for c in range(b,1000):
      if a < b and b < c: 
        if ifThousand(a,b,c) and ifTriplet(a,b,c):
          print a
          print b
          print c
          print (a*b*c)
