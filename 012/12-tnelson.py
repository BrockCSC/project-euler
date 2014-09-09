import time

num = 1
numCounter = 0

start = time.time()

while True:
  factorCount = 0
  numCounter = numCounter + num
  for i in xrange(1,numCounter/2):
    if numCounter%i == 0:
      factorCount += 1
  if factorCount > 500:
    break
  num += 1

runTime = (time.time() - start)
print "%s found in %s seconds" % (numCounter, runTime)
