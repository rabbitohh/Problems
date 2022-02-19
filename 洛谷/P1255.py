cs=int(input())
a=1
b=2
i=3
c=0
if cs==0 :
	print(0)
elif cs==1 :
	print(1)
elif cs==2 :
	print(2)
else : 
	while i<=cs :
		c=a+b
		a=b
		b=c
		i+=1
	print(b)
