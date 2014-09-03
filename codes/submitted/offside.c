#include<stdio.h>
int main()
{
    int i,j,flag,n,m;
    scanf("%d%d",&n,&m);
    while(n!=0)
    {
        int array[n],array1[m];
        flag=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
        }
        for(i=0;i<m;i++)
        {
            scanf("%d",&array1[i]);
        }
        for(i=0;i<m-1;i++)
        {
            for(j=i+1;j<m;j++)
            {
                if(array1[j]<array1[i])
                {
                    int hold=array1[i];
                    array1[i]=array1[j];
                    array1[j]=hold;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(array[i]<array1[1])
            {
                flag=1;
                printf("Y\n");
                break;
            }
        }
        if(flag==0)
            printf("N\n");
        scanf("%d%d",&n,&m);
    }
    return 0;
}
