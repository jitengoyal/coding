#include<stdio.h>
int main()
{
    int t,i,n,m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&n,&m);
        if((n%2==0) &&(m%2==0) && (n<=m))
        {
            printf("L\n");
        }
        else if((n%2==0) && (m%2==0) && (n>m))
        {
            printf("U\n");
        }
        else if((n%2!=0) && (m%2!=0) &&(n<=m))
        {
            printf("R\n");
        }
        else if((n%2!=0) && (m%2!=0) &&(n>m))
        {
            printf("D\n");
        }
        else if((n%2!=0)&& (m%2==0) && (n<m))
        {
            printf("R\n");
        }
        else if((n%2!=0) && (m%2==0) && (n>m))
        {
            printf("U\n");
        }
        else if((n%2==0) && (m%2!=0) && (n<m))
        {
            printf("L\n");
        }
        else if((n%2==0) && (m%2!=0) && (n>m))
        {
            printf("D\n");
        }
    }
    return 0;
}
