#include<stdio.h>
int main()
{
    int i,n,a,sum,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=0;
        b=5;
        scanf("%d",&a);
        while(a/b!=0)
        {
            sum=sum+a/b;
            b=b*5;
        }
        printf("%d\n",sum);
    }
    return 0;
}
