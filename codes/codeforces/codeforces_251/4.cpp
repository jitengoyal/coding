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


int bin(int arr[],int low,int high,int ele)
{
	if(high<=low)
	{
		int mid=(low+high)/2;
		if(arr[mid]==ele)
			return mid;
		if(mid>=1 && arr[mid]>ele && arr[mid-1]<ele)
			return mid-1;
		if(mid+1<=n-1 && arr[mid]<ele && arr[mid+1]>ele)
			returnd mid;
		if(arr[mid]>ele)
			bin(arr,low,mid-1,ele);
		else
			bin(arr,mid+1,high,ele);

	}
	return -1;
}

int main()
{
	int y,z,i,j,k,n,num,T,m,ans,count,counter,result;
	S(n);
	S(m);
	int arr[n],arr1[m];
	rep(i,n)
		S(arr[i]);
	rep(i,m)
		S(arr1[i]);
	sort(arr,arr+n);
	sort(arr1,arr+m);
	count=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]>arr1[m-1])
			break;
		count+=(arr1[m-1]-arr[i]);
	}
	i=m;
	while(1)
	{
		int res=arr1[i]-arr1[i-1];
		int index=bin(arr,0,n-1,arr[i-1]);

	}
	return 0;
}
