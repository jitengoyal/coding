#include<stdio.h>
#include<math.h>
int func(int a)
{
	return a*a;
}
int main()
{
	int num,i,j,k,hold1,hold2,count=0,res;
	scanf("%d",&num);
	double ans,final;
	for(i=3;i<num-1;i++)
	{
		hold1=i*i;
		for(j=i+1;j<num;j++)
		{
			hold2=j*j;
			ans=sqrt(hold1+hold2);
			res=ans;
			final=ans-res*(1.0);
			if(!final && res<=num)
				count++;
		}
	}
	printf("%d\n",count);
	return 0;
}
