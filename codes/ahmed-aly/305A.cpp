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

#define sieve(a) ({int b=ceil(sqrt(a));vector<int> d(a,0);vector<int> e;int f=2;e.push_back(2);e.push_back(3);for(int x=1;x<b+1;x++){for(int y=1;y<b+1;y++){int n=(4*x*x)+(y*y);if(n<=a&&(n%12==1||n%12==5)){d[n]^=1;}n=(3*x*x)+(y*y);if(n<=a&&n%12==7){d[n]^=1;}n=(3*x*x)-(y*y);if(x>y&&n<=a&&n%12==11){d[n]^=1;}}}for(int r=5;r<b+1;r++){if(d[r]){for(int i=r*r;i<a;i+=(r*r)){d[i]=0;}}}for(int c=5;c<a;c++){if(d[c]){e.push_back(c);}}e;})

typedef long long int li;
int main()
{
		int n,i;
			cin >> n;
				int arr[5]={0};
					while(n>0)
							{
								cin >> i;
								if(i==0)
									arr[0]=1;
								else if(i==100)
									arr[1]=100;
								else if(i<10)
									arr[2]=i;
								else if(i%10==0)
									arr[3]=i;
								else
									arr[4]=i;
								n--;
							}
					vector <int> a;
					if(arr[0])
						a.push_back(0);
					if(arr[1]==100)
						a.push_back(100);
					if(arr[2])
						a.push_back(arr[2]);
					if(arr[3])
						a.push_back(arr[3]);
					if(!arr[2] && !arr[3] && arr[4])
						a.push_back(arr[4]);
					cout << a.size()<<"\n";
					for(i=0;i<a.size()-1;i++)
						cout << a[i] <<" ";
					cout << a[i]<<"\n";
					return 0;
}
