#include<stdio.h>
int main()
{
	long long int num,i,n,m,j,k;
	long long int total,max;
	scanf("%lld",&num);
	for(i=0;i<num;i++)
	{
		total=0;
		scanf("%lld%lld",&m,&n);
		long long int arr[m*3][n];
		for(j=0;j<m*3;j++)
		{
			for(k=0;k<n;k++)
				scanf("%lld",&arr[j][k]);
		}
		for(j=0;j<m;j++)
		{
			max=0;
			for(k=0;k<n;k++)
			{
				if(arr[j][k]>arr[j+m][k])
				{
					if(arr[j+m][k]*arr[j+(2*m)][k]>max)
						max=arr[j+m][k]*arr[j+(2*m)][k];
				}
				else
				{
					if(arr[j][k]*arr[j+(2*m)][k]>max)
						max=arr[j][k]*arr[j+(2*m)][k];
				}
			}
			total+=max;
		}
		printf("%lld\n",total);
	}
	return 0;
}
