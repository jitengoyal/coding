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
#define SS(s) scanf("%s",&s)
#define P(n) printf("%d\n",n);
#define Sll(n) scanf("%lld",&n)
#define Pll(n) printf("%lld\n",n);
#define sort(v) sort(v.begin(),v.end())
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
#define rep2(i,a,b) for(i=a;i<b;i++)
#define MP make_pair
#define PB push_back
#define pii   pair<int,int>
#define pll   pair<long long int,long long int>
#define vi vector<int>
#define vl vector<long long int>
#define si set<int>
#define sl set<long long int>
#define Si size()

//for gcd use __gcd(); // inbuilt function

#define sieve(a) ({int b=ceil(sqrt(a));vector<int> d(a,0);vector<int> e;int f=2;e.push_back(2);e.push_back(3);for(int x=1;x<b+1;x++){for(int y=1;y<b+1;y++){int n=(4*x*x)+(y*y);if(n<=a&&(n%12==1||n%12==5)){d[n]^=1;}n=(3*x*x)+(y*y);if(n<=a&&n%12==7){d[n]^=1;}n=(3*x*x)-(y*y);if(x>y&&n<=a&&n%12==11){d[n]^=1;}}}for(int r=5;r<b+1;r++){if(d[r]){for(int i=r*r;i<a;i+=(r*r)){d[i]=0;}}}for(int c=5;c<a;c++){if(d[c]){e.push_back(c);}}e;})



int main()
{
	long long int x,y,z,i,j,k,n,num,t,sum,arr[65][11],N;
	sum=0;
	for(j=1;j<=64;j++)
	{
		for(k=0;k<=9;k++)
		{
			if(j==1)
			{
				arr[j][k]=1;
				sum+=arr[j][k];
			}
			else
			{
				if(k==0)
				{
					arr[j][k]=sum;
					sum=arr[j][k];
				}
				else
				{
					arr[j][k]=arr[j][k-1]-arr[j-1][k-1];
					sum+=arr[j][k];
				}
			}
		}
		arr[j][k]=sum;
	}


	Sll(t);
	while(t--)
	{
		Sll(i);
		Sll(N);
		printf("%lld %lld\n",i,arr[N][10]);
	}
	return 0;
}