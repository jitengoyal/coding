#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main()
{
	int i,j,k,l,m,n,r,b,g,r1,b1,g1,ans2,ans1;
	cin >> r >> g >> b;
	ans2=min(r,min(b,g));
	ans2+=((r-ans2)/3)+((b-ans2)/3)+((g-ans2)/3);


	if(r<=g && r <=b)
	{
		g1=g%3;
		b1=b%3;
		ans1=min(g1,b1);
		if(r < ans1)
			ans1=0;
		ans1+=((r-ans1)/3)+((b-ans1)/3)+((g-ans1)/3);
	}
	else if(g<=b && g <=r)
	{
		b1=b%3;
		r1=r%3;
		ans1=min(r1,b1);
		if(g < ans1)
			ans1=0;
		ans1+=((r-ans1)/3)+((b-ans1)/3)+((g-ans1)/3);
	}
	else if(b<=g && b<=r)
	{
		g1=g%3;
		r1=b%3;
	 	ans1=min(g1,r1);
		if(b < ans1)
			ans1=0;
		ans1+=((r-ans1)/3)+((b-ans1)/3)+((g-ans1)/3);
	}
	cout << max(ans1,ans2) << endl;
	return 0;
}

