#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
	int r,g,b,ans,t;
	ans=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&r,&g,&b);
		if(max(r,max(g,b))-min(r,min(g,b))>=2)
			printf("0\n");
		else if(r==g && r==b)
			printf("%d\n",6);
		else if(r+g+b==1)
			printf("1\n");
		else
			printf("2\n");
	}
	return 0;
}
