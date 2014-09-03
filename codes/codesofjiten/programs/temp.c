#include<stdio.h>
void func(char *);
int main()
{
	char s[1000];
	s[0]='1';
	func(&s[0]);
	return 0;
}
void func(char *s)
{
	printf("%c",*s);
}
