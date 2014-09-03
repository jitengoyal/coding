#include<stdio.h>
#include<stdlib.h>
int decider;

int i,num,n,m,j,k;
char **arr;
int count,counter;
int x[150],y[150];
char string[10]={'A','L','L','I','Z','Z','W','E','L','L'};

int check(int j,int k,int counter)
{
	int z;
	for(z=0;z<counter;z++)
	{
		if(x[z]==j && y[z]==k)
			return 0;
	}
	return 1;
}


int callfunc(int j,int k,int count,int counter)
{
	if(count==10)
	{
		printf("YES\n");
		return 1;
	}
	if(j-1>=0  && arr[j-1][k]==string[count])
	{
		int result=check(j-1,k,counter);
		if(result==1)
		{
			x[counter]=j-1;
			y[counter]=k;
			decider=callfunc(j-1,k,count+1,counter+1);
			if(decider==1)
				return 1;
		}
	}
	if(j+1<n && arr[j+1][k]==string[count])
	{
		int result=check(j+1,k,counter);
		if(result==1)
		{
			x[counter]=j+1;
			y[counter]=k;
			decider=callfunc(j+1,k,count+1,counter+1);
			if(decider==1)
				return 1;
		}
	}
	if(k-1>=0 && arr[j][k-1]==string[count])
	{
		int result=check(j,k-1,counter);
		if(result==1)
		{
			x[counter]=j;
			y[counter]=k-1;
			decider=callfunc(j,k-1,count+1,counter+1);
			if(decider==1)
				return 1;
		}
	}
	if(k+1<m && arr[j][k+1]==string[count])
	{
		int result=check(j,k+1,counter);
		if(result==1)
		{
			x[counter]=j;
			y[counter]=k+1;
			decider=callfunc(j,k+1,count+1,counter+1);
			if(decider==1)
				return 1;
		}
	}
	if(j+1<n && k+1<m && arr[j+1][k+1]==string[count])
	{
		int result=check(j+1,k+1,counter);
		if(result==1)
		{
			x[counter]=j+1;
			y[counter]=k+1;
			decider=callfunc(j+1,k+1,count+1,counter+1);
			if(decider==1)
				return 1;
		}
	}
	if(j-1>=0 && k-1>=0 && arr[j-1][k-1]==string[count])
	{
		int result=check(j-1,k-1,counter);
		if(result==1)
		{
			x[counter]=j-1;
			y[counter]=k-1;
			decider=callfunc(j-1,k-1,count+1,counter+1);
			if(decider==1)
				return 1;
		}
	}
	if(j+1<n && k-1>=0 && arr[j+1][k-1]==string[count])
	{
		int result=check(j+1,k-1,counter);
		if(result==1)
		{
			x[counter]=j+1;
			y[counter]=k-1;
			decider=callfunc(j+1,k-1,count+1,counter+1);
			if(decider==1)
				return 1;
		}
	}
	if(j-1>=0 && k+1<m && arr[j-1][k+1]==string[count])
	{
		int result=check(j-1,k+1,counter);
		if(result==1)
		{
			x[counter]=j-1;
			y[counter]=k+1;
			decider=callfunc(j-1,k+1,count+1,counter+1);
			if(decider==1)
				return 1;
		}
	}
	else
		return 0;
}

int main()
{
	char a;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		counter=0;
		scanf("%d%d",&n,&m);
		scanf("%c",&a);

		arr=(char**)malloc(sizeof(char*)*n);
		for(j=0;j<n;j++)
		{
			arr[j]=(char*)malloc(sizeof(char)*m);
			for(k=0;k<m;k++)
				scanf("%c",&arr[j][k]);
			scanf("%c",&a);
		}
		scanf("%c",&a);
		int res=0;
		for(j=0;j<n;j++)
		{
			for(k=0;k<m;k++)
			{
				if(arr[j][k]=='A')
				{
					decider=0;
					res=callfunc(j,k,1,0);
					if(res==1)
						break;
				}
			}
			if(res==1)
				break;
		}
		if(res!=1)
			printf("NO\n");
	}
	return 0;
}
