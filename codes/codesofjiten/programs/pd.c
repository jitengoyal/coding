//program to print the digits of a number with the help of recursion
#include<stdio.h>
void digits(int n);
int main()
{
	int n;
	scanf("%d",&n);
	digits(n);
	printf("\n");
	return 0;
}
void digits(int n)
{
	int rem=0;
	rem=n%10;
	n=n/10;
	if(n==0) { 
		printf("%d",rem);
		return ;
	}
	else {
		digits(n);
		printf("%d",rem); 
	}
	return ; 
}

/*
int digits2(int n) { 

	if(n==0) { 
		return -1;
	}
	digits2(n/10); 
	printf("%d",n%10);

}*/
