#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<vector>
#include<set>

using namespace std;
int arr[100010];

int main()
{
	int i,j,k,l,m,n;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	sort(arr,arr+n);
	int counter=0;

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[j]-arr[i]==k)
				counter++;
			if(arr[j]-arr[i]>k)
				break;
		}
	}
	printf("%d\n",counter);
	return 0;
}
