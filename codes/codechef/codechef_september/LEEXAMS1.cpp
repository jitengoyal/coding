#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int **arr;
int **flags;
int check[17]={0};
double result;

void  func(int top,int n,double ans)
{
	if(top==n)
	{
		result+=ans;
		return;
	}
	int i,j;
	for(j=1;j<3;j++)
	{
		if(check[arr[top][j]]==0)
		{
			check[arr[top][j]]=1;
			if(j==1)
			{
				func(top+1,n,ans*((arr[top][0])/100.0));
				check[arr[top][j]]=0;
			}
			else if(j==2)
			{
				func(top+1,n,ans*((100.0-arr[top][0])/100.0));
				check[arr[top][j]]=0;
			}
		}
		if(top==0 && j==2)
			printf("%.9lf\n",result);
	}
}

int main()
{
	int num,n,i,j;
	double ans=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		result=0;
		scanf("%d",&num);
		arr=(int**)malloc(sizeof(int*)*(num));
		flags=(int**)malloc(sizeof(int*)*(num));
		for(j=0;j<num;j++)
		{
			arr[j]=(int*)malloc(sizeof(int)*3);
			flags[j]=(int*)malloc(sizeof(int)*3);
			flags[j][0]=flags[j][1]=flags[j][2]=0;
			scanf("%d%d%d",&arr[j][0],&arr[j][1],&arr[j][2]);
		}
		if(num>=17)
			printf("0.000000000\n");
		else
		{
			result=0.0;
			func(0,num,1);
		}
	}
	return 0;
}
