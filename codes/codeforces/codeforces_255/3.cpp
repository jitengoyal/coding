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


int arr[100010];

int main()
{
	int x,y,z,i,j,k,n,num,T,m,ans,count,counter,result;
	S(n);
	rep(i,n)
		S(arr[i]);

	int start,end,l_max_len=1,flag,max_till,updater,r_max_len=1;
	if(n==1)
	{
		P(1);
		return 0;
	}
	else if(n==2)
	{
		P(2);
		return 0;
	}

	else
	{
		l_max_len=1;
		for(i=0;i<n;i++)
		{
			max_till=arr[i];
			if(max_till==0)
				continue;

			flag=0;
			start=i;
			end=i+1;
			while(1)
			{
				if(end==n)
					break;
				if(max_till==0)
					break;

				if(arr[end]>max_till)
				{
					max_till=max(max_till,arr[end]);
					end++;
					updater=end;
				}
				else if(arr[end]<=max_till && flag==1)
					break;
				else if(arr[end]<=max_till && flag==0)
				{
					updater=end;
					end++;
					max_till+=1;
					flag=1;
				}
			}
			l_max_len=max(l_max_len,end-start);
			if(end==n)
				break;
			i=updater-1;;
		}
		for(i=n-1;i>=0;i--)
		{
			max_till=arr[i];
			if(max_till==1000000000)
				continue;

			flag=0;
			start=i;
			end=i-1;
			while(1)
			{
				if(end==0)
					break;
				if(max_till==1000000000)
					break;

				if(arr[end]<max_till)
				{
					max_till=min(max_till,arr[end]);
					end--;
					updater=end;
				}
				else if(arr[end]>=max_till && flag==1)
					break;
				else if(arr[end]>=max_till && flag==0)
				{
					updater=end;
					end--;
					max_till-=1;
					flag=1;
				}
			}
			r_max_len=max(r_max_len,start-end);
			if(end==0)
				break;
			i=updater+1;;
		}
		P(max(l_max_len,r_max_len));
	}
	return 0;
}
