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
	int t,i;
	S(t);
	int arr_s1[26],arr_l1[26],arr_s2[26],arr_l2[26],arr_d1[10],arr_d2[10];
	char arr[10050],arr1[10050];
	while(t--)
	{
		rep(i,26)
		{
			arr_s1[i]=0;
			arr_l1[i]=0;
			arr_s2[i]=0;
			arr_l2[i]=0;
		}
		rep(i,10)
		{
			arr_d1[i]=0;
			arr_d2[i]=0;
		}
		scanf("%s",arr);
		scanf("%s",arr1);
		int temp=strlen(arr);
		for(i=0;i<temp;i++)
		{
			if(arr[i]-'a'>=0 && arr[i]-'a'<=25)
				arr_s1[arr[i]-'a']++;
			else if(arr[i]-'A'>=0 && arr[i]-'A'<=25)
				arr_l1[arr[i]-'A']++;
			else
				arr_d1[arr[i]-'0']++;
		}
		temp=strlen(arr1);
		for(i=0;i<temp;i++)
		{
			if(arr1[i]-'a'>=0 && arr1[i]-'a'<=25)
				arr_s2[arr1[i]-'a']++;
			else if(arr1[i]-'A'>=0 && arr1[i]-'A'<=25)
				arr_l2[arr1[i]-'A']++;
			else
				arr_d2[arr1[i]-'0']++;
		}
		int ans=0;
		for(i=0;i<26;i++)
		{
			ans=ans+min(arr_s1[i],arr_s2[i]);
			ans=ans+min(arr_l1[i],arr_l2[i]);
		}
		for(i=0;i<10;i++)
			ans+=min(arr_d1[i],arr_d2[i]);
		printf("%d\n",ans);
	}
	return 0;
}
