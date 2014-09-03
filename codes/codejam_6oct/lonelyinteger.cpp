#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main()
{
	int i,j,k,l,m,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int val=arr[0];
	for(i=1;i<n;i++)
	{
		val=val^arr[i];
	}
	printf("%d\n",val);

	return 0;
}
