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
#define FORAB(i,a,b) for(i=a;i<b;i++)
#define FORN(i,b) for(i=0;i<b;i++)
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
vector<LL> p;
vector<LL> s;
LL n,g,T,temp;
int main()
{
	sll(T);
	LL i,sum,ans,t;
	while(T--)
	{
		sll(n);
		sum=0,ans=0;
		FORN(i,n)
		{
			sll(temp);
			sum+=temp;
			p.push_back(temp);
		}
		sum-=p[n-1];
		FORN(i,n)
		{
			sll(temp);
			ans+=temp*p[i];
			p.push_back(temp);
		}
		sll(g);
		if(g<=sum)
			ans+=g;
		else
			ans+=sum;
		printf("%lld\n",ans);
	}
	return 0;
}
