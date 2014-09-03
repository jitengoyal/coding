#include<stdio.h>
#include<string.h>

int main()
{

	int i;
	char array[2000000];
	char stack[2000000];
	int top=-1;
	scanf("%s",array);
	stack[++top]=array[0];	
	int l=strlen(array);
	for(i=1;i<l;i++)
	{
		if(array[i]==stack[top])
			top--;
		else
			stack[++top]=array[i];
	}
	if(top==-1)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
