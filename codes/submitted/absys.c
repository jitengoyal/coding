#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int x,y,z,i,t,j;
    scanf("%d\n",&t);
    for(j=0;j<t;j++)
    {
    char a[25]={},b[25]={},c[25]={},d;
    int flag=-1;
    if(i!=t-1)
    {
        scanf("\n%c",&d);
    }
    else
    {
        scanf("%c",&d);
    }
    i=0;
    while(d!='+')
    {
        if(d=='m')
        {
            flag=1;
        }
        a[i]=d;
        i++;
        scanf("%c",&d);
    }
    i=0;
    scanf("%c",&d);
    while(d!='=')
    {
        if(d=='m')
        {
            flag=2;
          //  break;
        }
        b[i]=d;
        i++;
        scanf("%c",&d);
    }
    i=0;
    scanf("%c",&d);
    while(d!='\n')
    {
        if(d=='m')
        {
            flag=3;
           // break;
        }
        c[i]=d;
        i++;
        scanf("%c",&d);
    }
    if(flag==1)
    {
        y=atoi(b);
        z=atoi(c);
        printf("%d + %d = %d\n",z-y,y,z);
    }
    else if(flag==2)
    {
        x=atoi(a);
        z=atoi(c);
        printf("%d + %d = %d\n",x,z-x,z);
    }
    else
    {
        x=atoi(a);
        y=atoi(b);
        printf("%d + %d = %d\n",x,y,x+y);
    }
    }
    return 0;
}

