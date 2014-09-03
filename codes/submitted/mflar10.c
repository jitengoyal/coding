#include<stdio.h>
int main()
{
    int flag,flag2;
    char a,b;
    scanf("%c",&a);
    while(a!='*')
    {
        flag=1,flag2=0;
        b=a;
        while(b!='\n')
        {
            while(b!=' ')
            {
                if(b=='\n')
                {
                    flag2=1;
                    break;
                }
                scanf("%c",&b);
            }
            if(flag2==1)
                break;
            scanf("%c",&b);
            if((b-a==0) || (b-a==32) || (b-a==-32))
                flag=1;
            else
            {
                flag=0;
                break;
            }
        }
        if(b!='\n')
        {
            while(b!='\n')
            {
                scanf("%c",&b);
            }
        }
        if(flag==1)
            printf("Y\n");
        else
            printf("N\n");
        scanf("%c",&a);
    }
    return 0;
}
