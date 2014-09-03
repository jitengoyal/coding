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


void failurefunc(char *pat,int *lps,int m);

void KMPSEARCH(char *pat,char *text)
{
	int flag=0;
	int n=strlen(text);
	int m=strlen(pat);
	int *lps=(int*)malloc(sizeof(int)*m);
	int i=0,j=0;
	failurefunc(pat,lps,m);
	while(i<n)
	{
		if(text[i]==pat[j])
		{
			i++;
			j++;
		}
		if(j==m)
		{
			flag=1;
			cout << "Patten found " << i-j << "\n";
			j=lps[j-1];
		}
		else if(text[i]!=pat[j])
		{
			if(j!=0)
				j=lps[j-1];
			else
				i++;
		}
	}
	if(flag==0)
	{
		cout << "pattern not found\n"; 
	}

}


void failurefunc(char *pat,int *lps,int m)
{
	lps[0]=0;
	int j=1,len=0;
	while(j<m)
	{
		if(pat[len]==pat[j])
		{
			len++;
			lps[j]=len;
			j++;
		}
		else
		{
			if(len==0)
			{
				lps[j]=0;
				j++;
			}
			else
				len=lps[len-1];
		}
	}
	return;
}


int main()
{
	int x,y,z,i,j,k,n,num;
	char text[100],pat[100];
	SS(text);
	SS(pat);
	KMPSEARCH(pat,text);
	return 0;
}
