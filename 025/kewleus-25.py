fn1=1
fn=1
c=2
s=str(fn);
while len(s)!=1000:
	tmp=fn1+fn
	fn1=fn
	fn=tmp
	c=c+1
	s=str(fn)
print (c)
