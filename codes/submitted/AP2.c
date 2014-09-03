#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&y);
    for(x=0;x<y;x++)
    {
    long long int a,b,sum,n,a1,d,i;
    scanf("%lld%lld%lld",&a,&b,&sum);
    long long int c=a+b;
    n=(sum*2)/c;
    printf("%lld\n",n);
    d=(b-a)/(n-5);
   // printf("%lld\n",d);
    a1=(((sum*2)/n)-((n-1)*d))/2;
    for(i=0;i<n-1;i++)
    {
        printf("%d ",a1+(d*i));
    }
    printf("%d\n",a1+((n-1)*d));
    }
    return 0;
}



