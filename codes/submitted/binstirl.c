#include<stdio.h>
int main()
{
	int num,i,n,m,res;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d%d",&n,&m);
		printf("%d\n",!((n-m)&(m-1)>>1));
	}
	return 0;
}
