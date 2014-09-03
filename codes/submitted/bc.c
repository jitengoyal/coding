#include<stdio.h>
int main()
{
    int i,t,count=0;
    long long int n,k,m,ans;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        count=0;
        scanf("%lld%lld%lld",&n,&k,&m);
        ans=(n*k*m)-1;
        while(n!=1 || k!=1 || m!=1)
        {
           if(n!=1 )
           {
               if(n%2!=0)
               {
                   n=n+1;
               }
               n=n/2;
               count++;
           }
           if(m!=1 )
           {
               if(m%2!=0)
               {
                   m=m+1;
               }
               m=m/2;
               count++;
           }
           if(k!=1 )
           {
               if(k%2!=0)
               {
                   k=k+1;
               }
               k=k/2;
               count++;
           }
        }
       printf("Case #%d: %lld %d\n",i+1,ans,count);
    }
    return 0;
}
