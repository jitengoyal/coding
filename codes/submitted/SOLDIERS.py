a=input()
for k in range(0,a):
	m,n = raw_input().split()
	m,n = [int(m), int(n)]
	if(m%2==0):
		res=(m/2)*n
	if(m%2!=0):
		res=(m/2+1)*n
	if(n%2==0):
		res1=(n/2)*m
	if(n%2!=0):
		res1=(n/2+1)*m
	if(res>res1):
		print res
	else:
	 	print res1
	
		
