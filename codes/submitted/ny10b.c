#include<stdio.h>
int main()
{
    int i,n,b,x,y,j,l,m;
    int num1[25],num2[25],num3[25];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d%d",&m,&b,&x,&y);
        j=0;
        while(x!=0)
        {
            int rem=(x%b);
            num1[j]=rem;
            j++;
            x=x/b;
        }
        l=0;
        while(y!=0)
        {
            int rem=(y%b);
            num2[l]=rem;
            l++;
            y=y/b;
        }
        int k=0;
        while(k<j && k<l)
        {
            num3[k]=((num1[k]+num2[k])%b);
            k++;
        }
        if(k>=l)
        {
            while(k<j)
            {
                num3[k]=(num1[k])%b;
                k++;
            }
        }
        else if(k>=j)
        {
            while(k<l)
            {
                num3[k]=((num2[k])%b);
                k++;
            }
        }
        int index;
  /*      for(index=j-1;index>=0;index--)
        {
            printf("%d",num1[index]);
        }
        printf("\n");*/
        int res=0,xxx=1;
        index=0;
        while(index<k)
        {
            res=res+(num3[index]*xxx);
            xxx=xxx*b;
            index++;
        }
        printf("%d %d\n",m,res);
    }
    return 0;
}
