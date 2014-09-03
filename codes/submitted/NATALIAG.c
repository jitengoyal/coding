#include<stdio.h>
#include<stdlib.h>
char **arr;
int counter;
char **visited;
int min,n,m;

void func(int j,int k,int counter)
{
	if(arr[j][k]=='#')
	{
		if(counter<min)
			min=counter;
		return;
	}
	if((j+1<n && visited[j+1][k]==0) && (arr[j+1][k]=='O' || arr[j+1][k]=='#'))
	{
		visited[j+1][k]=1;
		func(j+1,k,counter+1);
		visited[j+1][k]=0;
	}
	if((j-1>=0 && visited[j-1][k]==0) && (arr[j-1][k]=='O' || arr[j-1][k]=='#'))
	{
		visited[j-1][k]=1;
		func(j-1,k,counter+1);
		visited[j-1][k]=0;
	}
	if((k-1>=0 && visited[j][k-1]==0) && (arr[j][k-1]=='O' || arr[j][k-1]=='#'))
	{
		visited[j][k-1]=1;
		func(j,k-1,counter+1);
		visited[j][k-1]=0;
	}
	if((k+1<m && visited[j][k+1]==0) && (arr[j][k+1]=='O' || arr[j][k+1]=='#'))
	{
		visited[j][k+1]=1;
		func(j,k+1,counter+1);
		visited[j][k+1]=0;
	}
	else
		return;
}

int main()
{
	int num,i,j,k,count;
	char t,x[2],y[2];
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		count=0;
		scanf("%d%d",&n,&m);
		scanf("%c",&t);
		arr=(char**)malloc(sizeof(char*)*n);
		visited=(char**)malloc(sizeof(char*)*n);
		for(j=0;j<n;j++)
		{
			arr[j]=(char*)malloc(sizeof(char)*m);
			visited[j]=(char*)malloc(sizeof(char)*m);
			for(k=0;k<m;k++)
			{
				scanf("%c",&arr[j][k]);
				if(arr[j][k]=='$')
				{
					x[0]=j;
					y[0]=k;
				}
				if(arr[j][k]=='#')
				{
					x[1]=j;
					y[1]=k;
				}

			}
			scanf("%c",&t);
		}
		for(j=0;j<n;j++)
		{
			for(k=0;k<m;k++)
			{
				visited[j][k]=0;
			}
		}
		visited[x[0]][y[0]]=1;
		min=1000000000;
		func(x[0],y[0],0);
		if(min==1000000000)
			min=-1;
		printf("%d\n",min);
	}
	return 0;
}
