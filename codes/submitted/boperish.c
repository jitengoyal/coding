#include<stdio.h>
int main()
{
    long long  int n,i,count1,count2,k;
    scanf("%lld",&n);
    while(n!=0)
    {
        int array[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
        }
        for(k=0;k<=n;k++)
        {
            count1=0;count2=0;
            for(i=0;i<n;i++)
            {
                if(array[i]>=k)
                {
                    count1++;
                }
                if(array[i]>k)
                {
                    count2++;
                }
            }
            if(count1==k)
            {
                printf("%lld\n",k);
                break;
            }
            else if(count1>k)
            {
                if(count2<=k)
                {
                    printf("%lld\n",k);
                    break;
                }
            }
        }
        scanf("%lld",&n);
    }
    return 0;
}
