#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&y);
    for(x=0;x<y;x++)
    {
    long long int a,b,sum,n,a1,d=1,i;
    scanf("%lld%lld%lld",&a,&b,&sum);
    long long int c=a+b;
    c=c+d;
  /*  if((sum*2)%c==0)
    {
        printf("%lld\n",(sum*2)/c);
    }
    else
    {
        while((sum*2)%c!=0)
        {
            d++;
            c=c+d;
        }
        printf("%lld\n",(sum*2)/c);
    }*/
    printf("%lld\n",(sum*2)/c);
    n=(sum*2)/c;
    d=(b-a)/(n-6);
    a1=(((sum*2)/n)-((n-1)*d))/2;
    for(i=0;i<n-1;i++)
    {
        printf("%lld ",a1+(d*i));
    }
    printf("%lld\n",a1+((n-1)*d));
    }
    return 0;
}



