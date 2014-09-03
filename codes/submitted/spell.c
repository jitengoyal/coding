#include<stdio.h>

int main()
{
    int n,i,r,j;
    char a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        j=0;
        scanf("%d%c",&r,&a);
        scanf("%c",&b);
        j++;
        printf("%d ",i+1);
        while(b!='\n')
        {
            if(j!=r)
            {
                printf("%c",b);
            }
            scanf("%c",&b);
            j++;
        }
         printf("\n");
    }
         return 0;
}


