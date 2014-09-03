#include<stdio.h>
int main()
{
	int a,b,t,j;
	int i,counter,count;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&a);
		counter=0,count=0;
		for(j=2;j*j<=a;j++)
		{
			if(a%j==0)
				count++;
		}
		j=j-1 ;
		if(j*j==a)
			counter++;
		if(a!=1)
			counter=counter+a-1-(count*2);
		printf("%d\n",counter);
	}
	return 0;
}
