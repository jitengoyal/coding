#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
 using namespace std;
 int main()
{
	int i,j,k,l,n,m,num,counter,ans;
	double x1;
	cin >> n >> m;
	int arr[n],lis[n];
	for(i=0;i<n;i++)
		lis[i]=1;

	for(i=0;i<n;i++)
		scanf("%d%lf",&arr[i],&x1);

	ans=lis[0];
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[i]>=arr[j])
				lis[i]=max(lis[i],lis[j]+1);
		}
		ans=max(lis[i],ans);
	}
	cout << n-ans << endl;
	return 0;
}

