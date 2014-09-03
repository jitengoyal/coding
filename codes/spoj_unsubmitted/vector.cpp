#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
	set < int > s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(4);
	s.insert(5);
/*	for(set<int>::iterator it=s.begin();it!=s.end();++it)
	{
		cout << *it << endl;
	}*/
	return 0;
}
