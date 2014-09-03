#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

char arr1[2100],arr2[2100];
int arr3[2100][2100];
int main()
{
	int i,j,k,l,t,len1,len2,hold;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%s",arr1);
		scanf("%s",arr2);
		len1=strlen(arr1);	
		len2=strlen(arr2);	
		for(j=0;j<=len1;j++)
		{
			for(k=0;k<=len2;k++)
			{
				if(j==0)
					arr3[j][k]=k;
				else if(k==0)
					arr3[j][k]=j;
				else
				{
					if(arr1[j-1]==arr2[k-1])
						arr3[j][k]=arr3[j-1][k-1];
					else
					{
						hold=min(arr3[j-1][k],min(arr3[j][k-1],arr3[j-1][k-1]));
						arr3[j][k]=hold+1;
					}
				}
			}
		}
/*		for(j=0;j<=len1;j++)
		{
			for(k=0;k<=len2;k++)
			{
				printf("%d ",arr3[j][k]);
			}
			printf("\n");
		}*/
		printf("%d\n",arr3[len1][len2]);
	}
	return 0;
}
