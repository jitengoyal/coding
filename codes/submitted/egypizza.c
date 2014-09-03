#include<stdio.h>
int main()
{
	int count1=0,count2=0,count3=0,t,i,a,b,ans=0;
	char e;
	scanf("%d%c",&t,&e);
	for(i=0;i<t;i++)
	{
		scanf("%d%c%d%c",&a,&e,&b,&e);
		if(a==1 && b==2)
			count1++;
		if(a==1 && b==4)
			count2++;
		if(a==3 && b==4)
			count3++;
	}
	if(count2<=count3 )
	{
		if((count1%2)==0)
			ans=1+count3+(count1)/2;
		else
			ans=1+count3+(count1)/2+1;
	}
	else if(count2>count3)
	{
		if((count1%2)==0)
		{
			if((count2-count3)%4==0)
				ans=1+count3+(count1)/2+(count2-count3)/4;
			else
				ans=1+count3+(count1)/2+(count2-count3)/4+1;
		}
		else
		{
			count2=count2-2;
			if((count2-count3)%4==0)
				ans=1+count3+(count1)/2+(count2-count3)/4;
			else
				ans=1+count3+(count1)/2+(count2-count3)/4+1;
		}
	}
	printf("%d\n",ans);
	return 0;
}

