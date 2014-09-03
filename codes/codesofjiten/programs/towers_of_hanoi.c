#include<stdio.h>
void towers(int,char,char,char);
int main()
{
	int n;
	printf("Enter number of disks:");
	scanf("%d",&n);
	printf("The towers of hanoi invloves the moves\n\n");
	towers(n,'A','B','C');
	printf("\n answer\n");
	return 0;
}
void towers (int n,char frompeg, char topeg, char auxpeg)
{
	if(n==1)
	{
		printf("\n Move disk 1 from peg %c to peg %c",frompeg,topeg);
		return;
	}
	towers(n-1,frompeg,auxpeg,topeg);
	printf("\n Move disk %d from peg %c to peg %c ",n,frompeg,topeg);
	towers(n-1,auxpeg,topeg,frompeg);
}

