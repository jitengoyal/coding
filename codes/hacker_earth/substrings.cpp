#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
	long long int num,i,j,k,l,total,c1,c2,c3,prev,pres,max,t;
	scanf("%lld",&t);
	char arr[1000010];
	for(i=0;i<t;i++)
	{
		int count[3]={0};
		c1=c2=c3=0;
		scanf("%s",arr);
		long long int len=strlen(arr);
		total=(len*(len+1))/2;
		prev=0,pres=0,max=0;
		for(j=0;j<len;j++)
		{
			while(count[0]>0 && count[1]>0 && count[2]>0)
			{
				max=max+(len-j+1);
				count[arr[prev]-'a']--;
				prev++;
			}
			count[arr[j]-'a']++;
		}
		while(count[0]>0 && count[1]>0 && count[2]>0)
		{
			max++;
			count[arr[prev]-'a']--;
			prev++;
		}
		printf("%lld\n",total-max);
	}
	return 0;
}
