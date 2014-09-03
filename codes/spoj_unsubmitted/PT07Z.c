#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,a,b,j;
	scanf("%d",&n);
	int **arr,*in;
	arr=(int**)malloc(sizeof(int*)*(n+1));
	in=(int*)malloc(sizeof(int)*(n+1));
	for(i=0;i<n+1;i++)
		arr[i]=(int*)malloc(sizeof(int)*(n+1));


	for(i=0;i<n+1;i++)
	{
		for(j=0;j<n+1;j++)
		{
			arr[i][j]=0;
		}
	}

	for(i=0;i<n-1;i++)
	{
		scanf("%d %d",&a,&b);
		arr[a][b]=1;
		arr[b][a]=1;
	}

	int stack[10010],top=0,max=0,check,k;
	for(i=1;i<n+1;i++)
	{
		top=0;
		for(k=0;k<n+1;k++)
			in[k]=0;
		stack[top]=i;
		in[stack[top]]=1;

		while(top>=0)
		{
			check=0;
			for(j=1;j<n+1;j++)
			{
				if(arr[stack[top]][j]==1 && in[j]!=1)
				{
					check=1;
					top++;
					stack[top]=j;
					in[j]=1;
				}
			}
			if(check==0)
				top--;
			if(top>max)
				max=top;
		}
	}
	printf("%d\n",max);
	return 0;
}
