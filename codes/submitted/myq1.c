#include<stdio.h>
int main()
{
    int t,i,num;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&num);
        if(num==1)
            printf("poor conductor\n");
        else
        {
            if((num-2)%10==0)
            {
                printf("%d ",(2*((num-2)/10+1)-1));
                printf("W L\n");
            }
            else if((num-11)%10==0)
            {
                printf("%d ",2*((num-2)/10+1));
                printf("W L\n");
            }
            else if((num-3)%10==0)
            {
                printf("%d ",(2*((num-2)/10+1)-1));
                printf("A L\n");
            }
            else if((num-10)%10==0)
            {
                printf("%d ",2*((num-2)/10+1));
                printf("A L\n");
            }
            else if((num-4)%10==0)
            {
                printf("%d ",(2*((num-2)/10+1)-1));
                printf("A R\n");
            }
            else if((num-9)%10==0)
            {
                printf("%d ",2*((num-2)/10+1));
                printf("A R\n");
            }
            else if((num-5)%10==0)
            {
                printf("%d ",(2*((num-2)/10+1)-1));
                printf("M R\n");
            }
            else if((num-8)%10==0)
            {
                printf("%d ",2*((num-2)/10+1));
                printf("M R\n");
            }
            else if((num-6)%10==0)
            {
                printf("%d ",(2*((num-2)/10+1)-1));
                printf("W R\n");
            }
            else if((num-7)%10==0)
            {
                printf("%d ",2*(((num-2)/10+1)));
                printf("W R\n");
            }
        }
    }
    return 0;
}
