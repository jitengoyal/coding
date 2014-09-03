#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class TheBrickTowerMediumDivTwo
{
	public:
	int[] find(int[] heights)
	{
		int i;
		vector < int > ans;
		vector < pair < int ,int > v;
		for(i=0;i<heights.size();i++)
			v.push_back(make_pair(heights[i],i));
		sort(v,v+v.size());
		for(i=0;i<heights.size();i++)
			ans.push_back(v[i].second);
		for(i=0;i<ans.size();i++)
			cout << ans[i] << endl;
		return 0;
		return ans;
	}
};
