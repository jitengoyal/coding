#include<stdio.h>
#include<math.h>
struct node
{
	int ri,ae,age;
	char name[100],sd[3];
};
int main()
{
	int n,z;
	scanf("%d",&n);
		int i,j,diff,t,p,max;
		struct node arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%d%*c%*c%*c%[^,]%*c%d%*c%*c%*c%s%*c%*c%*c%d",&arr[i].ri,&arr[i].name,&arr[i].age,arr[i].sd,&arr[i].ae);
		}
		max=fabs(arr[1].ae-arr[2].ae);
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				diff=abs(arr[i].ae-arr[j].ae);
				if(diff>max)
				{
					t=i;
					p=j;
					max=diff;
				}
			}
		}
		if(arr[p].ri<arr[t].ri)
		{
			printf("%d , %s, %d , %s , %d\n",arr[p].ri,arr[p].name,arr[p].age,arr[p].sd,arr[p].ae);
			printf("%d , %s, %d , %s , %d\n",arr[t].ri,arr[t].name,arr[t].age,arr[t].sd,arr[t].ae);
		}
		else
		{
			printf("%d , %s, %d , %s , %d\n",arr[t].ri,arr[t].name,arr[t].age,arr[t].sd,arr[t].ae);
			printf("%d , %s, %d , %s , %d\n",arr[p].ri,arr[p].name,arr[p].age,arr[p].sd,arr[p].ae);
		}
		return 0;
	
}
