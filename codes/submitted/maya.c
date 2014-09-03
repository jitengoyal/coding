#include<stdio.h>
int main()
{
	long long int num,j,count,count1,k;
	long long int ans,mul;
	char a;
	while(1)
	{
		j=0,ans=0,k=0;
		scanf("%lld",&num);
		scanf("%c",&a);
		if(num!=0)
		{
			for(j=0;j<num;j++)
			{
				count=0,count1=0,mul=1;
				scanf("%c",&a);
				while(a!='\n')
				{
					if(a=='.')
					{
						count++;
					}
					if(a=='-')
					{
						count1++;
					}
					if(a=='S')
					{
						count=0;
						count1=0;
					}
					scanf("%c",&a);
				}
				for(k=0;k<num-j;k++)
				{
					if(k==2)
						mul=360;
					else if(k!=0)
						mul=mul*20;
				}
	//			if(num>=3)
	//				mul=mul*360;
	//			printf("mul%lld\n",mul);
				ans=ans+(((count1*5)+(count*1))*mul);
			}
			printf("%lld\n",ans);
		}
		else
			break;
		scanf("%c",&a);
	}
	return 0;
}
