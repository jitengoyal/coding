#include<stdio.h>
int main()
{
	long long int i,num,n;
	scanf("%lld",&num);
	for(i=0;i<num;i++)
	{
		scanf("%lld",&n);
		long long int hold=n;
		n=n-2;
		if(n%2==0)
			n=n-1;
		long long int term=((n-1)/2)+1;
		term=term%hold;
		term=(term*term);
		printf("%lld\n",term%hold);
	}
	return 0;
}
