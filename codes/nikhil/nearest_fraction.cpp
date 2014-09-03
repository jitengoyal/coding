#include<stdio.h>
#include<iostream>
using namespace std;
long long int func(long long int a,long long int b)
{
	if(a%b==0)
		return b;
	func(b,a%b);
}

int main()
{
	long long int x,y,n;
	long long int a,b,i,numo,deno;
	double frac=1000000.0,m1,m2;
	cin >> x >> y >> n;
	for(b=1;b<=n;b++)
	{
		a = b*x/y;
		m1 = (((b*x) - (a*y))*1.0)/(b*y*1.0);
		if(m1<0)
			m1=-m1;
		if(m1<frac)
		{
			frac = m1;
			numo = a;
			deno = b;
		}
		if((b*x)%y!=0)
		{
			m2 = ((((a+1)*y) - (b*x))*1.0)/(b*y*1.0);
			if(m2<0)
				m2=-m2;
			if(m2<frac)
			{
				frac = m2;
				numo = a+1;
				deno = b;
			}

		}
	}
	long long int gcd1=func(numo,deno);
	numo/=gcd1;
	deno/=gcd1;
	cout << numo << "/" << deno << endl;
	return 0;
}
