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

int prime[100010];

int main()
{
	int x,y,z,i,j,k,n,num,T,m,ans,count,counter,result,flag;
	prime[0]=prime[1]=0;
	vector < pair < int , int > > end_re;
	for(i=2;i<=100000;i++)
	{
		flag=0;
		j=2;
		while(j*j<=i)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
			j++;
		}
		if(flag)
			prime[i]=1;
		else
			prime[i]=0;
	}
	
	S(n);
	int arr[n][2],arr1[n];
	rep1(i,n+1)
		arr[i][0]=i;
	rep(i,n)
	{
		S(arr1[i]);
		arr[arr1[i]][1]=i;
		
	}
	result=0;
	int near,diff,temp,temp1;
	rep(i,n)
	{
		diff=arr[i+1][1]-i+1;
		if(prime[diff]==1)
		{
			result++;
			end_re.PB(MP(i,arr[i+1][1]));
//			printf("%d %d\n",i,arr[i+1][1]);
			// swap the values in original
			temp=arr1[i];		// value original
			temp1=arr[i+1][1];	// orginal val address
			
			arr1[i]=i+1;		//original arr change
	
			arr[arr1[i]][1]=i;	// address change
		
			arr[temp][1]=temp1;		

			arr1[temp1]=temp;
		}
		for(int j=diff;j>=0;j--)
		{
			if(prime[j]==1)
			{
				result++;
				break;
			}
			else
			{
				result++;
				end_re.PB(MP(i-1+diff,i+diff));
				temp=arr1[i+diff-1];		// value original
				temp1=arr[i+diff-1][1];	// orginal val address

				arr1[i+diff-1]=arr1[i+diff];		//original arr change

				arr[arr1[i+diff]][1]--;	// address change

				arr[temp][1]++;		

				arr1[temp1]=temp;
			}

		}
	}
	P(result);
	return 0;
}
