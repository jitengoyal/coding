#include<stdio.h>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int obj[100010];
int path[100010];

int wrong[100010];
int check[100010];

	vector <int> hotels; 
	vector <int> ans; 
	vector <int> ans1; 
int main()
{
	int i,j,k,l,n,m;

	for(i=0;i<100010;i++)
		check[i]=0;

	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&obj[i]);
		if(obj[i]==1)
			hotels.push_back(i+1);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&path[i]);
		if(check[path[i]]==0)
			check[path[i]]=1;
		else
			wrong[path[i]]=1;
			
	}

	int max=1,hold,count;
	for(i=0;i<hotels.size();i++)
	{
		ans.clear();
		count=1;
		hold=hotels[i];
		ans.push_back(hold);
		while(1)
		{
			if(path[hold-1]==0 || wrong[path[hold-1]]==1)
				break;
			hold=path[hold-1];
			if(wrong[hold]!=1)
			{
				count++;
				ans.push_back(hold);
			}
			else
				break;
		}
		if(count>=max)	
		{
			max=count;
			ans1.clear();
			for(int l=0;l<ans.size();l++)
				ans1.push_back(ans[l]);
		}
	}
	printf("%d\n",max);
	int p;
	for( p=ans1.size()-1;p>=1;p--)
		printf("%d ",ans1[p]);
	printf("%d\n",ans1[p]);

	return 0;
}
