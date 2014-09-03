#include<stdio.h>
#include<string.h>
int func(char a[100],int low,int high);
int main()
{
	int n;
	char a[100]="hello";
	n=strlen(a);
	func(a,0,n-1);
	printf("%s",a);
	printf("\n");
}
func (char a[100],int low,int high)
{
	char c;
	if(low>high)
		return ;
	else
	{
		c=a[low];
		a[low]=a[high];
		a[high]=c;
		low=low+1;
		high--;
		func(a,low,high);
	}
}
