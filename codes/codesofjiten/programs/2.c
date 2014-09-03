#include<stdio.h>
int counter=0,i=0;
int func(char s[]);
int main()
{
		int n,res,j,k;
		scanf("%d",&j);
		for(k=0;k<j;k++)
		{
			char s[100];
		scanf("%s",s);
		res=func(s);
		counter=0;i=0;
		printf("%d\n",res);
		}
		return 0;
}
	int func(char s[])
	{
	//static int i=0;
	//static int counter=0;
		if(s[i]=='\0')
		{
			if((s[i-1]=='A')||(s[i-1]=='E')||(s[i-1]=='I')||(s[i-1]=='O')||(s[i-1]=='U'))
			{
				counter++;
			}
			return counter;
		}
		else
		{
			if((s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U'))
			{
				i++;
				return func(s);

			}
			else
			{

				if((s[i-1]=='A')||(s[i-1]=='E')||(s[i-1]=='I')||(s[i-1]=='O')||(s[i-1]=='U'))
				{
					counter++;
				}
				i++;
				return func(s);
			}
		}
	}


