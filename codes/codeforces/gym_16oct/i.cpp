#include<stdio.h>
#include<iostream>
#include<string.h>
#include <cstring>

using namespace std;

int main()
{
	int i,j,k,l,m,n,count;
	string str;
	scanf("%d",&n);
	cin >> str;
	int ans=0,invert = -1;
	i = n-1;
	while(1)
	{
		if(invert == -1)
		{
			count = 0;
			while(str[i] == 'B' && i >= 0)
			{
				i--;
				count++;
			}
			if(count == 1)
				ans++;
			else if(count > 1)
			{
				ans++;
				invert *= -1;
			}
			if(i == -1)
				break;
			if(count == 0)
				i--;
		}
		else
		{
			count  = 0;
			while(str[i] == 'A' && i >= 0)
			{
				i--;
				count++;
			}
			if(count == 1)
				ans++;
			else if(count > 1)
			{
				ans++;
				invert *= -1;
			}
			if(i == -1)
				break;
			if(count == 0)
				i--;
		}
	}
	printf("%d\n",ans);

	return 0;
}
