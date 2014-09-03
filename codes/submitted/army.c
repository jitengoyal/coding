#include<stdio.h>
int main()
{
    int t,i,n1,n2,a,b,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int max=0,max1=0;
        scanf("%d%d",&n1,&n2);
        for(j=0;j<n1;j++)
        {
            scanf("%d",&a);
            if(max<a)
                max=a;
        }
        for(j=0;j<n2;j++)
        {
            scanf("%d",&b);
            if(max1<b)
                max1=b;
        }
        if(max>=max1)
            printf("Godzilla\n");
        else
            printf("MechaGodzilla\n");
    }
    return 0;
}
