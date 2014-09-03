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
	int val=arr[0];
	if(2*val<= v && v< arr1[0])
		printf("%d\n",v);
	else if(2*val>v && 2*val<arr1[0])
		printf("%d\n",2*val);
	else printf("-1\n");

	return 0;
}
