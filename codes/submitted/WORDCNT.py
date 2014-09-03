a=input()
for i in range(0,a):
	string=raw_input().split()
	length_string=0;maximum=1;count_words=1;
	for j in (string):
		if(length_string==len(j)):
			count_words=count_words+1
		else:
		 length_string=len(j)
		 count_words=1
#		print 'cont_wrds:'+str(count_words)
		if(count_words>maximum):
			maximum=count_words
#	print 'max'+str(maximum)
	print maximum



