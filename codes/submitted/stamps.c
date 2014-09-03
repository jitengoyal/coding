#include<stdio.h>
int main()
{
    int j,t,sum,sss,box,k,n,i1,i,l,s;
//	int n,k,s,i,box,sum,t,j,sss,l=0,ss;
//	scanf("%d",&t);
//	for(j=0;j<t;j++)
	{
	    sum=0,sss=0,box=0;
        scanf("%d%d%d",&n,&k,&s);
        int arr[n];
        for(i=0;i<n;i++)
        {
            i1=i;
            scanf("%d",&arr[i]);
            sss=sss+arr[i];
            while(arr[i1]<arr[i1-1] && i1!=0)
            {
                int hold=arr[i1];
                arr[i1]=arr[i1-1];
                arr[i1-1]=hold;
                i1--;
            }
        }
     /*   for(l=0;l<n;l++)
        {
            printf("%d ",arr[l]);
        }
        printf("\n");*/
    //    if(sss>=k*s)
        {
            for(i=n-1;i>=0;i--)
            {
                    sum=sum+arr[i];
                    box++;
                    if(sum>=k*s)
                    {
                        printf("%d\n",box);
                        break;
                    }
            }
        }
      /*  else
        {
            printf("Scenario #%d:\n",j+1);
            printf("impossible\n");
        }*/
    }
	return 0;
}

