#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int num,n,i,j,top,check;
	scanf("%d",&num);
	int stack[100];
	double result,ans;

	for(i=0;i<num;i++)
	{
		result=0;
		ans=1;
		top=0;
		stack[top]=-1;
		scanf("%d",&n);
		int arr[n][3];
		int flags[n][3];
		int flag[17]={0};
		for(j=0;j<n;j++)
		{
			scanf("%d%d%d",&arr[j][0],&arr[j][1],&arr[j][2]);
			flags[j][0]=flags[j][1]=flags[j][2]=0;
		}
		if(n>=17)
			printf("0.000000000\n");
		else
		{
			while(top!=-1)
			{
				check=0;
				for(j=1;j<3;j++)
				{
					if(flags[top][j]==0 && flag[arr[top][j]]==0)
					{
						check=1;
						stack[top+1]=arr[top][j];
						flags[top][j]=1;
						flag[arr[top][j]]=1;
						if(j==1)
							ans*=(arr[top][0]/100.0);
						else if(j==2)
							ans*=((100-arr[top][0])/100.0);
						top++;
						break;
					}
				}
				if(check==1)
				{
					if(top==n)			
					{
						result=result+ans;
						flag[stack[top]]=0;
						top--;
						if(j==1)
							ans=(ans/((arr[top][0])/100.0));
						else if(j==2)
							ans=(ans/((100.0-arr[top][0])/100.0));
					}
				}
				else
				{
					flags[top][1]=0;
					flags[top][2]=0;
					flag[stack[top]]=0;
					if(flags[top-1][2]==1)
						ans=(ans/((100-arr[top-1][0])/100.0));
					else if(flags[top-1][1]==1)
						ans=(ans/((arr[top-1][0])/100.0));
					top--;
				}
			}
			printf("%.9lf\n",result);
		}
	}
	return 0;
}
