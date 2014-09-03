#include<stdio.h>
int main()
{
    int n,i,a,j,b,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        t=1;
        scanf("%d%d",&a,&b);
        a=a%10;
        if(b==0)
            printf("%d\n",1);
        else if(a ==0 || a==1 || a==11)
            printf("%d\n",a%10);
        else
        {
            b=b%4;
            if(b==0)
                b=4;
            if(b==1)
                printf("%d\n",a%10);
            else
            {
                for(j=0;j<b;j++)
                {
                    t=t*a;
                }
                printf("%d\n",t%10);
            }
        }
    }
    return 0;
}
