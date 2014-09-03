#include<stdio.h>
#include<string.h>

int func(int *arr1, int *arr2,int j,int k);
int max(int a,int b);

int j=0,k=0,n;
int arr1[100000],arr2[100000];

int main()
{
	int i,num,ans,l;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&n);
		for(l=0;l<n;l++)
		{
			scanf("%d",&arr1[l]);
		}
		for(l=0;l<n;l++)
		{
			scanf("%d",&arr2[l]);
		}
		ans=func(arr1,arr2,0,0);
		printf("%d\n",ans);
	}
	return 0;
}

int func(int *arr1, int *arr2,int j,int k)
{
	if(j==n || k==n)
		return 0;

	if(arr1[j]!=arr2[k])
	{
		return max(func(arr1,arr2,j+1,k),func(arr1,arr2,j,k+1));
	}
	else
		return 1+func(arr1,arr2,j+1,k+1);
}

int max(int a,int b)
{
//	printf("a:b:c %d %d %d\n",a,b,c);
	if(a>=b)
		return a;
	else
		return b;
}
