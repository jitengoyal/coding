#include<stdio.h>
int main()
{
    long long int a,b,c,d,res;
    int i=0;
    while(scanf("%lld%lld%lld%lld",&a,&b,&c,&d)!=EOF);
    {
        i++;
        res=a*a+b*b+c*c+d*d;
        printf("Case %d: %lld\n",i,res);
    }
    return 0;
}
