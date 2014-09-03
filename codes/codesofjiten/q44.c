#include<stdio.h>
#include<string.h>
int main()
{
	int p,r;
	scanf("%d",&p);
	for(r=0;r<p;r++)
	{
		int i=0,j=0,k=0,y=0,n1,n2,l=0,z=0;		
		char a[1000],b[1000];
		int array[1000]={0};
		scanf("%s%s",a,b);
		n1=strlen(a);
		n2=strlen(b);
		for(i=0;i<n1;i++)
		{
			l=i;
			z=i;
			for(j=0;j<n2;j++)
			{
				if(a[l]==b[0])
				{
					if(a[z]==b[j])
					{
						if(j==n2-1)
						{
							for(k=l;k<=l+n2-1;k++)
							{
								array[k]=1;
							}	
						}
						z++;
					}
					else
						break;
				}
			}
		}
		for(y=0;y<n1;y++)
		{
			if(array[y]!=1)
			{
				printf("%c",a[y]);
			}
		}
		printf("\n");
	}
		return 0;
}
