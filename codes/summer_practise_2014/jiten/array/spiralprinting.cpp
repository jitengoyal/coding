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



int main()
{
	int x,y,z,i,j,k,n,num,T,m,ans,count,counter,result;
	S(n);
	S(m);
//	int arr[n][m];
	char arr[n][m];
/*	rep(i,n)
	{
		rep(j,m)
			S(arr[i][j]);
	}*/
	int s_r=0;
	int s_c=0;
	int e_r=n-1;
	int e_c=m-1;
	
	int flag=0;
	char to_print;
	while(s_r <= e_r && s_c <= e_c)
	{
		if(!flag)
			to_print='X';
		else
			to_print='O';

		flag=(flag+1)%2;
		//printing frst left row
		for(i=s_c;i<=e_c;i++)
		{
			arr[s_r][i]=to_print;
		}
		s_r++;

		// printing last left cloumn;
		for(i=s_r;i<=e_r;i++)
			arr[i][e_c]=to_print;
		e_c--;

		//printing last left row
		for(i=e_c;i>=s_c;i--)
			arr[e_r][i]=to_print;
		e_r--;

		//printing frst left column
		for(i=e_r;i>=s_r;i--)
			arr[i][s_c]=to_print;
		s_c++;
	}
	rep(i,n)
	{
		rep(j,m)
		{
			printf("%c ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
