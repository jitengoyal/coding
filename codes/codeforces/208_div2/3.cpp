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

int arr[100000];

int main()
{
	int x,y,z,i,j,k,n,num,T,m,ans,count,counter,result;
	vi v;
	vi v1;
	S(n);
	rep(i,n)
		S(arr[i]);

	int flag=0;
	for(i=0;i<n;i++)
	{

		if(arr[i]!=0)
		{
			v.PB(arr[i]);
			v1.PB(arr[i]);
		}
		else
		{
			if(v.size()==0)
			{
				printf("0\n");
			}
			else if(v.size()==1)
			{
				cout << "pushStack" << "\n";
				cout << 1 << " popStack" << "\n";

			}
			else if(v.size()==2)
			{
				cout << "pushStack" << "\n";
				cout  << "pushQueue" << "\n";
				cout << 2 << " popStack" << " popQueue" << "\n";
			}
			else if(v.size()==3)
			{
				cout << "pushStack" << "\n";
				cout  << "pushQueue" << "\n";
				cout << "pushFront" << "\n";
				cout << 3 << " popStack" << " popQueue" << " popFront" << "\n";
			}
			else
			{
				int flg1=0,flg2=0,flg3=0;
				sortv(v1);
				int max3=v1[v.size()-1];
				int max2=v1[v.size()-2];
				int max1=v1[v.size()-3];
				for(j=0;j<v.size();j++)
				{
					if(v[j]==max1 && flg1!=1) 
					{
						cout << "pushStack" <<"\n";
						flg1=1;
						continue;
					}
					if(v[j]==max2 && flg2!=1)
					{
						cout << "pushQueue" <<"\n";
						flg2=1;
						continue;
					}
					if(v[j]==max3 && flg3!=1)
					{
						cout << "pushFront" <<"\n";
						flg3=1;
						continue;
					}
					else
						cout << "pushBack" <<"\n";
				}
				cout << 3 << " popStack" << " popQueue" << " popFront" <<"\n";
			}
			v.clear();
			v1.clear();
		}
	}

	if(arr[n-1]!=0)
	{
		if(v.size()==1)
		{
			cout << "pushStack" << "\n";

		}
		else if(v.size()==2)
		{
			cout << "pushStack" << "\n";
			cout  << "pushQueue" << "\n";
		}
		else if(v.size()==3)
		{
			cout << "pushStack" << "\n";
			cout  << "pushQueue" << "\n";
			cout << "pushFront" << "\n";
		}
		else
		{
			sortv(v1);
			int max3=v[v.size()-1];
			int max2=v[v.size()-2];
			int max1=v[v.size()-3];
			for(j=0;j<v.size();j++)
			{
				if(v[j]==max1)
					cout << "pushStack" <<"\n";
				else if(v[j]==max2)
					cout << "pushQueue" <<"\n";
				else if(v[j]==max3)
					cout << "pushFront" <<"\n";
				else
					cout << "pushBack" <<"\n";
			}

			v.clear();
			v1.clear();
		}
}
return 0;
}
