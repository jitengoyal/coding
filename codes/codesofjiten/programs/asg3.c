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
		int i,j,diff,t,p,max,x1,x2;
		float ans;
		struct node arr[n];
		scanf("%d%d",&x1,&x2);
		for(i=0;i<n;i++)
		{
			scanf("%d%*c%*c%*c%[^,]%*c%d%*c%*c%*c%s%*c%*c%*c%d",&arr[i].ri,&arr[i].name,&arr[i].age,arr[i].sd,&arr[i].ae);
		}
		int counter=0;
		double sum=0;
		for(i=0;i<n;i++)
		{
			if(arr[i].age>=x1 && arr[i].age<=x2)
			{
				sum=sum+arr[i].ae;
				counter++;
			}
		}
		ans=(sum)/counter;
		printf("%.4f\n",ans);
		return 0;
}
