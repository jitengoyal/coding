#include<stdio.h>
int main()
{
    long long int t,i,n,b,a;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        if(n%2==0)
        {
            b=(3*n+1);
            n=(n/2);
            a=(n*b);
        }
        else{
            b=((3*n+1)/2);
            a=(n*b);
        }
                printf("%lld\n",a%1000007);
    }
return 0;
}
