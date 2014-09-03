#include<stdio.h>
int main()
{
	long long int g,t,a,d,no_teams,req_teams,cal,total_teams,counter,result;
	while(1)
	{
		result=0;
		counter=0;
		cal=2;
		scanf("%lld%lld%lld%lld",&g,&t,&a,&d);
		counter=counter+cal/2;
		if(g==-1)
			break;
		no_teams=g*a+d;
		while(cal<no_teams)
		{
			cal=cal*2;
			counter=counter+cal/2;
		}
		if(no_teams!=1)
		{
			result=((t*(t-1))/2)*g+counter;
			req_teams=cal-no_teams;
		}
		else
		{
			result=((t*(t-1))/2)*g;
			req_teams=0;
		}
		printf("%lld*%lld/%lld+%lld=%lld+%lld\n",g,a,t,d,result,req_teams);
	}
	return 0;
}

