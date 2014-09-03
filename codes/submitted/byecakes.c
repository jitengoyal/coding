#include<stdio.h>
int main()
{
    int e,f,s,m,e1,f1,s1,m1,c1,c2,c3,c4;
    scanf("%d",&e);
    while(e!=-1)
    {
        int max,max1,max2;
        scanf("%d%d%d%d%d%d%d",&f,&m,&s,&e1,&f1,&m1,&s1);
        if(e%e1==0)
            c1=e/e1;
        else
            c1=e/e1+1;
        if(f%f1==0)
            c2=f/f1;
        else
            c2=f/f1+1;
        if(m%m1==0)
            c3=m/m1;
        else
            c3=m/m1+1;
        if(s%s1==0)
            c4=s/s1;
        else
            c4=s/s1+1;
        if(c1>c2)
            max=c1;
        else
            max=c2;
        if(c3>c4)
            max1=c3;
        else
            max1=c4;
        if(max>max1)
            max2=max;
        else
            max2=max1;
       // printf("%d\n",max2);
        printf("%d %d %d %d\n",max2*e1-e,max2*f1-f,max2*m1-m,max2*s1-s);
        scanf("%d",&e);
    }
    return 0;
}



