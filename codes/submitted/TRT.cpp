#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

long long int func(long long int* arr,long long  int j,long long int k,long long int cost,long long int** ans_arr)
{
	if(ans_arr[j][k])
		return ans_arr[j][k];
	if(j==k)
		return cost *arr[j]; 
	ans_arr[j][k] =  max( (cost*arr[j])+func(arr,j+1,k,cost+1,ans_arr), (cost*arr[k])+func(arr,j,k-1,cost+1,ans_arr));
	return ans_arr[j][k];
}

int main()
{
	long long int i,num,ans,cost=1,j;
	scanf("%lld",&num);

	long long int* arr=(long long int*)malloc(sizeof(long long int)*num);
	long long int **ans_arr;

	ans_arr=(long long int**)malloc(sizeof(long long int*)*num);

	for(i=0;i<num;i++)
	{
		ans_arr[i]=(long long int*)malloc(sizeof(long long int)*num);
		for(j=0;j<num;j++)
			ans_arr[i][j]=0;
		scanf("%lld",&arr[i]);
	}

	ans=func(arr,0,num-1,cost,ans_arr);
	printf("%lld\n",ans);
	return 0;
}

