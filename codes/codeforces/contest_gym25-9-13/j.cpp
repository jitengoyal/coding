#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,count;
	scanf("%d",&n);
	char arr1[n][n],arr2[n][n],arr3[n][n];
	for(i=0;i<n;i++)
		scanf("%s",arr1[i]);
	for(i=0;i<n;i++)
		scanf("%s",arr2[i]);
	int flag=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr2[i][j]=='x' && arr1[i][j]=='*')
			{
				flag=1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			count=0;
			if(arr2[i][j]=='x' && arr1[i][j]!='*')
			{
				if(arr1[i-1][j-1]=='*' && i-1>=0 && j-1>=0)
					count++;
				if(arr1[i-1][j]=='*' && i-1>=0)
					count++;
				if(arr1[i-1][j+1]=='*' && i-1>=0 && j+1<n)
					count++;
				if(arr1[i][j-1]=='*' && j-1>=0)
					count++;
				if(arr1[i][j+1]=='*' && j+1<n)
					count++;
				if(arr1[i+1][j-1]=='*' && i+1<n && j-1>=0)
					count++;
				if(arr1[i+1][j]=='*' && i+1<n)
					count++;
				if(arr1[i+1][j+1]=='*' && i+1<n && j+1<n)
					count++;
				arr3[i][j]=count+'0';
			}
			else if(flag==1 && arr1[i][j]=='*')
			{
				arr3[i][j]='*';
			}
			else
				arr3[i][j]='.';
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c",arr3[i][j]);
		}
		printf("\n");
	}
	return 0;
}
