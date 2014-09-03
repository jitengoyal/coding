#include<stdio.h>
int main()
{
    int n,a,sum,term,num;
    scanf("%d",&n);
    while(n!=0)
    {
        a=1;
        sum=a;
        term=1;
        num=0;
        while(1)
        {
            if(sum>=n)
            {
                printf("%d\n",term-1);
                break;
            }
            num=sum+1;
            sum=sum+num;
            term++;
        }
        scanf("%d",&n);
    }
    return 0;
}
