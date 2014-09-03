#include<stdio.h>
int main()
{
    int n,i,sum,count;
    scanf("%d",&n);
    while(n!=-1)
    {
        int arr[n];
        sum=0,count=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            sum=sum+arr[i];
        }
        if(sum%n!=0)
            printf("%d\n",-1);
        else
        {
            for(i=0;i<n;i++)
            {
                if(arr[i]<(sum/n))
                    count=count+(sum/n)-arr[i];
            }
            printf("%d\n",count);
        }
        scanf("%d",&n);
    }
    return 0;
}
