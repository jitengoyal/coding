#include<stdio.h>
#include<string.h>
int func(char a[],int i,int n);
int main()
{
	int i,j,n;
	char a[1000], b[1000];
	scanf("%s",a);
	n=strlen(a);
	i=1;
	func (a,i,n);
	printf("%s",a);
}
int func(char a[],int i,int n)
{

	if(a=='\0')
	{
		return 0;
	}
	else
	{
		a[n-i]=a[i];
		i++;
		func(a,i,n);
	}
}




