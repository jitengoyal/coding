#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
	int a,b,x,y,i,j,l,count=0,flag,flag1,weight1=0,weight2=0,k,m;
	char arr[15];
	int w[11];
	scanf("%s",arr);
	l=strlen(arr);
	scanf("%d",&m);
	for(i=0;i<l;i++)
	{
		if(arr[i]-'1'==0)
			w[i+1]=1;
	}
	int flag3,jiten,jiten1;
	jiten=0;
	for(k=1;k<11;k++)
	{
		vector < int > result;
		jiten1=1;
		weight1=0;
		weight2=0;
		int last=-1;
		if(w[k]==1)
		{
			result.push_back(k);
			weight1=k;
			last=k;
		}
		else
			continue;
		for(i=1;i<m;i++)
		{
			flag3=0;
			for(j=1;j<11;j++)
			{
				if(i%2==0)
				{
					if(weight1+j>weight2 && last!=j && w[j]==1)
					{
						flag3=1;
						last=j;
						weight1+=j;
						result.push_back(j);
						break;
					}
				}
				else
				{
					if(weight2+j>weight1 && last!=j && w[j]==1)
					{
						flag3=1;
						last=j;
						weight2+=j;
						result.push_back(j);
						break;
					}
				}
			}
			if(flag3==0)
			{
				jiten1=0;
				break;
			}
		}
		if(jiten1!=0)
		{
			printf("YES\n");
			cout << result[0];
			for(k=1;k<m;k++)
				cout << " " << result[k];
			printf("\n");
			jiten=1;
			break;
		}
	}
	if(jiten!=1)
		printf("NO\n");
	return 0;
}
