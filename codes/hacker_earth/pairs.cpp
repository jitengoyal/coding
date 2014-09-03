#include<stdio.h>
#include<iostream>

int neg[1000010],pos[1000010];
int arr[1000010];
using namespace std;

int main()
{
	long long int t,i,j,k,num,n,max;
	scanf("%lld",&num);
	for(i=0;i<num;i++)
	{
		scanf("%lld",&n);
		for(int k=0;k<1000010;k++)
		{
			pos[k]=0;
			neg[k]=0;
		}
		for(j=0;j<n;j++)
			scanf("%d",&arr[j]);

		max=0;
		for(j=0;j<n;j++)
		{
			if(arr[j]>=0)
			{
				max=max+pos[arr[j]]+1;
				pos[arr[j]]++;
			}
			else
			{
				arr[j]=arr[j]*(-1);
				max=max+neg[arr[j]]+1;
				neg[arr[j]]++;
			}
		}
		printf("%lld\n",max);
	}
	return 0;
}
