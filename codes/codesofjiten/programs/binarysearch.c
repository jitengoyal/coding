//program to do binary search and find if element present in d array
#include<stdio.h>
int bin(int a[],int key,int low,int high);
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int key,low,high;
	low=0;
	high=n-1;
	scanf("%d",&key);
	int found;
	found=bin(a,key,low,high);
	if(found==-1)
	{
		printf("not found\n");
	}
	else
	{
		printf("found and it is %d\n",found);
	}
	return 0;
}
int bin(int a[],int key,int low,int high)
{
	int middle;
	middle=(low+high)/2;
	if(low<=high)
	{
	if(key==a[middle])
	{
		return middle;
	}
	else if(key<a[middle])
	{
		high=middle-1;
		return bin(a,key,low,high);
	}
	else if(key>a[middle])
	{
		low=middle+1;
		return bin(a,key,low,high);
	}
	}
	else
	{
		return -1;
	}
}

