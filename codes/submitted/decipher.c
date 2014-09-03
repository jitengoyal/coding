#include<stdio.h>
int main()
{
    int i,t;
    long long int a,b,c;
    long long int ans;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        ans=(a*a)-2*(b);
        printf("%lld\n",ans);
    }
    return 0;
}
