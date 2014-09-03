#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,test;
	scanf("%d\n",&test);
	char a[250000],b[250000];
	for(i=0;i<test;i++)
	{
		int flag=0,flag2=0;;
		scanf("%s",a);
		scanf("%s",b);
		int len1=strlen(a);
		int len2=strlen(b);
		int j=0,k=0;
		if(len2>=len1)
		{
			while(j<strlen(b))
			{
				if(a[k]==b[j])
				{
					if(k==len1-1)
					{
						printf("YES\n");
						flag=1;
						break;
					}
					k++;
				}
				j++;
			}
		}
		j=0,k=0;
		if(len1>=len2 && flag!=1)
		{	
			while(j<strlen(a))
			{
				if(a[j]==b[k])
				{
					if(k==len2-1)
					{
						printf("YES\n");
						flag2=1;
						break;
					}
					k++;
				}
				j++;
			}
		}
		if(flag!=1 && flag2!=1)
		{
			printf("NO\n");
		}
	}
	return 0;
}
