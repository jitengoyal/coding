#include<stdio.h>
int main()
{
    int n,i,j,hold,hold1,sum;
    int k,l;
    scanf("%d",&l);
    for(k=0;k<l;k++)
    {
        scanf("%d",&n);
         int a[n],b[n],c[n];
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    hold=a[j];
                    a[j]=a[j+1];
                    a[j+1]=hold;
                }
                if(b[j]>b[j+1])
                {
                    hold1=b[j];
                    b[j]=b[j+1];
                    b[j+1]=hold1;
                }
            }
            c[n-i-1]=(a[n-i-1]*b[n-i-1]);
        }
        for(i=0;i<n;i++)
        {
        sum=sum+c[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}


