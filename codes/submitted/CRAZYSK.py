test = input()
for i in range(0,test):
	num1,num2= raw_input ().split()
	num1, num2 = [int(num1), int(num2)]
	if((num1)%(num2-1)!=0):
		result = num1+((num1)/(num2-1))
	else:
		result = num1+((num1)/(num2-1))-1
	print result
