#include<stdio.h>
int main()
{
	int i,j,n,top;
	char arr[100];
	scanf("%d",&n);
	char c;
	scanf("%c",&c);
	for(i=0;i<n;i++)
	{
		top=0;
//		char c;
//		scanf("%c",&c);
		scanf("%c",&arr[top]);
		while(arr[top] != '\n')
		{
			top++;
			if(top>1)
			{
				if(arr[top-1] == '}')
				{
					if(arr[top-2] == '{')
					{
						top=top-2;
					}
					/*else
					{
						printf("NO1\n");
						flag=1;
						break;
					}*/
				}
				else if (arr[top-1] == ')')
				{
					if(arr[top-2] == '(')
					{
						top=top-2;
					}
					/*else
					{
						printf("NO2\n");
						flag=1;
						break;
					}*/
				}
				
				
				else if(arr[top-1] == ']')
					{
						if(arr[top-2] == '[')
						{
							top=top-2;
						}
						/*else
						{
							printf("NO3\n");
							flag=1;
							break;
						}*/
					}
				
			}
			scanf("%c",&arr[top]);
		}
		if(top == 0)
		{
			printf("YES\n");
			
		}
		else
		{
				printf("NO\n");
		}
	}
	return 0;
}
