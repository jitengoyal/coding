#include<stdio.h>
#include<string>
#include<string.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

char ** arr;
int counter_j;
char aa[2];
void func(string tt,int len1,int l,int m)
{

//	cout << tt << "\n";

	int i,j,hold,k=0;
	string temp1="",temp2="";

	hold=tt.size();
	if(hold==l)
	{
		counter_j++;
		return;
	}

	for(i=hold-len1+1;i<hold;i++)
	{
	//	char aa[2];
		aa[0]=tt[i];
		aa[1]='\0';
		temp1=temp1+aa;
	}
	

//	cout << "temp1= " << temp1 << "\n";

	for(i=0;i<m;i++)
	{
		temp2="";
		for(j=0;j<len1-1;j++)	
		{
	//		char aa[2];
			aa[0]=arr[i][j];
			aa[1]='\0';
			temp2+=aa;
		}

//		cout << "temp2= " << temp2 << "\n";
		if(temp1==temp2)
		{
	//		char aa[2];
			aa[0]=temp2[temp2.size()-1];
			aa[1]='\0';
			func(tt+aa,len1,l,m);
		}
	}
}

int main()
{
	int n,l,m,i,j,num,len1;
	while(1)
	{
		counter_j=0;
		scanf("%d%d%d",&n,&l,&m);
		if(n==0 && l==0 && m==0)
			break;
		arr=(char**)malloc(sizeof(char*)*m);
		for(i=0;i<m;i++)
		{
			arr[i]=(char*)malloc(sizeof(char)*20);
			scanf("%s",arr[i]);
		}
		len1=strlen(arr[0]);
		if(len1==1)
		{
			int ans=1;
			for(i=0;i<l;i++)
			{
				ans*=m;
			}
			cout << ans << "\n";
		}
		else
		{
			for(i=0;i<m;i++)
				func(arr[i],len1,l,m);
			printf("%d\n",counter_j);
		}
		free(arr);
	}

	return 0;
}

