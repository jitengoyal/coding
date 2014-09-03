#include<stdio.h>

int arr[100010]={0},x[100001],y[100001],z[100001];

int main()
{
	int i,j,k,l,m,n,t,u;
	scanf("%d%d",&n,&m);
	for(i=0;i<m;i++)
	scanf("%d%d%d",&x[i],&y[i],&z[i]);
	arr[x[0]] = 1;
	arr[y[0]] = 2;
	arr[z[0]] = 3;
	for(i=1;i<m;i++)
	{
		if(arr[x[i]] + arr[y[i]] + arr[z[i]] == 0)
		{
			arr[x[i]] = 1;
			arr[y[i]] = 2;
			arr[z[i]] = 3;
		}
		else if(arr[x[i]] != 0)
		{
			if(arr[x[i]] == 1)
			{
				arr[y[i]] = 2;
				arr[z[i]] = 3;
			}
			else if(arr[x[i]] == 2)
			{
				arr[y[i]] = 1;
				arr[z[i]] = 3;
			}
			else if(arr[x[i]] == 3)
			{
				arr[y[i]] = 1;
				arr[z[i]] = 2;
			}
		}
		else if(arr[y[i]] != 0)
		{
			if(arr[y[i]] == 1)
			{
				arr[x[i]] = 2;
				arr[z[i]] = 3;
			}
			else if(arr[y[i]] == 2)
			{
				arr[x[i]] = 1;
				arr[z[i]] = 3;
			}
			else if(arr[y[i]] == 3)
			{
				arr[x[i]] = 1;
				arr[z[i]] = 2;
			}
				
		}
		else if(arr[z[i]] != 0)
		{
			if(arr[z[i]] == 1)
			{
				arr[y[i]] = 2;
				arr[x[i]] = 3;
			}
			else if(arr[z[i]] == 2)
			{
				arr[y[i]] = 1;
				arr[x[i]] = 3;
			}
			else if(arr[z[i]] == 3)
			{
				arr[y[i]] = 1;
				arr[x[i]] = 2;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		if(i == n)
			printf("%d\n",arr[i]);
		else
			printf("%d ",arr[i]);
	}
	return 0;
}
