#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,c=0,i,k,j=3,f,n;
	a=(int*)malloc(sizeof(int)*100000);
	a[0]=2;
	while(j<3163)
	{
		f=0,k=2;
		while(k*k<=j)
		{
			if(j%k==0)
			{
				f=1;break;
			}
			k++;
		}
		if(f==0)
		{
			a[++c]=j;
			printf("%d\n",a[c]);
		}
		j++;
	}
	printf("%d\n",c);
	printf("%d\n",a[c]);
	return 0;
}
