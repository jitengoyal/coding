#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int n,k,i,count,j;
	scanf("%lld%lld",&n,&k);
	int **arr=(int**)malloc(sizeof(int*)*n);
	for(i=0;i<n;i++)
		arr[i]=(int*)malloc(sizeof(int)*n);

	int flag=0;
	i=0,j=0;
	count=1;
	arr[i][j]=count;
	while(count<=n*n)
	{
		if(i==0 || j==0 || i==n-1 || j==n-1)
		{
			if(flag==0)
			{
				if(j+1<n)
					j++;
				else if(i+1<n)
					i++;
				flag=1;
			}
			else if(flag==1)
			{
				if(i+1<n)				
					i++;
				else if(j+1<n)
					j++;
				flag=0;
			}
			count++;
			arr[i][j]=count;
		}
		if(flag==1)
		{
			i++;
			j--;
		}
		else if(flag==0)
		{
			i--;
			j++;
		}
		count++;
		arr[i][j]=count;
	}
/*	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}*/

	i=j=0;
	count=1;
	int jj;
	char ch[k+1];
	scanf("%s",ch);
	for(jj=0;jj<k;jj++)
	{
		if(ch[jj]=='U')
			i--;
		else if(ch[jj]=='D')
			i++;
		else if(ch[jj]=='L')
			j--;
		else if(ch[jj]=='R')
			j++;
		count=count+arr[i][j];
	}
	printf("%lld\n",count);
	return 0;
}
