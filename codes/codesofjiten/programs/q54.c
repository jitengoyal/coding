#include<stdio.h>
int main()
{
	char a, b;
	int counter=0,counter1=0;
	while(scanf("%c",&a)!=EOF)
	{
		if(a=='/')
		{	
			scanf("%c",&b);
			if(b=='*')
			{
				counter++;
				while(counter!=0)
				{
					scanf("%c",&b);
					if(b=='*')
					{
						scanf("%c",&b);
						if(b=='/')
						{
							counter--;
						}
					}
					else if(b=='/')
					{
						scanf("%c",&b);
						if(b=='*')
						{
							counter++;
						}
					}
				}
			}
		//	else if(a=='/')
		//	{
		//		printf("/");
		//		scanf("%c",&a);
		//	}
			else
			{
				printf("%c",a);
				printf("%c",b);
			}
		}
		else if(a=='"')
		{
			printf("%c",a);
			counter1++;
			while(counter1!=0)
			{
				scanf("%c",&a);
				if(a=='"')
				{
					counter1--;
				}
				printf("%c",a);
			}
		}
		else
		{
			printf("%c",a);
		}
	}
	//printf("\n");
	return 0;
}
