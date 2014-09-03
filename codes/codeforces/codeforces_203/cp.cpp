#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int i,j,k,l,n,m;
	scanf("%d%d",&n,&m);
	int arr[n],arr1[m];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<m;i++)
		scanf("%d",&arr1[i]);
	sort(arr,arr+n);
	sort(arr1,arr1+m);

	int flag=0;
	int v=arr[n-1];
	if(arr1[0]< arr[n-1])
		printf("-1\n");

	for(i=0;i<arr1[0];i++)
	{
		if(2*arr[0] <=i && i < arr1[0] && i>= arr[n-1])
		{
			printf("%d\n",i);
			exit(0);
		}
	}
	printf("%d\n",-1);
	return 0;
}
