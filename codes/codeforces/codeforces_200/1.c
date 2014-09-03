#include<stdio.h>

int main()
{
	int i,j,n,num,counter;
	scanf("%d\n",&num);
	char a,b,d,a1,b1;
	scanf("%c%c%c",&a1,&b1,&d);
	counter=0;
	for(i=0;i<num-1;i++)
	{
		scanf("%c%c%c",&a,&b,&d);
		if(a1==a && b1==b ) 
		{}
		else
		{
			counter++;
			a1=a;
			b1=b;
		}
	}
	printf("%d\n",counter+1);
	return 0;
}
