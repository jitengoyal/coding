#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int val=400000,i,j,count=0,index,final=0,rem,digits,v,a[10];
	scanf("%d",&v);
	for(i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
		if(val>=a[i])
		{
			val=a[i];
			index=i;
		}
	}
	digits=v/val;
	if(digits==0)
	{
		printf("-1\n");
		return 0;
	}
	rem=v%val;
	for(i=9;i>index;i--)
	{
		count=rem/(a[i]-a[index]);
		cout << "akhil" << " " << count << " "<< i <<endl;
		for(j=0;j<count;j++)
			printf("%d",i+1);
		final+=count;
		rem=rem%(a[i]-a[index]);
	}
	for(i=0;i<digits-final;i++)
		printf("%d",index+1);
	printf("\n");
	return 0;
}
