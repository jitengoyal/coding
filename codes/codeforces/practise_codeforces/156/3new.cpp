#include<stdio.h>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector < int > v[1000010];

int main()
{
	int  i,j,k,n,m,num;
	set < int > s;

	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&n);
		v[n].push_back(i);
		s.insert(n);
	}

	int ind1,ind2,len,maxi=1,len1,len2;

	for( std::set <int>:: iterator it=s.begin(); it!=s.end(); ++it)
	{
		for(std::set<int>:: iterator it1=s.begin(); it1!=s.end(); ++it1)
		{
			if(*it != *it1)
			{
				len = 1;
				len1 = v[*it].size();
				len2 = v[*it1].size();
				i = 0;
				j = 0;
				while(i < len1 && j < len2)
				{
					while(j < len2 && i < len1)
					{
						if(v[*it1][j] > v[*it][i])
						{
							len++;
							i++;
							break;
						}
						j++;
					}
					while(i < len1 && j < len2)
					{
						if(v[*it][i] > v[*it1][j])
						{
							len++;
							j++;
							break;
						}
						i++;
					}
				}
				maxi = max(maxi,len);
			}
		}
	}
	printf("%d\n",maxi);
	return 0;
}
