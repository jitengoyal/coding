#include<stdio.h>
#include<utility>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<iostream>
#include<vector>
#include<sstream>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
#define PB push_back
#define MP make_pair
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,b) for(i=0;i<b;i++)
#define rep1(i,b) for(i=1;i<=b;i++)
#define mod 1000000007
#define pi(n) printf("%d",n)
#define pin(n) printf("%d\n",n)
#define piw(n) printf("%d ",n)
#define pll(n) printf("%lld",n)
#define plln(n) printf("%lld\n",n)
#define pllw(n) printf("%lld ",n)
#define sll(n) scanf("%lld",&n)
#define ss(s) scanf("%s",s)
#define ps(s) printf("%s",s)
#define psn(s) printf("%s\n",s)
#define psw(s) printf("%s ",s)
#define si(n) scanf("%d",&n)
#define pn printf("\n")
#define pw printf(" ")
typedef pair<int,int> PII;
typedef vector<PII> VPII;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long LL;
LL a[100005];
LL m,k;
int main()
{
	int n,i,j,t;
	scanf("%d",&t);
	for(int jj=0;jj<t;jj++)
	{
		cin>>n>>m>>k;
		rep(i,n)
		{
			sll(a[i]);
			a[i] = (m-a[i])/k + 1;
		}
		LL rem=0;
		rep(i,n)rem+=a[i];
		rem = rem&1;
		LL ans=0;
		rep(i,n)
		{
			if(a[i]&1)
				ans = max(ans, (a[i]+1)/2);
			else
				ans = max(ans,1-rem + ((a[i])/2));
		}
		plln(ans % mod);
	}
	return 0;
}
