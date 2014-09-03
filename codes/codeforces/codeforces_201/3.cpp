#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int i,j,k,l,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		cin >> arr[i];

	sort(arr,arr+n);
	int max=arr[n-1];
	if((max-n)%2!=0)
		printf("Alice\n");
	else
		printf("Bob\n");
	return 0;
}
