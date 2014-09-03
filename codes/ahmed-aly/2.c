#include<stdio.h>
int main()
{
	int x[8],y[8],i,j,temp,temp1,x1[8],y1[8],count=0,k;
	for(i=0;i<8;i++)
	{
		scanf("%d%d",&x[i],&y[i]);
		x1[i]=x[i];
		y1[i]=y[i];
	}
	for(i=0;i<8;i++)
	{
		for(j=i;j<8;j++)
		{
			if(x[i]>x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
			if(y[i]>y[j])
			{
				temp=y[i];
				y[i]=y[j];
				y[j]=temp;
			}
		}
	}
	int flag=0;
	if((x[0]<x[3] && x[3]< x[5]) &&(y[0]<y[3] && y[3]<y[5]) && x[0]==x[2] && x[3]==x[4] && x[5]==x[7] && y[0]==y[2] && y[3]==y[4] && y[5]==y[7])
	{
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				flag=0;
				for(k=0;k<8;k++)
				{
					if(x[i]==x1[k] && y[j]==y1[k])
					{
						x1[k]=-1;
						y1[k]=-1;
						if(flag==0)
						{
							count++;
							flag=1;
						}
					}
				}
			}
		}
	}
	if(count==8)
		printf("respectable\n");
	else
		printf("ugly\n");
	return 0;
}
