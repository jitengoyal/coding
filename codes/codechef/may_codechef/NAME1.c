#include<stdio.h>
#include<string.h>
int main()
{
	int test,n,num,j,i;
	scanf("%d\n",&n);
	char a[200000],b[200000],c[200000];
	for(test=0;test<n;test++)
	{
		int array[26]={0};
		scanf("%s",a);
		scanf("%s",b);
		strcat(a,b);
		j=0;
		while(j<strlen(a))
		{
			array[a[j]-97]++;
			j++;
		}
		
/*		for(i=0;i<26;i++)
		{
			printf("%d ",array[i]);
		}
		printf("\n");*/

		scanf("%d",&num);
		c[0]='\0';
		for(j=0;j<num;j++)
		{
			scanf("%s",b);
			strcat(c,b);
		}

		j=0;
		int flag=0;
		while(j<strlen(c))
		{
			if(array[c[j]-97]>0)
			{
				array[c[j]-97]--;
			}
			else
			{
				flag=1;
				printf("NO\n");
				break;
			}
			j++;
		}
		if(flag==0)
			printf("YES\n");
	}
	return 0;
}
