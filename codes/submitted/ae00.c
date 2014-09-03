#include<stdio.h>
int main()
{
    int n,res=0,i=1;
    scanf("%d",&n);
    while(n/i>=i)
    {
        res=res+n/i-(i-1);
        i++;
    }
    printf("%d\n",res);
    return 0;
}


