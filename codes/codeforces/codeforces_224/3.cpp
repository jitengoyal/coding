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
#define mod 1000000007

//for gcd use __gcd(); // inbuilt function

#define sieve(a) ({int b=ceil(sqrt(a));vector<int> d(a,0);vector<int> e;int f=2;e.push_back(2);e.push_back(3);for(int x=1;x<b+1;x++){for(int y=1;y<b+1;y++){int n=(4*x*x)+(y*y);if(n<=a&&(n%12==1||n%12==5)){d[n]^=1;}n=(3*x*x)+(y*y);if(n<=a&&n%12==7){d[n]^=1;}n=(3*x*x)-(y*y);if(x>y&&n<=a&&n%12==11){d[n]^=1;}}}for(int r=5;r<b+1;r++){if(d[r]){for(int i=r*r;i<a;i+=(r*r)){d[i]=0;}}}for(int c=5;c<a;c++){if(d[c]){e.push_back(c);}}e;})



int main()
{
	int x,y,z,i,j,k,n,num,T,m,ans,counter,result;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	sort(arr,arr+n);
	if(n==1)
	{
		P(-1);
		return 0;
	}
	int diff1,diff2,count=0,maxv=0,minv=99999999,diff;
	for(i=0;i<n-1;i++)
	{	
		diff=arr[i+1]-arr[i];	
		maxv=max(maxv,diff);
		minv=min(minv,diff);
		printf(":%d\n",diff);
		if(count==0)
		{
			diff1=diff;
			count++;
		}
		else if(count==1 && diff!=diff1)
		{
			diff2=diff;
			count++;
		}
		else if(count==2 && diff2!=diff)
			count++;
	}
	printf(":%d\n",count);
	if(count==1)
	{
		if(diff1==0)
		{
			printf("%d\n",1);
			printf("%d\n",arr[0]);
		}
		else if(n==2 && diff1%2==0)
		{
			printf("%d\n",3);
			printf("%d %d %d\n",arr[0]-diff1,arr[0]+(diff1/2),arr[1]+diff1);
		}
		else
		{
			printf("%d\n",2);
			printf("%d %d\n",arr[0]-diff1,arr[n-1]+diff1);
		}
	}
	else if(count==2)
	{
		if(maxv!=2*minv)
			printf("%d\n",0);
		else
		{
			int val,cc1=0,cc2=0;
			for(i=0;i<n-1;i++)
			{
				if((arr[i+1]-arr[i])==minv)
				{
					cc1++;
				}
				if((arr[i+1]-arr[i])==maxv)
				{
					cc2++;
					val=i;
				}
			}
			if(cc1==n-2 && cc2==1)
			{
				printf("%d\n",1);
				printf("%d\n",arr[val]+minv);
			}
			else
				printf("0\n");
		}
	}
	else
		printf("0\n");
	return 0;
}
