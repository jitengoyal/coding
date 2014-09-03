#include<stdio.h>
int main()
{
    long long int a,b,c,d,i,x,y;
    scanf("%lld%lld",&a,&b);
    while(a!=0)
    {
        if(a>b)
        {
            x=b;
            y=a;
        }
        else
        {
            x=a;
            y=b;
        }

        for(i=1;;i++)
        {
            d=x*i;
            if(d%y==0)
            {
                c=d;
                break;
            }
        }
        printf("%lld\n",(c/y)*i);
        scanf("%lld%lld",&a,&b);
    }
    return 0;
}
