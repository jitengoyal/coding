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

int find_piv(int* arr,int low,int high,int n)
{
	if(high<low)
		return -1;

	int mid=(low+high)/2;

	if (mid < high && arr[mid] > arr[mid + 1])
		return mid;
	if (mid > low && arr[mid] < arr[mid - 1])
		return (mid-1);

	if(arr[low]<arr[mid])
		return find_piv(arr,mid+1,high,n);
	else
		return find_piv(arr,low,mid-1,n);
}


int findnum(int* arr,int low,int high,int ele)
{
	if(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==ele)
			return mid;
		if(ele>arr[mid])
			return findnum(arr,mid+1,high,ele);
		else
			return findnum(arr,low,mid-1,ele);
	}
	return -1;
}

int findele(int* arr ,int size,int ele)
{
	int piv=find_piv(arr,0,size-1,size);
	P(piv);
	exit(0);
	if(ele==arr[piv])
		return piv;
	if(arr[0]>ele)
		return findnum(arr,piv+1,size-1,ele);
	else
		return findnum(arr,0,piv-1,ele);
}

int main()
{
	int x,y,z,i,j,k,n,num,T,m,ans,count,counter,result;
	S(n);
	int arr[n];
	rep(i,n)
		S(arr[i]);
	int ele;
	S(ele);
	int ind=findele(arr,n,ele);
	if(ind==-1)
		printf("ele does not exist\n");
	else
		P(ind);
	return 0;
}
