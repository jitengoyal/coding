#include<stdio.h>
int main()
{
	int num,i,n;
	float val2=0.618034,val1=0.000000,ans;
	int a,b,c,d;
	int arr[1000001];
	arr[0]=1,arr[1]=2;
	c=1,d=1;
	for(i=2;i<=10;i++)
	{
		a=(c+d)%1000000007;
		ans=(val1+val2);
		b=val1+val2;
		if(ans-b>=0.5)
			arr[i]=(a+b+1)%1000000007;
		else
			arr[i]=(a+b)%1000000007;



		c=(d)%1000000007;
		d=(a+b)%1000000007;
		val1=val2;
		val2=ans-b;
	}
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&n);
		printf("%d\n",arr[n]);

	}
	return 0;
}
