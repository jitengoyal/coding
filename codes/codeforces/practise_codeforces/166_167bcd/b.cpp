#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
 using namespace std;

 int arr[510][510];

int primes[100010]={0};

void func()
{
	long long int flag,i,j,counter=0;
	primes[0]=0;
	primes[1]=0;
	primes[2]=1;
	primes[100003]=1;
	i=3;
	while(i*i <= 10000000010)
	{
		flag=0;
		j=2;
		while(j*j<=i)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
			j++;
		}
		if(flag==0)
			primes[i]=1;
		i++;
	}
	return;
}

 int main()
{
	int i,j,k,l,n,m,num;
	func();
	scanf("%d%d",&n,&m);

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);

			if(primes[arr[i][j]]==1)
				arr[i][j]=0;
			else
			{
				for(k=arr[i][j];k<=100003;k++)
				{
					if(primes[k]==1)
					{
						arr[i][j]=k-arr[i][j];
						break;
					}
				}
			}
		}
	}
	
	int min1=1000000000,sum;
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<m;j++)
			sum=sum+arr[i][j];
		min1=min(min1,sum);
	}

	for(j=0;j<m;j++)
	{
		sum=0;
		for(i=0;i<n;i++)
			sum=sum+arr[i][j];

		min1=min(min1,sum);
	}

	cout << min1 << endl;
	return 0;
}
