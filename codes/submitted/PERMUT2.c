#include<stdio.h>
int main()
{
	int n,i;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			break;
		else
		{
			int arr[n+1];
			for(i=1;i<n+1;i++)
				scanf("%d",&arr[i]);

			int flag=0;
			for(i=1;i<n+1;i++)
			{
				if(arr[arr[i]]!=i)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
				printf("ambiguous\n");
			else
				printf("not ambiguous\n");
		}
	}
	return 0;
}
