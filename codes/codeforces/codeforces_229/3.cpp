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
	int x,y,z,i,j,k,n,num,T,m,ans,count,counter,result,l,r,w;
	S(n);
	S(k);
	S(w);
	int dp_arr[100005];
	char arr[100005];
	scanf("%s",arr);


	if(arr[0]=='1' && k==1)
		dp_arr[0]=0;
	if(arr[0]=='1' && k!=1)
		dp_arr[0]=1;

	printf("heh %d\n",dp_arr[0]);
	int j_count;
	for(i=0;i<w;i++)
	{
		S(l);
		S(r);
		j_count=0;
		int flag;

		for(j=1;j<n;j++)
		{
			if(j_count!=0)
			{
				if((j-l+1)%k==0)
					flag=1;
				else
					flag=0;

			}
			if(j_count==0)
			{
				if((j+2-l)%k==0)
				{
					flag=1;
					j_count=1;
				}
				else
					flag=0;
			}
			if(flag==0)
			{
				if(arr[j+1]=='1')
					dp_arr[j]=dp_arr[j-1]+1;
				else
					dp_arr[j]=dp_arr[j-1];
				printf("j:%d %d\n",j,dp_arr[j]);
			}
			else
			{
				if(arr[j+1]=='0')
					dp_arr[j]=dp_arr[j-1]+1;
				else
					dp_arr[j]=dp_arr[j-1];
				printf("j :%d %d\n",j,dp_arr[j]);
			}
		}
	}
	return 0;
}
