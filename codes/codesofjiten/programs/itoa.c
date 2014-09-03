#include<stdio.h>
#include<string.h>
void func(int n,char *);
int main()
{
	int n,l;
	char s[1000];
	scanf("%d",&n);
	l=func(n,s);
	//while(*s)
	func(l,s);
	printf("%s\n",s);
}
int func(int n,char *s)
{
	int r;
	r=n%10;
	while(n)
	{
		*s=r+'0';
		s++;
		n=n/10;
		r=n%10;
	}
	*s='\0';
	return ;
}
