#include<stdio.h>
int main()
{
	long long int n,test,i,sum1,num_1,result;
	scanf("%lld",&test);
	for(i=0;i<test;i++)
	{
		result=0;
		scanf("%lld",&n);
		num_1=(((((n-1)/3)*3)-3)/3)+1;
		sum1=((num_1)*(((2*3)+((num_1-1)*3))))/2;
		result=result+sum1;
		num_1=(((((n-1)/5)*5)-5)/5)+1;
		sum1=((num_1)*(((2*5)+((num_1-1)*5))))/2;
		result=result+sum1;
		num_1=(((((n-1)/15)*15)-15)/15)+1;
		sum1=((num_1)*(((2*15)+((num_1-1)*15))))/2;
		result=result-sum1;
		printf("%lld\n",result);
	}
	return 0;
}
