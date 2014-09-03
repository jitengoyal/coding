#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
	long long int x,y,z,n,l,m;

	cin >> x >> y >> z;

	m=(x+y-z);
	n=(y+z-x);
	l=(x-y+z);
	if(m < 0 || n < 0 || l < 0 || m%2!=0 || n%2!=0 || l%2!=0)
		printf("Impossible\n");
	else
		cout << m/2 << " " << n/2 << " " << l/2 <<"\n";

	return 0;
}
