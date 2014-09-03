#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
	int T,n,k,answer,j,val,i;
	char str[20];
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d%d%d",&n,&k,&answer);

		int arr[n]; 
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[j]);
		}
		scanf("%s",str);


		if(k==0)
		{
			printf("%d\n",answer);
			continue;
		}

		val=arr[0];
		for(j=1;j<n;j++)
		{
			if(strcmp(str,"XOR")==0)
				val=val^arr[j];
			if(strcmp(str,"AND")==0)
				val=val & arr[j];
			if(strcmp(str,"OR")==0)
				val=val | arr[j];
		}

		if(strcmp(str,"XOR")==0)
		{
			if(k%2!=0)
				printf("%d\n",val^answer);
			else
				printf("%d\n",answer);

		}
		if(strcmp(str,"AND")==0)
				printf("%d\n",val&answer);
		if(strcmp(str,"OR")==0)
				printf("%d\n",val|answer);
	}
	return 0;
}
