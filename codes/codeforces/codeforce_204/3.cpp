#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int cmp(const void *x, const void *y)
{
	  double xx = *(double*)x, yy = *(double*)y;
	    if (xx < yy) return -1;
	      if (xx > yy) return  1;
	        return 0;
}

int main()
{
	int i,j,k,l,m,n;
	double arr[4500];
	double arr1[4500];
	double arr2[4500];
	scanf("%d",&n);
	for(i=0;i<2*n;i++)
	{
		scanf("%lf",&arr[i]);
		if(:wq
	}
	

	for(i=0;i<2*n;i++)
		printf("%.3lf ",arr[i]);
	printf("\n");


	return 0;
}
