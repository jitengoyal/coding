#include<stdio.h>
int func(char s[]);
int i=0;counter=0;
int main()
{
	int i,n,res;
	char s[100];
	scanf("%s",s);
	res=func(s);
	i=0;
	counter=0;
	printf("%d\n",res);
	return 0;
}
int func(char s[])
{
	if(s[i]=='\0')
	{
		if((s[i-1]=='a')||(s[i-1]=='e')||(s[i-1]=='i')||(s[i-1]=='o')||(s[i-1]=='u'))
		{
			counter++;
		}
		return counter;
	}
	else
	{
		if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
		{
			i++;
			return func(s);

		}
		else
		{

			if((s[i-1]=='a')||(s[i-1]=='e')||(s[i-1]=='i')||(s[i-1]=='o')||(s[i-1]=='u'))
			{
				counter++;
			}
			i++;
			return func(s);
		}
	}
}


