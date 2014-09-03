#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int a,b,j;
		scanf("%d%d",&a,&b);
		unsigned int product=1;
		int k=1;
		for(j=a;j>(a-b);j--)
		{
			product=(product*j)/k;
			printf("%u ",product);
			k++;
		}
		printf("%u\n",product);
	}
	return 0;
}

