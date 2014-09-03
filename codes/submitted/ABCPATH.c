#include<stdio.h>
#include<stdlib.h>
int decider;

int i,num,n,m,j,k;
char **arr,**visited;
int count,counter,max;


void callfunc(int j,int k,int count,int len)
{
//	printf("%d %d %d\n",j,k,len);
	if(j-1>=0 && arr[j-1][k]-65==count+1 && visited[j-1][k]==0)
	{
//		printf("j: %d\n",count);
		visited[j-1][k]=1;
		callfunc(j-1,k,count+1,len+1);
//		visited[j-1][k]=0;
	}
	if(j+1<n && arr[j+1][k]-65==count+1 && visited[j+1][k]==0)
	{
//		printf("i: %d\n",count);
		visited[j+1][k]=1;
		callfunc(j+1,k,count+1,len+1);
//		visited[j+1][k]=0;
	}
	if(k-1>=0 && arr[j][k-1]-65==count+1 && visited[j][k-1]==0)
	{
//		printf("t: %d\n",count);
		visited[j][k-1]=1;
		callfunc(j,k-1,count+1,len+1);
//		visited[j][k-1]=0;
	}
	if(k+1<m && arr[j][k+1]-65==count+1 && visited[j][k+1]==0)
	{
//		printf("e: %d\n",count);
		visited[j][k+1]=1;
		callfunc(j,k+1,count+1,len+1);
//		visited[j][k+1]=0;
	}
	if(j+1<n && k+1<m && arr[j+1][k+1]-65==count+1 && visited[j+1][k+1]==0)
	{
//		printf("n: %d\n",count);
		visited[j+1][k+1]=1;
		callfunc(j+1,k+1,count+1,len+1);
//		visited[j+1][k+1]=0;
	}
	if(j-1>=0 && k-1>=0 && arr[j-1][k-1]-65==count+1 && visited[j-1][k-1]==0)
	{
//		printf("1: %d\n",count);
		visited[j-1][k-1]=1;
		callfunc(j-1,k-1,count+1,len+1);
//		visited[j-1][k-1]=0;
	}
	if(j+1<n && k-1>=0 && arr[j+1][k-1]-65==count+1 && visited[j+1][k-1]==0)
	{
//		printf("2: %d\n",count);
		visited[j+1][k-1]=1;
		callfunc(j+1,k-1,count+1,len+1);
//		visited[j+1][k-1]=0;
	}
	if(j-1>=0 && k+1<m && arr[j-1][k+1]-65==count+1 && visited[j-1][k+1]==0)
	{
//		printf("3: %d\n",count);
		visited[j-1][k+1]=1;
		callfunc(j-1,k+1,count+1,len+1);
//		visited[j-1][k+1]=0;
	}
	else
	{
		if(len>max)
			max=len;
		return; 
	}
}

int main()
{
	char a;
	num=0;
	while(1)
	{
		num++;
		scanf("%d%d",&n,&m);
		scanf("%c",&a);

		if(n==0 && m==0)
			break;

		arr=(char**)malloc(sizeof(char*)*n);
		visited=(char**)malloc(sizeof(char*)*m);
		for(j=0;j<n;j++)
		{
			arr[j]=(char*)malloc(sizeof(char)*m);
			visited[j]=(char*)malloc(sizeof(char)*m);
			for(k=0;k<m;k++)
			{
				scanf("%c",&arr[j][k]);
				visited[j][k]=0;
			}
			scanf("%c",&a);
		}
		int flag=0;
		max=1;
		for(j=0;j<n;j++)
		{
			for(k=0;k<m;k++)
			{
				if(arr[j][k]=='A')
				{
					flag=1;
					visited[j][k]=1;
					callfunc(j,k,'A'-65,1);
				}
			}
		}
		if(flag==0)
			max=0;
		printf("Case %d: %d\n",num,max);
	}
	return 0;
}
