#include<stdio.h>
#include<string.h>
int main()
{
	int y,z;
	scanf("%d",&z);
	for(y=0;y<z;y++)
	{
	int i,j,k,l,max,n,len;
	char a[1024];
	scanf("%s",a);
	n=strlen(a);
	int array[n];
	for(i=0;i<n;i++)
	{
		k=1,l=i,len=0;
		for(j=0;;j++)
		{
			if(a[l]==a[n-k-j])
			{
				if(l==n-k-j)
				{
					len=len+1;
					break;
				}
				else if(l+1==n-k-j)
				{
					len=len+2;
					break;
				}
					else
				{
					len=len+2;
					l++;
				}
			}
			else
			{
				j=-1;
				k++;
				l=i;
				len=0;
				if(l==n-k)
				{
					len++;
					break;
				}
			}
		}
		array[i]=len;
	}
	max=array[0];
/*	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}*/
	for(i=0;i<n-1;i++)
	{
		if(max<array[i+1])
		{
			max=array[i+1];
		}
	}
	printf("%d\n",max);
	}
	return 0;
}
