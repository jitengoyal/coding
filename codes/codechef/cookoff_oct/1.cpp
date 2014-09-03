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
	long long int x,y,z,i,j,k,n,num,t,l,r,res,mod=1000000007,hold,sum1,sum;
	scanf("%lld",&t);
	long long int arr[10],powers[10];
	powers[0]=1;
	for(i=1;i<10;i++)
		powers[i]=powers[i-1]*10;

	arr[1]=65;
	for(i=2;i<=9;i++)
	{
		arr[i]=((powers[i]/2)*(powers[i]+1))-((powers[i-1]/2)*(powers[i-1]+1));
		arr[i]*=i;
		arr[i]+=powers[i];
	}


	for(i=0;i<t;i++)
	{
	sum=0,sum1=0;
		scanf("%lld%lld",&l,&r);
		for(j=1;j<10;j++)	
		{
			if(r>powers[j])
				sum=(sum+arr[j])%mod;
			else
			{
				if(r==powers[j])
					sum=(sum+arr[j])%mod;
				else
				{
					if(r%2==0)
						r=(r/2)*(r+1);
					else
						r=(r*((r+1)/2));

					hold=r-((powers[j-1]/2)*(powers[j-1]+1));
					hold=hold%mod;
					hold=(hold*(j))%mod;
					sum=(sum+hold)%mod;
				}
				break;
			}
		}
		l--;
		for(j=1;j<10;j++)	
		{
			if(l>powers[j])
				sum1=(sum1+arr[j])%mod;
			else
			{
				if(l==powers[j])
					sum1=(sum1+arr[j])%mod;
				else
				{
//					cout << l << "\n";
					if(l%2==0)
						l=(l/2)*(l+1);
					else
						l=(l*((l+1)/2));

					hold=l-((powers[j-1]/2)*(powers[j-1]+1));
					hold=hold%mod;
					hold=(hold*j)%mod;
					sum1=(sum1+hold)%mod;
				}
				break;
			}
		}
//		printf("sum:%lld\n",sum);
//		printf("sum1:%lld\n",sum1);
		printf("%lld\n",sum-sum1);
	}
	return 0;
}
