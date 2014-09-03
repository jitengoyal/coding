#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	long long int num,n,i,j,k,res=1;
	long long int arr[65];
	arr[2]=2;
	arr[3]=3;
	for(i=4;i<62;i++)
	{
		for(k=1,j=i;j>i/2;j--,k++)
		{
			res=res*j;
			res/=k;
		}
		arr[i]=(long long)res;
		res=1;
	}
	arr[62]=(long long)((long long)arr[61]*(long long)2);
	arr[63]=(long long)((long long)arr[62]/(long long)32*(long long)63);
	cout << arr[61]<<endl;
	scanf("%lld",&num);
	for(i=0;i<num;i++)
	{
		scanf("%lld",&n);
		int flag=0;
		for(j=2;j<64;j++)
		{
			if(n<=arr[j]){
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("%lld\n",j);
		if(flag==0)
			printf("%d\n",64);
	}

	return 0;
}
