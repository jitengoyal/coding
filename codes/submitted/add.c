#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d",&j);
    int a,b,x,y,r,sum,ans;
    for(i=0;i<j;i++)
    {
        a=0,b=0,r=0,ans=0;
        scanf("%d%d",&x,&y);
        while(x!=0)
        {
            r=x%10;
            x=x/10;
            a=a*10+r;
        }
        while(y!=0)
        {
            r=y%10;
            y=y/10;
            b=b*10+r;
        }
        sum=a+b;
        while(sum!=0)
        {
            r=sum%10;
            sum=sum/10;
            ans=ans*10+r;
        }
        printf("%d\n",ans);
    }
    return 0;
}
