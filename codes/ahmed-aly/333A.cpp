#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	long long int n,num=1;
	cin >> n;
	if(n==1)
		cout << 1 << endl;
	else
	{
		while(1)
		{
			if(n%num==0)
				num*=3;
			else
			{
				cout << (n/num)+1 << endl;
				break;
			}
		}
	}
	return 0;
}
