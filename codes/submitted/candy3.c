#include<stdio.h>
int main()
{
    int t,i,n,j,sum;
    long long int a;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sum=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%lld",&a);
            sum=(sum+a)%n;
        }
        if(sum==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
