#include<stdio.h>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<set>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<map>
#include<list>

using namespace std;

#define S(n) scanf("%d",&n)
#define SS(s) scanf("%s",s)
#define PS(s) printf("%s\n",s)
#define P(n) printf("%d\n",n)
#define Sll(n) scanf("%lld",&n)
#define Pll(n) printf("%lld\n",n)
#define sortv(v) sort(v.begin(),v.end())
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
#define rep2(i,a,b) for(i=a;i<b;i++)
#define MP make_pair
#define PB push_back
#define pii  pair<int,int>
#define pll  pair<long long int,long long int>
#define vi vector<int>
#define vl vector<long long int>
#define si set<int>
#define sl set<long long int>
#define Si size()
#define mod 1000000007

//for gcd use __gcd(); // inbuilt function

#define sieve(a) ({int b=ceil(sqrt(a));vector<int> d(a,0);vector<int> e;int f=2;e.push_back(2);e.push_back(3);for(int x=1;x<b+1;x++){for(int y=1;y<b+1;y++){int n=(4*x*x)+(y*y);if(n<=a&&(n%12==1||n%12==5)){d[n]^=1;}n=(3*x*x)+(y*y);if(n<=a&&n%12==7){d[n]^=1;}n=(3*x*x)-(y*y);if(x>y&&n<=a&&n%12==11){d[n]^=1;}}}for(int r=5;r<b+1;r++){if(d[r]){for(int i=r*r;i<a;i+=(r*r)){d[i]=0;}}}for(int c=5;c<a;c++){if(d[c]){e.push_back(c);}}e;})

long long int func(long long int base ,long long int power)
{
	long long int res=1;
	while(power!=1)
	{
		if(power%2==1)
		{
			power-=1;
			res=(res*base);
		}
		else
		{
			power/=2;
			base=(base*base);
		}
	}
	return (res*base);
}



int main()
{
	int t,i,j;
	long long int l,r,val,count=0,counter,ele,n;
	vi v;
	v=sieve(1000000);
	S(t);
	while(t--)
	{
		count=counter=0;
		Sll(l);Sll(r);
		int arr[r-l+1];
		rep(i,r-l+1)
			arr[i]=0;

		int hold=v.size();
		for(i=0;i<hold;i++)
		{
			for(j=1;j<hold;j++)
			{
				val=func(v[i],v[j]-1);
				if(val>=l && val<=r)
					count++;
				if(val>r)
					break;
			}
		}

		for(i=0;i<hold;i++)
		{
			if(v[i]>r)
				break;

			if((l%v[i])==0)
				ele=l;
			else
				ele=((l/v[i])+1)*v[i];

			if(ele==v[i])
				ele+=v[i];

			while(ele<=r)
			{
				if(arr[ele-l]==0)
				{
					arr[ele-l]=1;
					counter++;
				}
				ele+=v[i];
			}
		}


		if(l>1)
			Pll(count+(r-l+1)-counter);
		else if(l==1)
			Pll(count+(r-l)-counter);
	}
	return 0;
}
