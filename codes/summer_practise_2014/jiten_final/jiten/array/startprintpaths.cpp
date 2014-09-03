#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;
 
int  numberOfPaths(int m, int n,vector < pair <int,int> > & paths,int i,int j)
{
   if (i == m && j == n)
   {
	   int temp=paths.size();
        for(int i=0;i<temp;i++)
	{
		printf("%d %d\n",paths[i].first,paths[i].second);
	}
		printf("---------------\n");
        return 1;
   }

   if(i>m || j>n)
	   return 0;
 
   int count1,count2;
   paths.push_back(make_pair(i+1,j));
   count1=numberOfPaths(m,n,paths,i+1,j);
   paths.pop_back();
   paths.push_back(make_pair(i,j+1));
   count2=numberOfPaths(m, n,paths,i,j+1);
   paths.pop_back();
   return count1+count2;
}
 
int main()
{
	
    vector < pair < int, int > > paths;
    paths.push_back(make_pair(1,1));
    cout << numberOfPaths(3, 3,paths,1,1);
    printf("\n");
    return 0;
}
