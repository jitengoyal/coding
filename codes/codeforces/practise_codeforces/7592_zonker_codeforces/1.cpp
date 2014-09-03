#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>

 using namespace std;
 int main()
{
	int i,j,k,l,n,m,num,flag=0;
	cin >> n;
	int counter=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		if(m==1)
			flag=1;
		if(flag==0)
			counter++;
	}
	cout << counter << "\n";
	return 0;
}

