#include<stdio.h>
int main()
{
	float a,c,b,ans;
	int counter;
	scanf("%f",&a);
	while(a!=0)
	{
		counter=0,c=1,b=2,ans=0;
		while(1)
		{
			ans=ans+(c/b);
			b++;
			counter++;
			if(ans>=a)
			{
				printf("%d card(s)\n",counter);
				break;
			}
		}
			scanf("%f",&a);
	}
	return 0;
}

