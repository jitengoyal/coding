#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int i,j,k,l,m,n;
	int count1=0,count2=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		if(m==0)
			count2++;
		else if(m==5)
			count1++;
	}
	if(count2==0)
		printf("%d\n",-1);

	else if(count2!=0)
	{
		count1=(count1)/9;
		count1*=9;
		if(count1==0)
			printf("%d\n",0);
		else
		{

			for(j=0;j<count1;j++)
				printf("%d",5);
			for(j=0;j<count2;j++)
				printf("0");
			printf("\n");
		}
	}
	return 0;
}
