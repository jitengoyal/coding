#include<stdio.h>
int binarysearch(int a[],int low,int high,int key);
int main()
{
	int i,n,j,key,result;
	scanf("%d",&n);
	int a[n];
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	result=binarysearch(a,0,n-1,key);
	if(result==-1)
		printf("the key is not found\n");
	else
		printf("%d\n",result);
	return 0;
}
int binarysearch(int a[],int low,int high,int key)
{
	int middle;
	middle=(low+high)/2;
	if(low<=high)
	{
		if(a[middle]==key)
			return a[middle];
		else if(a[middle]<key)
		{
			low=middle+1;
			return  binarysearch(a,low,high,key);
			
		}
		else
		{
			high=middle-1;
			return binarysearch(a,low,high,key);
		}
	}
	else
	{
		return -1;
	}
}









