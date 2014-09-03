#include<stdio.h>
long long int func(int n);
int main()
{
    long long int n,count=0;
    scanf("%lld",&n);
    long long int hold=func(n);
    count++;
    if(hold==1)
    {
       printf("%d\n",count);
    }
    else if(hold/10==0)
    {
       printf("%d\n",-1);
    }
    else
    {
        while(1)
        {

            hold=func(hold);
            count++;
            if(hold==1)
            {
              printf("%lld\n",count);
              break;
            }
            if(hold/10==0 || hold==n)
            {
              printf("%lld\n",-1);
              break;
            }
        }
    }
    return 0;
}

long long int func(long long int n)
{
    long long int t,sum=0;
    while(n/10!=0)
    {
        long long int t=n%10;
        n=n/10;
        sum=sum+t*t;
    }
    sum=sum+n*n;
    return sum;
}
