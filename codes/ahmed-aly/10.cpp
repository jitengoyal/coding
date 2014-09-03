#include<stdio.h>
#include<iostream>
typedef struct node{
	long long int val;
	int flag;
}node;

using namespace std;
int main()
{
	int n,m,i,j,k,l,id,x,ele;
	scanf("%d%d",&n,&m);
	node arr[n];
	long long int sum[100000]={0};
	for(i=0;i<n;i++)
	{
		cin >> arr[i].val;
		arr[i].flag=-1;
		sum[i]=0;
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&id);
		ele=0;
		if(id==1)
		{
			scanf("%d%d",&x,&ele);
			arr[x-1].val=ele;
			arr[x-1].flag=i;
		}
		else if(id==2)
		{
			scanf("%d",&ele);
			sum[i]=ele;
		}
		else if(id==3)
		{
			scanf("%d",&x);
			long long int value;
			if(i>=1)
			{
				if(arr[x-1].flag!=-1)
					value=sum[i-1]-sum[arr[x-1].flag]+arr[x-1].val;
				else
					value=sum[i-1]+arr[x-1].val;
			}
			if(i==0)
				value=arr[x-1].val;
			cout << value << endl;
		}
		if(i>=1)
			sum[i]+=sum[i-1];
	}
	return 0;
}
