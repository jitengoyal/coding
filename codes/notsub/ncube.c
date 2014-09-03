#include<stdio.h>
int main()
{
    long long int k,l,i,n,m;
    long long int sum;
    scanf("%lld",&l);
    for(k=0;k<l;k++)
    {
        scanf("%lld",&n);
        sum = 0;
        m=n;
        for(i=1;i<=n;i++)
        {
            if(m*i*i*i>1000000003)
            {
                    sum=sum+((m*i*i*i)%1000000003);
            }
            else
            {
                    sum=sum+m*i*i*i;
            }
         if(sum>=1000000003)
         {
              sum=sum%1000000003;
         }
         m--;

        }
        printf("%lld\n",sum%1000000003);

    }
    return 0;
}
