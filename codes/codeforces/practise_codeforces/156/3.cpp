#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int arr[5000];

int main()
{

	int i,j,k,n,m,x,y,sum1=0,sum2=0,sum3=0,num;
	scanf("%d",&n);	
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	if(n==1 || n==2 )
		printf("%d\n",n);
	else
	{
		int max=2;
		int len=2;
		for(i=2;i<n;i++)
		{
			if(arr[i]==arr[i-2])
				len++;
			else
				len=2;

			if(len>max)
				max=len;
		}
		cout << max << endl;
	}
	return 0;
}
