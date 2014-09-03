#include<stdio.h>
int main()
{
    long long int t,i,flag=0,num;
    long long int a=1,b=1,ans=1;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        ans=1;
        a=1,b=1,flag=0;
        scanf("%lld",&num);
        while(ans!=num)
        {
            if(flag==0)
            {
                b=b+1;
                ans++;
                flag=1;
                if(ans==num)
                    break;
                while(b!=1)
                {
                    b=b-1;
                    a=a+1;
                    ans++;
                if(ans==num)
                    break;
                }


            }
            else
            {
                a=a+1;
                ans++;
                flag=0;
                if(ans==num)
                    break;
                while(a!=1)
                {
                    a=a-1;
                    b=b+1;
                    ans++;
                if(ans==num)
                    break;
                }


            }
        }
        printf("TERM %lld IS %lld/%lld\n",num,a,b);
    }
    return 0;
}
