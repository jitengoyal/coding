#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
 using namespace std;
 int main()
{
	int i,j,k,l,n,m,num;
	cin >> n >> k;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	if(k>n)
		printf("%d\n",-1);
	else
	{
		printf("%d %d\n",arr[n-k],arr[n-k]);
	}

	return 0;
}

