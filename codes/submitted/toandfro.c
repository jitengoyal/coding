#include<stdio.h>
int main()
{
    int i,n,m,j;
    char array[202],a;
    scanf("%d\n",&n);
    while(n!=0)
    {
        j=0;
        scanf("%c",&a);
        while(a!='\n')
        {
            array[j]=a;
            j++;
            scanf("%c",&a);
        }
        array[j]='\0';
        m=(j)/n;
        int k=0,l=0;
        char arr[m][n];
        for(i=0;i<m;i++)
        {
            if(k==0)
            {
                for(k=0;k<n;k++)
                {
                        arr[i][k]=array[l];
                        l++;
                }
            }
            else if(k==n)
            {
                for(k=n-1;k>=0;k--)
                {
                        arr[i][k]=array[l];
                        l++;
                }
                k++;
            }
        }
        for(k=0;k<n;k++)
        {
            for(i=0;i<m;i++)
            {
                printf("%c",arr[i][k]);
            }
        }
        printf("\n");
        scanf("%d\n",&n);
    }
    return 0;
}
