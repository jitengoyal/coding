#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cstring>
#include <string>
#include <set>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdlib>

using namespace std;

#define S(n) scanf("%d",&n)
#define P(n) printf("%d\n",n)
#define SS(str) scanf("%s",str)
#define PS(str) printf("%s\n",str)
#define PB(n) push_back(n)
#define MP(a,b) make_pair(a,b)
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<=n;i++)
#define rep2(i,a,b) for(i=a;i<b;i++)


int main()
{
	int i,j,k,l,m,n,t,u,o,count,counter;
	char st1[100],st2[100],str3[100];
	char chji;
	scanf("%c",&chji);
	n = 0,m = 0;
	while(chji != '|')
	{
		st1[n++] = chji;
		scanf("%c",&chji);
	}
	scanf("%c",&chji);
	while(chji != '\n')
	{
		st2[m++] = chji;
		scanf("%c",&chji);
	}
	t = 0;
	scanf("%c",&chji);
	while(chji != '\n')
	{
		str3[t++] = chji;
		scanf("%c",&chji);
	}
	o = t;
	i = abs(n-m);
	t -= i;
	if(t<0 || t%2==1)
		printf("Impossible\n");
	else
	{
		if(n<=m)
		{
			for(i=0;i<n;i++)
				printf("%c",st1[i]);
			rep(i,(t/2)+(abs(n-m)))
				printf("%c",str3[i]);
			printf("|");
			for(i=0;i<m;i++)
				printf("%c",st2[i]);
			rep2(i,(t/2)+(abs(n-m)),o)
				printf("%c",str3[i]);
			printf("\n");		
		}
		else
		{
			for(i=0;i<n;i++)
				printf("%c",st1[i]);
			for(i=0;i<t/2;i++)
				printf("%c",str3[i]);
			printf("|");
			for(i=0;i<m;i++)
				printf("%c",st2[i]);
			rep2(i,(t/2),o)
				printf("%c",str3[i]);
			printf("\n");
		}
	}
	return 0;
}
