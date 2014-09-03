#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d",&a,&b,&c);
    while(a!=0)
    {
        d=a*a;
        e=b*b;
        f=c*c;
        if(d==(e+f))
        {
                printf("right\n");
        }
        else if(e==(d+f))
        {
                printf("right\n");
        }
        else if(f==(e+d))
        {
                printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
          scanf("%d%d%d",&a,&b,&c);
    }
    return 0;
}
