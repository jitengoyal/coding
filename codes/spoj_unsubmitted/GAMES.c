#include<stdio.h>
int main()
{
	int i,n,num,counter;
	double val,check;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		counter=1;
		scanf("%lf",&val);
		while(1)
		{
			num=val*counter;
			check=val*counter;
			if(check-num==0.0)
				break;
			counter++;
		}
		printf("%d\n",counter);
	}
	return 0;
}
