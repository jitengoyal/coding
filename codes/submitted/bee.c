#include<stdio.h>
int main()
{
    int n,t,a;
    scanf("%d",&n);
    while(n!=-1)
    {
        t=0;
        a=1;
 /*       t=((n-1)/6)+1;
        if(t==a)
        {
            printf("Y\n");
        }*/
        while(n/a!=0 && n!=a)
        {
            a=a+(++t*6);
            if(t%a==0)
            {
                break;
            }
        }
        if(n%a==0)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
        scanf("%d",&n);
    }
    return 0;
}
