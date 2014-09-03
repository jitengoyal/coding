#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
 using namespace std;

 int arr[100010]={0};

 int main()
{
	int i,j,k,l,n,m,num,flag=0,a,b;
	vector <int,int> v;
	scanf("%d",&num);
	for(i=0;i<2*n;i++)
	{
		scanf("%d %d",&a,&b);
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end());


	return 0;
}

