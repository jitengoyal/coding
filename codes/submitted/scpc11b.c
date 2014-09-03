#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    while(n!=0)
    {
        int flag=0;
        for(i=0;i<n;i++)
        {
            int i1=i;
            scanf("%d",&arr[i]);
            while(arr[i1] < arr[i1-1] && i1!=0)
            {
                int hold=arr[i1];
                arr[i1]=arr[i1-1];
                arr[i1-1]=hold;
                i1--;
            }
        }
        for(i=1;i<n;i++)
        {
            if(arr[i] > arr[i-1]+200 )
            {
                flag=1;
                break;
            }
            if(i==n-1 &&  2*(1422- arr[n-1]) > 200 )
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            printf("IMPOSSIBLE\n");
        else
            printf("POSSIBLE\n");
    scanf("%d",&n);
    }
    return 0;
}
