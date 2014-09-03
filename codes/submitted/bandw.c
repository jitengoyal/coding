#include<stdio.h>
int main()
{
    int i,len,j,count;
    char arr[505],arr1[505],a;
    scanf("%c",&a);
    while(a!='*')
    {
        count=0,j=0,i=0,len=0;
        while(a!=' ')
        {
            arr[i]=a;
            i++;
            len++;
            scanf("%c",&a);
        }
        len=len-1;
        i=0;
        scanf("%c",&a);
        while(a!='\n')
        {
            arr1[i]=a;
            i++;
            scanf("%c",&a);
        }
        while(j<=len)
        {
            if(arr[j]==arr1[j])
            {
                j++;
            }
            else
            {
                count++;
                j++;
                while(arr[j]!=arr1[j])
                {
                    j++;
                }
            }
        }
        printf("%d\n",count);
        scanf("%c",&a);
    }
    return 0;
}
