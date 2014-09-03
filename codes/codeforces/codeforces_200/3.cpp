#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
	long long int x,y,z,n,l,m,count;

	cin >> x >> y;
	count=0;
	while(y!=1)
	{
		if(x>y)
		{

		}
		if(x<y)
			swap(x,y);
		count+=x/y;
		n=x/y;
		x=x-n*y;
	}
	count+=x;
	cout << count << "\n";

	return 0;
}
