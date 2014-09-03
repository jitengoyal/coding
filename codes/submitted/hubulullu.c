#include<stdio.h>
int main()
{
	int num,i,ans;
	long long int a;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%lld%d",&a,&ans);
		if(ans==0)
			printf("Airborne wins.\n");
		else
			printf("Pagfloyd wins.\n");

	}
	return 0;
}
