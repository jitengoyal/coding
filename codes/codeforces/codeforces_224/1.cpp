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
	int x,y,z,i,j,k,n,num,T,m,count,counter,result;
	char arr[100000];
	char arr1[100000];
	char ans[100000];
	scanf("%s",arr);
	scanf("%s",arr1);
	int len=strlen(arr);
	int len1=strlen(arr1);
	int flag=0,left=0,right=0;
	for(i=0;i<len;i++)
	{
		if(arr[i]=='|')
		{
			flag=1;
			continue;
		}

		if(flag==0)
			left++;
		else
			right++;
	}
	int val=left-right;
	if(val<0)
		val=val*(-1);

	if(val==len1 || (val==0 && len1%2==0))
	{
		j=0;
		if(left<right)
		{
			for(i=0;i<len;i++)
			{
				if(arr[i]!='|')
				{
					ans[j]=arr[i];
					j++;
				}
				else
				{
					for(int k=0;k<len1;k++)
					{
						ans[j]=arr1[k];
						j++;
					}
					ans[j]=arr[i];
					j++;
				}
			}
			printf("%s\n",ans);
		}
		else if(right<left)
		{
			for(i=0;i<len;i++)
			{
				ans[j]=arr[i];
				j++;
			}
			for(int k=0;k<len1;k++)
			{
				ans[j]=arr1[k];
				j++;
			}
			printf("%s\n",ans);
		}
		else
		{
			for(i=0;i<len;i++)
			{
				if(arr[i]!='|')
				{
					ans[j]=arr[i];
					j++;
				}
				else
				{
					for(int k=0;k<(len1/2);k++)
					{
						ans[j]=arr1[k];
						j++;
					}
					ans[j]=arr[i];
					j++;
				}
			}
			for(int k=(len1/2);k<len1;k++)
			{
				ans[j]=arr1[k];
				j++;
			}
			printf("%s\n",ans);
		}
	}
	else if(val!=len1 && len1>val)
	{
		int count=len1-val;
		if(count%2==0)
		{

		}
	}
	return 0;
}
