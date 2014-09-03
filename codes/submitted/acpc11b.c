#include<stdio.h>
int main()
{
    int t,i,n1,n2,j,k,diff,hold,min;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        diff=0,hold=0,min=1000000;
        scanf("%d",&n1);
        int arr[n1];
        for(j=0;j<n1;j++)
            scanf("%d",&arr[j]);
        scanf("%d",&n2);
        int arr1[n2];
        for(k=0;k<n2;k++)
            scanf("%d",&arr1[k]);
        for(j=0;j<n1;j++)
        {
            for(k=0;k<n2;k++)
            {
               diff=arr[j]-arr1[k];
               if(diff<0)
                 diff=diff*(-1);
               if(diff<min)
                    min=diff;
               if(diff==0)
               {
                    hold=1;
                    break;
               }
            }
            if(hold==1)
                break;
        }
        printf("%d\n",min);
    }
    return 0;
}
