#include<stdio.h>
int main()
{
    int i,j;
    long long int a,ans,b;
    char x;
    scanf("%d\n",&j);
    for(i=0;i<j;i++)
    {
        scanf("%lld",&ans);
       // ans=a;
        scanf("%c",&x);
        while(x!='=')
        {
            if(x=='+')
            {
                    scanf("%lld",&b);
                    ans=ans+b;
            }
            else if(x=='-')
            {
                    scanf("%lld",&b);
                    ans=ans-b;
            }
            else if(x=='*')
            {
                    scanf("%lld",&b);
                    ans=ans*b;
            }
            else if(x=='/')
            {
                    scanf("%lld",&b);
                    ans=ans/b;
            }
            scanf("%c",&x);
        }
            printf("%d\n",ans);
    }
    return 0;
}
