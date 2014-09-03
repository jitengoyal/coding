#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cstring>
#include <string>
#include <set>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdlib>

using namespace std;

#define S(n) scanf("%d",&n)
#define P(n) printf("%d\n",n)
#define SS(str) scanf("%s",str)
#define PS(str) printf("%s\n",str)
#define PB(n) push_back(n)
#define MP(a,b) make_pair(a,b)
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<=n;i++)
#define rep2(i,a,b) for(i=a;i<b;i++)
#define LL long long
#define MOD 1000000007LL
#define pii pair<int,int>
#define SZ(v) v.size()
#define blank printf("\n")

#define sieve(a) ({int b=ceil(sqrt(a));vector<int> d(a,0);vector<int> e;int f=2;e.push_back(2);e.push_back(3);for(int x=1;x<b+1;x++){for(int y=1;y<b+1;y++){int n=(4*x*x)+(y*y);if(n<=a&&(n%12==1||n%12==5)){d[n]^=1;}n=(3*x*x)+(y*y);if(n<=a&&n%12==7){d[n]^=1;}n=(3*x*x)-(y*y);if(x>y&&n<=a&&n%12==11){d[n]^=1;}}}for(int r=5;r<b+1;r++){if(d[r]){for(int i=r*r;i<a;i+=(r*r)){d[i]=0;}}}for(int c=5;c<a;c++){if(d[c]){e.push_back(c);}}e;})

int main()
{
	int i,j,k,l,m,n,t,u;
	S(n);
	if(n == 1)
	{
		S(n);
		P(-1);
		return 0;
	}
	int A[100010],diff;
	int maxc=0,minc=0,maxi=-1,mini=99999999;
	set< int > s;
	set< int >:: iterator it;
	rep(i,n)
		S(A[i]);
	sort(A,A+n);
	rep(i,n-1)
	{
		diff = A[i+1] - A[i];
		s.insert(diff);
		maxi = max(maxi,diff);
		mini = min(mini,diff);
	}
	if(s.size() == 1)
	{
		for(it=s.begin();it!=s.end();it++)
			diff = *it;
		if(diff == 0)
		{
			P(1);
			P(A[0]);
		}
		else if(n == 2 && diff%2 == 0)
		{
			P(3);
			printf("%d %d %d\n",A[0]-diff,A[0]+(diff/2),A[n-1]+diff);
		}
		else/* if(n == 2 && diff%2 != 0)*/
		{
			P(2);
			printf("%d %d\n",A[0]-diff,A[n-1]+diff);
		}
	}
	if(s.size() == 2)
	{
		if(maxi != 2*mini)
		{
			P(0);
			return 0;
		}
		int c1=0,c2=0,ind;
		rep(i,n-1)
		{
			diff = A[i+1] - A[i];
			if(diff == maxi)
			{
				c1++;
				ind = i;
			}
			else if(diff == mini)
				c2++;
		}
		if(c1 == 1 && c2 == n-2)
		{
			P(1);
			P(A[ind]+mini);
		}
		else
			P(0);
	}
	else if(s.size() > 2)
		P(0);
	return 0;
}
