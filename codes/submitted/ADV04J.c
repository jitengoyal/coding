#include<stdio.h>
int main()
{
	int num,i,n,count;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		count=0;
		scanf("%d",&n);
		while(n!=2)
		{
			if(n%2!=0)
				n++;
			n=n/2;
			count++;
		}
		printf("%d\n",count+2);
	}
	return 0;
}
