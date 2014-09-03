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

char arr[11][11];
int row,col,steps[11][11],flags[11][11],found,middle,end,middle_ans,end_ans,caught;

void func(int h1,int h2,int e1,int e2,int count)
{
	if(h1==e1 && h2==e2)
	{
		steps[e1][e2]=count;
		found=1;
		return;
	}

	if(h1+1<row && flags[h1+1][h2]!=1 && found==0 && arr[h1+1][h2]!='#')
	{
		flags[h1+1][h2]=1;
		func(h1+1,h2,e1,e2,count+1);
		if(found==1)
		{
			steps[h1][h2]=count;
			return;
		}
	}
	if(h1-1>=0 && flags[h1-1][h2]!=1 && found==0 && arr[h1-1][h2]!='#')
	{
		flags[h1-1][h2]=1;
		func(h1-1,h2,e1,e2,count+1);
		if(found==1)
		{
			steps[h1][h2]=count;
			return;
		}
	}
	if(h2+1<col && flags[h1][h2+1]!=1 && found==0 && arr[h1][h2+1]!='#')
	{
		flags[h1][h2+1]=1;
		func(h1,h2+1,e1,e2,count+1);
		if(found==1)
		{
			steps[h1][h2]=count;
			return;
		}
	}
	if(h2-1>=0 && flags[h1][h2-1]!=1 && found==0 && arr[h1][h2-1]!='#')
	{
		flags[h1][h2-1]=1;
		func(h1,h2-1,e1,e2,count+1);
		if(found==1)
		{
			steps[h1][h2]=count;
			return;
		}
	}
}


void func1(int v1,int v2,int e1,int e2,int count)
{
	if(v1==e1 && v2==e2)
	{
		if(count%2==0)
			count/=2;
		else
			count=(count/2)+1;


		if(steps[v1][v2]==count)
		{
			end=1;
			end_ans=steps[v1][v2];
		}
		else if(steps[v1][v2] > count)
			caught=1;

		found=1;
		return;
	}

	if(v1+1<row && flags[v1+1][v2]!=1 && found==0 && arr[v1+1][v2]!='#')
	{
		flags[v1+1][v2]=1;
		func1(v1+1,v2,e1,e2,count+1);
		if(found==1)
		{
			if(count%2==0)
				count/=2;
			else
				count=(count/2)+1;

			if(steps[v1][v2]==count && middle==0 && count!=0)
			{
		//		printf("hii1\n");
				middle=1;
				middle_ans=steps[v1][v2];
			}
		}
	}
	if(v1-1>=0 && flags[v1-1][v2]!=1 && found==0 && arr[v1-1][v2]!='#')
	{
		flags[v1-1][v2]=1;
		func1(v1-1,v2,e1,e2,count+1);
		if(found==1)
		{
			if(count%2==0)
				count/=2;
			else
				count=(count/2)+1;
			if(steps[v1][v2]==count && middle==0 && count!=0)
			{
		//		printf("hii2\n");
				middle=1;
				middle_ans=steps[v1][v2];
			}
		}
	}
	if(v2+1<col  && flags[v1][v2+1]!=1 && found==0 && arr[v1][v2+1]!='#')
	{
		flags[v1][v2+1]=1;
		func1(v1,v2+1,e1,e2,count+1);
		if(found==1)
		{
			if(count%2==0)
				count/=2;
			else
				count=(count/2)+1;
			if(steps[v1][v2]==count && middle==0 && count!=0)
			{
		//		printf("hii3\n");
				middle=1;
				middle_ans=steps[v1][v2];
			}
		}
	}
	if(v2-1>=0 && flags[v1][v2-1]!=1 && found==0 && arr[v1][v2-1]!='#')
	{
		flags[v1][v2-1]=1;
		func1(v1,v2-1,e1,e2,count+1);
		if(found==1)
		{
			if(count%2==0)
				count/=2;
			else
				count=(count/2)+1;
			if(steps[v1][v2]==count && middle==0 && count!=0)
			{
				middle=1;
				middle_ans=steps[v1][v2];
		//		printf("hii4\n");
			}
		}
	}
	return;
}


int main()
{
	int x,y,z,i,j,k,n,num,T,m,ans,count,counter,result;
	int v1,v2,e1,e2,h1,h2;
	char bb;

	rep(i,11)
	{
		rep(j,11)
		{
			steps[i][j]=0;
			flags[i][j]=0;
		}
	}

	scanf("%d",&row);
	scanf("%d\n",&col);
	rep(i,row)
	{
		rep(j,col)
		{
			scanf("%c",&arr[i][j]);
			if(arr[i][j]=='V')
			{
				v1=i;
				v2=j;
			}
			else if(arr[i][j]=='E')
			{
				e1=i;
				e2=j;
			}
			else if(arr[i][j]=='H')
			{
				h1=i;
				h2=j;
			}
		}
		scanf("%c",&bb);
	}

	count=0;
	found=0;
	flags[h1][h2]=1;
	func(h1,h2,e1,e2,count);
/*	rep(i,row)
	{
		rep(j,col)
		{
			printf("%d ",steps[i][j]);
		}
		printf("\n");
	}*/


	count=0;
	found=0;
	middle=0;
	end=0;
	caught=0;
	rep(i,11)
	{
		rep(j,11)
		{
			flags[i][j]=0;
		}
	}

	flags[v1][v2]=1;
	func1(v1,v2,e1,e2,count);


	if(middle==1)
		P(middle_ans);
	else if(end==1)
		P(end_ans);
	else if(caught==1)
		P(steps[e1][e2]);
	else
		printf("escape\n");

	return 0;
}
