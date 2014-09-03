#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<math.h>
 using namespace std;
 int main()
{
	int i,j,k,l,n,m,num;
	int arr[6][6];
	int row,col;
	for(i=1;i<6;i++)
	{
		for(j=1;j<6;j++)
		{
			scanf("%d",&arr[i][j]);
			if(arr[i][j]!=0)
			{
				row=i;
				col=j;
			}
		}
	}
	int res=fabs(row-3)+fabs(col-3);
	cout << res<< "\n";


	return 0;
}

