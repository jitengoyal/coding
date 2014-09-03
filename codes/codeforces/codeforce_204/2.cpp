#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int check[100010];
int arr[100010];
int diff[100010];

int main()
{
	int i,j,k,l,m,n,flags[100010]={0};
	vector < vector <int> > v;
	vector <int> occur;
	for(i=0;i<100010;i++)
	{
		check[i]=0;
		diff[i]=0;
		vector<int> row;
		v.push_back(row);
	}

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(check[arr[i]]==0)
		{
			check[arr[i]]=1;
			occur.push_back(arr[i]);
		}


		if(v[arr[i]].size()==0)
			v[arr[i]].push_back(i);
		else if(v[arr[i]].size()==1)
		{
			int len=v[arr[i]].size();
			v[arr[i]].push_back(i);
			int hold=i-v[arr[i]][len-1];
			diff[arr[i]]=hold;
		}
		else
		{
			int len=v[arr[i]].size();
			if(flags[arr[i]]!=-1)
			{
				if(v[arr[i]][len-1]-v[arr[i]][len-2]==i-v[arr[i]][len-1])
					v[arr[i]].push_back(i);
				else
					flags[arr[i]]=-1;
			}
		}
	}

	int count=0;
	sort(occur.begin(),occur.end());
	for(i=0;i<occur.size();i++)
	{
		if(flags[occur[i]]==0)
			count++;
	}
	printf("%d\n",count);
	for(i=0;i<occur.size();i++)
	{
		if(flags[occur[i]]==0)
			printf("%d %d\n",occur[i],diff[occur[i]]);
	}
	return 0;
}
