#include<stdio.h>
int main()
{
    int n,a,d,sum,i,j;
    scanf("%d",&j);
    for(i=0;i<j;i++)
    {
        scanf("%d%d%d",&n,&a,&d);
        sum=((n)*(2*a+(n-1)*d))/2;
        printf("%d\n",sum);
    }
    return 0;
}
