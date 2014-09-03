#include<stdio.h>
#include<string.h>
int main()
{
	int a,t;
	long long int number,num,i;
	char string[1005];
	scanf("%lld",&num);
	for(i=0;i<num;i++)
	{
		scanf("%s",string);
		scanf("%lld",&number);
		int last=string[strlen(string)-1]-48;
		int pow=number%4;
		if(pow==0)
			pow=4;
		
		a=last;
		last=1;

		if(number==0)
			printf("%d\n",1);
		else
		{
			for(t=0;t<pow;t++)
				last=last*a;
			printf("%d\n",last%10);
		}
	}
	return 0;
}
