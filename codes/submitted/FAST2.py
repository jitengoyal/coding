list = []
list1 = []
list.append(2**0)
list1.append(2**0)
for k in range(1,500+1):
	ans=(2*list[k-1])%1298074214633706835075030044377087
	ans1=(ans+list1[k-1])%1298074214633706835075030044377087
	list.append(ans)
	list1.append(ans1)

a=input()
for j in range(0,a):
	b=input()
	print (list1[b])%1298074214633706835075030044377087
