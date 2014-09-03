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
#define sortv(v) sort(v.begin(),v.end())
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
#define rep2(i,a,b) for(i=a;i<b;i++)
#define MP make_pair
#define PB push_back
#define pii  pair<int,int>
#define vi vector<int>
#define si set<int>
#define Si size()
#define mod 1000000007

//for gcd use __gcd(); // inbuilt function

#define sieve(a) ({int b=ceil(sqrt(a));vector<int> d(a,0);vector<int> e;int f=2;e.push_back(2);e.push_back(3);for(int x=1;x<b+1;x++){for(int y=1;y<b+1;y++){int n=(4*x*x)+(y*y);if(n<=a&&(n%12==1||n%12==5)){d[n]^=1;}n=(3*x*x)+(y*y);if(n<=a&&n%12==7){d[n]^=1;}n=(3*x*x)-(y*y);if(x>y&&n<=a&&n%12==11){d[n]^=1;}}}for(int r=5;r<b+1;r++){if(d[r]){for(int i=r*r;i<a;i+=(r*r)){d[i]=0;}}}for(int c=5;c<a;c++){if(d[c]){e.push_back(c);}}e;})



int main()
{
	int x,y,z,i,j,k,n,num,T,m,ans,count,counter,result,p;
	S(n);
	S(k);
	S(p);
	int arr[n];
	vector<int> odd;
	vector<int> even;

	rep(i,n)
	{
		S(arr[i]);
		if(arr[i]%2==0)
			even.PB(arr[i]);
		else
			odd.PB(arr[i]);
	}

	vector<int> res[k];
	int temp=even.size();

	// for even part
	if(temp>=p)
	{
		for(i=0;i<p;i++)
		{
			int ele=even.back();
			even.pop_back();
			res[i].PB(ele);
		}
		temp=temp-p;
		for(i=0;i<temp;i++)
		{
			int ele=even.back();
			even.pop_back();
			res[0].PB(ele);
		}
	}
	else
	{
		int o_s=odd.size();
		for(i=0;i<temp;i++)
		{
			int ele=even.back();
			even.pop_back();
			res[i].PB(ele);
		}
		if((p-temp)*2<=o_s)
		{
			for(i=temp;i<p;i++)
			{
				int ele=odd.back();
				odd.pop_back();
				res[i].PB(ele);
				ele=odd.back();
				odd.pop_back();
				res[i].PB(ele);
			}
		}
		else
		{
			printf("NO\n");
			return 0;
		}
	}

	// for odd part
	temp=odd.size();
	if(temp>=k-p)
	{
		for(i=p;i<k;i++)
		{
			int ele=odd.back();
			odd.pop_back();
			res[i].PB(ele);
		}
		temp=temp-(k-p);
		if(temp%2==0)
		{
			for(i=0;i<temp;i++)
			{
				int ele=odd.back();
				odd.pop_back();
				res[0].PB(ele);
			}
			printf("YES\n");
			for(i=0;i<k;i++)
			{
				int tt=res[i].size();
				printf("%d",tt);
				for(j=0;j<tt;j++)
				{
					printf(" %d",res[i][j]);
				}
				printf("\n");
			}
		}
		else
			printf("NO\n");
	}
	else
		printf("NO\n");
	return 0;
}
