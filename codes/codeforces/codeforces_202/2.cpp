#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int i,j,k,l,n,m,min_index,min;
	int arr[11];
	scanf("%d",&v);
	for(i=1;i<11;i++)
	{
		scanf("%d",&arr[i]);
	}

	min=arr[1],min_index=1;
	for(i=2;i<10;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
			min_index=i;
		}
	}

	
	count=v/min;
	
	

	return 0;
}
