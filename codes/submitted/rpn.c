#include<stdio.h>
int main()
{
	int i=0,j,n;
	scanf("%d\n",&n);
	for(j=0;j<n;j++)
	{
		char a,array[410];
		scanf("%c",&a);
		while(a!='\n')
		{
			if(a=='(' || a=='+' || a=='-' || a=='*' || a=='/' || a=='%' || a=='^' )
			{
				array[i]=a; 
				i++;
			}
			else if (a==')')
			{
				i--;
				while(array[i]!='(' )
				{
					printf("%c",array[i]);
					i--;
				}
			}
			else
			{
				printf("%c",a);
			}
			scanf("%c",&a);
		}
		printf("\n");
	}
	return 0;
}
