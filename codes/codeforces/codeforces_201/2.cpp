#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	int i,j,k,l,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	sort(arr,arr+n);
	swap(arr[0],arr[n-1]);
	for(i=0;i<n-1;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("%d\n",arr[i]);

	return 0;
}
