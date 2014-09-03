#include<stdio.h>
int main()
{
    int a,i,sum=0,b;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b>0)
        {
            sum=sum+b;
        }
    }
    printf("%d\n",sum);
    return 0;
}
