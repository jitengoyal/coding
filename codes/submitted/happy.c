#include<stdio.h>
int func(int );
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int hold=func(n);
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
              printf("%d\n",count);
              break;
            }
            if(hold/10==0 || hold==n)
            {
              printf("%d\n",-1);
              break;
            }
        }
    }
    return 0;
}

int func(int n)
{
    int t,sum=0;
    while(n/10!=0)
    {
        int t=n%10;
        n=n/10;
        sum=sum+t*t;
    }
    sum=sum+n*n;
    return sum;
}
