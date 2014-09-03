#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;
 
int  numberOfPaths(int m, int n,vector < pair <int,int> > & paths)
{
   if (m == 1 || n == 1)
   {
	   int temp=paths.size();
        for(int i=0;i<temp;i++)
	{
		printf("%d %d\n",paths[i].first,paths[i].second);
	}
		printf("---------------\n");
        return 1;
   }
 
   int count1,count2;
   paths.push_back(make_pair(m-1,n));
   count1=numberOfPaths(m-1, n,paths);
   paths.pop_back();
   paths.push_back(make_pair(m,n-1));
   count2=numberOfPaths(m, n-1,paths);
   paths.pop_back();
   return count1+count2;
}
 
int main()
{
	
    vector < pair < int, int > > paths;
    paths.push_back(make_pair(3,3));
    cout << numberOfPaths(3, 3,paths);
    printf("\n");
    return 0;
}
