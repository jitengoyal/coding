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


int arr[100020];
bool check[100020];

long long int mul(long long int base1,long long int power1)
{
	long long int result = 1;
	long long int base = base1;
	long long int power = power1;
	while(power>1)
	{
		if(power&1)
		{
			result=(result*base)%mod;
			power--;
		}
		else
		{
			base= (base*base)%mod;
			power/=2;
		}
	}
	return (result*base)%mod;
}

int main()
{
	vi primes=sieve(100000);
	int te = primes.size()-1;
	int x,y,z,i,j,k,n,num,T,m,ans,counter,result,count;
	S(T);
	
	while(T--)
	{
		map <int,int> hs;
		S(n);
		rep(i,n)
		{
			S(arr[i]);
			check[i]=false;
		}
		for(i=0;i<n;i++)
		{
			counter = 0;
			if(!check[i])
			{
				num = arr[i];
				counter++;
				while(num!=i+1)
				{
					check[num-1] = true;
					num = arr[num-1];	
					counter++;
				}
				check[num-1] = true;
			}
			while(counter>1)
			{
				for(int st=0;st<te;st++)
				{
					count = 0 ;
					if(counter%primes[st]==0)
					{
						while(counter%primes[st]==0 && counter>1)
						{
							count++;	
							counter/=primes[st];

						}
					}
					if(hs[primes[st]]==0)
						hs[primes[st]]=count;
					else
						hs[primes[st]]=max(count,hs[primes[st]]);
					if(counter==1)
						break;
				}
			}
			
		}
		map<int,int>::iterator it;
		long long int aa_ans=1;
		for(it=hs.begin();it!=hs.end();it++)
		{
//			printf("hh %d\n",it->first);
			if(it->second>=1)
			{
				aa_ans*=(mul(it->first,it->second));
				aa_ans%=mod;
			}
		}
		Pll(aa_ans);
	}
	return 0;
}
