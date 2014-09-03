#include<stdio.h>
int main()
{
    int n,i,a;
    long long int k,res;
    a=192;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&k);
        res=a+(k-1)*250;
        printf("%lld\n",res);
    }
    return 0;
}
