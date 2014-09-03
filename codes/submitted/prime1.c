#include<stdio.h>
int main()
{
	long long int  t,i,arr[31625],count=0,k,j;
	long long int a,b,l;
	arr[0]=2;
	j=3;
	while(j*j<=1000000000)
	{
		long long int flag=0;
		k=2;
		while(k*k<=j)
		{
			if(j%k==0)
			{
				flag=1;
				break;
			}
			k++;
		}
		if(flag==0)
			arr[++count]=j;
		j++;
	}
//		for(l=0;l<count;l++)
//			printf("%lld ",arr[l]);
	scanf("%lld",&t);
	long long int flag2,n;
	for(i=0;i<t;i++)
	{
		scanf("%lld%lld",&a,&b);
		for(l=a;l<=b;l++)
		{
			n=0,flag2=0;
			while(arr[n]*arr[n]<=l && n<count)
			{
//				printf("%d\n",arr[n]);
				if(l%arr[n]==0)
				{
					flag2=1;
					break;
				}
				n++;
			}
			if(flag2==0 && l!=1)
				printf("%lld\n",l);
		}
		if(i!=t-1)
			printf("\n");
	}
	return 0;
}
