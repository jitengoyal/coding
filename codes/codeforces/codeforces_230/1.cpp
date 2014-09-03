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
	int x,y,z,i,j,k,n,num,T,m,ans,count,counter,result;
	char arr[500];
	scanf("%s",arr);
	int temp=strlen(arr);
	int arr_c[26];
	rep(i,26)
		arr_c[i]=0;

	for(i=0;i<temp;i++)
		arr_c[arr[i]-'a']++;

	int n_count=3,e_count=3,i_count=1,t_count=1;
	if(arr_c[4]==e_count && arr_c[8]==i_count && arr_c[13]==n_count && arr_c[19]==t_count)
		printf("%d\n",1);
	else
	{
		int temp1=0,temp2=0,temp3=0,temp4=0;
		if(arr_c[13]%2==0)
			temp1=(arr_c[13]/2)-1;
		else
			temp1=(arr_c[13]/2);
		temp2=(arr_c[4]/3);
		temp3=(arr_c[8]);
		temp4=(arr_c[19]);
		int hold_ans=min(temp1,min(temp2,min(temp3,temp4)));
		if(hold_ans<0)
			P(0);
		else
			P(hold_ans);
	}
	return 0;
}
