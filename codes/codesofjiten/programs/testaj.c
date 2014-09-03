#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,max,n,len;
	char a[1024];
	scanf("%s",a);
	n=strlen(a);
	int array[n];
	for(i=1;i<2;i++)
	{
		k=1,l=i,len=0;
		for(j=0;;j++)
		{
			printf("L is %d, N is %d, K is %d, J is %d\n", l, n, k, j);
			if(a[l]==a[n-k-j])
			{
				printf("Gya-L is %d, N is %d, K is %d, J is %d\n", l, n, k, j);
				if(l==n-k-j)
				{
				printf("Gya1\n");
					len=len+1;
		//			printf("%d",len);
					break;
				}
				else if(l+1==n-k-j)
				{
				printf("Gya2\n");
					len=len+2;
	//				printf("final=%d\n",len);
					break;
				}
				else
				{
				printf("Gya3\n");
					len=len+2;
					l++;
			//		printf("%d\n",len);
				}
			}
			else
			{
				j=-1;
				k++;
				len=0;
				if(l==n-k)
				{
					len++;
					break;
				}
			}
		}
		array[i]=len;
//		printf("%d\n",array[i]);
	}
	max=array[0];
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(max<array[i+1])
		{
			max=array[i+1];
		}
	}
	printf("%d\n",max);
}
