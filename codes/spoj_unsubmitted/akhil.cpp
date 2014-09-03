#include <iostream>
#include <sstream>
#include <cstdio>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <deque>
#include <bitset>
#include <map>
#include <set>
#include <stack>
#include <list>
#include <vector>
#include <queue>
 
using namespace std;

typedef pair<int,int> pii;
int main()
{
	vector<pii> v;
	for(int i=0;i<10;i++)
	{
		int t;
		cin >> t;
		v.push_back(make_pair(t,i));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<10;i++)
		cout << v[i].first << " " << v[i].second <<"\n";
	vector<pii> l;
	for(int i=0;i<10;i++)
	{
		int t;
		cin >> t;
		l.push_back(make_pair(t,i));
	}
	sort(l.begin(),l.end(),std::greater<pii>());
	for(int i=0;i<10;i++)
		cout << l[i].first << " " << l[i].second <<"\n";

	return 0;
}
