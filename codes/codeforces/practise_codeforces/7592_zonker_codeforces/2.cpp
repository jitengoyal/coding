#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
 using namespace std;
 int main()
{
	int i,j,k,l,n,m,num,val;
	cin >> n;
	val=n-2;
	int sum=n;
	if(n==1)
	{
		cout << 1 << "\n";
		return 0;
	}
	for(i=1;i<n-1;i++)
	{
		sum=sum+(val)*i+val+1;
		val--;
	}
	cout << sum+1 << "\n";
	return 0;
}

