#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{

	int i,j,k,n,m,x,y,sum1=0,sum2=0,sum3=0,num;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		if(i%3==0)
			sum1+=num;
		if(i%3==1)
			sum2+=num;
		if(i%3==2)
			sum3+=num;
	}
	if(sum1>sum2 && sum1>sum3)
		printf("chest\n");
	else if(sum2>sum1 && sum2>sum3)
		printf("biceps\n");
	if(sum3>sum2 && sum3>sum1)
		printf("back\n");
	
	return 0;
}
