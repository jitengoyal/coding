//program to print the digits of a number with the help of recursion
#include<stdio.h>
int digits(int n);
int main()
{
	int n,result;
	scanf("%d",&n);
	result=digits(n);
//	printf("%d\n",result);
	return 0;
}
int digits(int n)
{
	int rem=0;
	rem=n%10;
	n=n/10;
	if(n==0) { 
		printf("%d",rem);
		return -1;
	}
	else {
		digits(n);
		printf("%d",rem); 
	}
	return -1; 
}


int digits2(int n) { 

	if(n==0) { 
		return -1;
	}
	digits2(n/10); 
	printf("%d",n%10);

}
