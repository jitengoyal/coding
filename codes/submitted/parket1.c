#include<stdio.h>
#include<math.h>
int main()
{
    long long int r,b,sum,pr,diff,ans1,ans2;
    scanf("%lld%lld",&r,&b);
    pr=r+b;
    sum=(r+4)/2;
   // printf("%lld\n%lld\n",pr,sum);
    ans1=(sum+sqrt(sum*sum-4*pr))/2;
    ans2=sum-ans1;
    if(ans1>ans2)
        printf("%lld %lld\n",ans1,ans2);
    else
        printf("%lld %lld\n",ans2,ans1);
    return 0;
}
