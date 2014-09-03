#include<stdio.h>
int main()
{
	int i,num,n,res;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&n);
		if(n%2!=0)
			n++;
		printf("%d\n",n/2);
	}
	return 0;
}
