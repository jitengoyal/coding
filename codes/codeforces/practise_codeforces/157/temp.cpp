#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
 using namespace std;
 int main()
{
	int i,j,k,l,n,m,num;
	int arr[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	int x1=((arr[0][2]+arr[2][0])+((arr[0][2]+arr[1][2])-(arr[1][0]+arr[2][0])))/2;
	int x3=(arr[0][2]+arr[2][0]-x1);
	int x2=arr[1][0]+arr[2][0]-x3;

	arr[0][0]=x1;
	arr[1][1]=x2;
	arr[2][2]=x3;
	for(i=0;i<3;i++)
	{
		j=0;
		printf("%d",arr[i][j]);
		for(j=1;j<3;j++)
			printf(" %d",arr[i][j]);
		printf("\n");
	}

	return 0;
}

