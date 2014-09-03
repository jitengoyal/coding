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


//char msg[100000];

int main()
{
	int x,y,z,i,j,k,n,num,T,m,ans,count,counter,result;
	string arr[100000];
	string msg;
	S(n);
	for(i=0;i<n;i++)
		cin >> arr[i];
	cin >> msg;
	int flag=0,flag1=0,curr=0,index,found=0,iter=0,c3=0;
	for(i=0;i<msg.length();i++)
	{
		if(msg[i]=='<')
			flag=1;
		if(msg[i]=='3' && flag==1)
		{
			flag1=1;
			c3++;
		}
		if(flag1==1)
		{
			i+=1;
			index=0;
			while(i<msg.length() && index<arr[curr].length())
			{	
				if(msg[i]==arr[curr][index])
					index++;
				if(index==arr[curr].length())
				{
					curr++;
					found=1;
					break;
				}
				i++;
			}
			if(found==1)
				iter++;
			found=0;
			flag=0;
			flag1=0;
		}
	}
	if(iter==n && c3==n+1)
		cout << "yes" << "\n";
	else
		cout << "no" << "\n";
	return 0;
}
