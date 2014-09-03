#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main()
{
	int i,j,k,l,m,n,count=0,words[10][2],start,counter=0,countm=0;
	char arr[10][10],extra,cities[1000];

	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			scanf("%c",&arr[i]);
			if(arr[i]=='-')
				countm++;
		}

		scanf("%c",&extra);
	}
	start=count;
	scanf("%c",&extra);
	while(extra!='\n')
	{
		cities[count++]=extra;
		scanf("%c",&extra);
		if(extra==';')
		{
			words[counter][0]=start;
			words[counter][0]=count-start;
			counter++;
			start=count+1;
		}
	}

	
	while(counter)
	{
		for(i=0;i<
		counter--;
	}

	return 0;
}
