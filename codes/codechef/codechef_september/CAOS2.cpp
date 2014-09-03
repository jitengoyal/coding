#include<stdio.h>
#include<iostream>

int func(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}

int minfunc(int a ,int b,int c,int d)
{
	int hold1=func(a,b);
	int hold2=func(c,d);
	return func(hold1,hold2);
}

int main()
{
	int left[500][500];
	int right[500][500];
	int top[500][500];
	int bottom[500][500];

	int num,row,col,k,i,j,counter,l,m,L,R,T,B,hold,min,n,z,flag=0,count=0;
	int prime[500]={0};

	prime[0]=0;
	prime[1]=0;
	n=2;
	while(n<=300)
	{	
		z=2;
		flag=0;
		while(z*z<=n)
		{
			if(n%z==0)
			{
				flag=1;
				break;
			}
			z++;
		}
		if(flag==0)
			prime[n]=prime[n-1]+1;
		else
			prime[n]=prime[n-1];
		n++;
	}

	char c;
	scanf("%d",&num);
	for(l=0;l<num;l++)
	{
		counter=0;
		scanf("%d%d%c",&row,&col,&c);
		char arr[row][col];
		for(i=0;i<500;i++)
		{
			for(j=0;j<500;j++)
				right[i][j]=left[i][j]=top[i][j]=bottom[i][j]=0;
		}

		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
			{
				scanf("%c",&arr[j][k]);
				if(j!=0)
				{
					if(arr[j-1][k]=='^')
					{
						top[j][k]=top[j-1][k]+1;
					}
					else
						top[j][k]=0;
				}
				if(k!=0)
				{
					if(arr[j][k-1]=='^')
					{
						left[j][k]=left[j][k-1]+1;
					}
					else
						left[j][k]=0;
				}
			}
			scanf("%c",&c);
		}

		for(j=0;j<row;j++)
		{
			for(k=col-2;k>=0;k--)
			{
				if(arr[j][k+1]=='^')
					right[j][k]=right[j][k+1]+1;
				else
					right[j][k]=0;
			}
		}

		for(j=row-2;j>=0;j--)
		{
			for(k=0;k<col;k++)
			{
				if(arr[j+1][k]=='^')
					bottom[j][k]=bottom[j+1][k]+1;
				else
					bottom[j][k]=0;
			}
		}

		if(row > 4 && col > 4) 
		{
			for(i=2;i<=row-2;i++)
			{
				for(j=2;j<=col-2;j++)
				{
					hold=0,min=10000;
					if(arr[i][j]=='#')
						continue;
	//				printf("::%d %d %d %d\n",left[i][j],right[i][j],top[i][j],bottom[i][j]);
	//				printf("::min %d\n",minfunc(left[i][j],right[i][j],top[i][j],bottom[i][j]));
					counter+=prime[minfunc(left[i][j],right[i][j],top[i][j],bottom[i][j])];
				}
			}
		}
		printf("%d\n",counter);
	}
	return 0;
}
