#include<stdio.h>
int main()
{
    int g,b;
    scanf("%d%d",&g,&b);
    while(g!=-1)
    {
        if(g>b)
        {
            if(g%(b+1)==0)
                printf("%d\n",g/(b+1));
            else
                printf("%d\n",g/(b+1)+1);
        }
        else
        {
            if(b%(g+1)==0)
                printf("%d\n",b/(g+1));
            else
                printf("%d\n",b/(g+1)+1);
        }
        scanf("%d%d",&g,&b);
    }
    return 0;
}
