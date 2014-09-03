#include<stdio.h>
#include<string.h>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
	int i,j,x,y,n,num;
	char arr1[100000],arr2[100000];
	while(1)
	{
		scanf("%s",arr1);
		if(strcmp(arr1,"THEEND")==0)
			break;

		scanf("%s",arr2);
		int len1=strlen(arr1);
		int len2=strlen(arr2);
		vector < int > index[27];

		for(i=0;i<len1;i++)
			index[arr1[i]-'A'+1].push_back(i+1);


		char arr[(len2/len1)+1][len1+1];
		int counter=0,count=(len2/len1);
		int k;
		for(i=1;i<27;i++)
		{
			for(j=0;j<index[i].size();j++)
			{
				k=0;
				while(k!=count)
				{
					arr[k][index[i][j]]=arr2[counter];
					counter++;
					k++;
				}
			}
		}
		for(i=0;i<count;i++)
		{
			for(j=1;j<=len1;j++)
			{
				printf("%c",arr[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
