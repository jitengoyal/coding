#include<stdio.h>
int main()
{
	int i,j,n,max,k,l;
	scanf("%d",&l);
	for(k=0;k<l;k++)
	{
		scanf("%d",&n);
		int arr[n],q[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
			q[i]=0;
		}
		for(i=0;i<n;i++)
		{
			max=0;
			for(j=0;j<n;j++)
			{
				if(arr[j]<arr[i])
				{
					if(q[j]>max)
						max=q[j];

				}
			}
			q[i]=max+1;

		}
		max=q[0];
		for(i=0;i<n;i++)
		{
			if(q[i]>max)
			{
				max=q[i];
			}
		}


		printf("%d\n",max);
	}
	return 0;
}


