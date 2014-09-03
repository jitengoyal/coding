#include<stdio.h>
#include<stdlib.h>
int decider;

int i,num,n,m,j,k;
char **arr,**visited;
int count,counter;
char string[10]={'A','L','L','I','Z','Z','W','E','L','L'};


int callfunc(int j,int k,int count)
{
//	printf("%d %d %d\n",j,k,count);
	if(count==10)
	{
		printf("YES\n");
		return 1;
	}
	if(j-1>=0 && arr[j-1][k]==string[count] && visited[j-1][k]==0)
	{
//		printf("j: %d\n",count);
		visited[j-1][k]=1;
		decider=callfunc(j-1,k,count+1);
		if(decider==1)
			return 1;
		visited[j-1][k]=0;
	}
	if(j+1<n && arr[j+1][k]==string[count] && visited[j+1][k]==0)
	{
//		printf("i: %d\n",count);
		visited[j+1][k]=1;
		decider=callfunc(j+1,k,count+1);
		if(decider==1)
			return 1;
		visited[j+1][k]=0;
	}
	if(k-1>=0 && arr[j][k-1]==string[count] && visited[j][k-1]==0)
	{
//		printf("t: %d\n",count);
		visited[j][k-1]=1;
		decider=callfunc(j,k-1,count+1);
		if(decider==1)
			return 1;
		visited[j][k-1]=0;
	}
	if(k+1<m && arr[j][k+1]==string[count] && visited[j][k+1]==0)
	{
//		printf("e: %d\n",count);
		visited[j][k+1]=1;
		decider=callfunc(j,k+1,count+1);
		if(decider==1)
			return 1;
		visited[j][k+1]=0;
	}
	if(j+1<n && k+1<m && arr[j+1][k+1]==string[count] && visited[j+1][k+1]==0)
	{
//		printf("n: %d\n",count);
		visited[j+1][k+1]=1;
		decider=callfunc(j+1,k+1,count+1);
		if(decider==1)
			return 1;
		visited[j+1][k+1]=0;
	}
	if(j-1>=0 && k-1>=0 && arr[j-1][k-1]==string[count] && visited[j-1][k-1]==0)
	{
//		printf("1: %d\n",count);
		visited[j-1][k-1]=1;
		decider=callfunc(j-1,k-1,count+1);
		if(decider==1)
			return 1;
		visited[j-1][k-1]=0;
	}
	if(j+1<n && k-1>=0 && arr[j+1][k-1]==string[count] && visited[j+1][k-1]==0)
	{
//		printf("2: %d\n",count);
		visited[j+1][k-1]=1;
		decider=callfunc(j+1,k-1,count+1);
		if(decider==1)
			return 1;
		visited[j+1][k-1]=0;
	}
	if(j-1>=0 && k+1<m && arr[j-1][k+1]==string[count] && visited[j-1][k+1]==0)
	{
//		printf("3: %d\n",count);
		visited[j-1][k+1]=1;
		decider=callfunc(j-1,k+1,count+1);
		if(decider==1)
			return 1;
		visited[j-1][k+1]=0;
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
		visited=(char**)malloc(sizeof(char*)*m);
		for(j=0;j<n;j++)
		{
			arr[j]=(char*)malloc(sizeof(char)*m);
			visited[j]=(char*)malloc(sizeof(char)*m);
			for(k=0;k<m;k++)
				scanf("%c",&arr[j][k]);
			scanf("%c",&a);
		}
		scanf("%c",&a);

		for(j=0;j<n;j++)
		{
			for(k=0;k<m;k++)
			{
				visited[j][k]=0;
			}
		}


		int res=0;
		for(j=0;j<n;j++)
		{
			for(k=0;k<m;k++)
			{
				if(arr[j][k]=='A')
				{
					decider=0;
					visited[j][k]=1;
					res=callfunc(j,k,1);
					visited[j][k]=0;
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
