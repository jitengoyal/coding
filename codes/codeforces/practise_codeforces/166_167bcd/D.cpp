#include<stdio.h>
#include<iostream>
#include<set>
#include<vector>

using namespace std;

long long int fact(int n,int modl)
{
	long long int i,ans=1;
	for(i=2;i<=n;i++)
	{
		i%=modl;
		ans=(ans*i)%modl;
	}
	return ans;
}

int main()
{
	long long int i,j,k,l,n,m,num,modl;
	cin >> n;
	vector < int ,int > v;


	for(i=0;i<n;i++)
	{
		cin >> m;
		v.insert(make_pair(m,i+1));
	}

	for(i=0;i<n;i++)
	{
		cin >> m;
		v.insert(make_pair(m,i+1));
	}

	cin >> modl;
	sort(v.begin().v.end());
	long long int hold,counter,ans=1;

	for(i=0;i<v.size();i++)
	{
		
	}
	cout << ans%modl << endl;
	return 0;
}
