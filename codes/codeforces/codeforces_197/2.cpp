#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	long long int a,b,i,j,n,m,sum=0,present=1,num;
	cin >> n >> m;
	for(i=0;i<m;i++)
	{
		cin >> num;
		if(num>present)
		{
			sum+=num-present;
			present=num;
		}
		else if(num<present)
		{
			sum+=n-present+num;
			present=num;
		}
	}
	cout << sum << endl;
	return 0;
}
