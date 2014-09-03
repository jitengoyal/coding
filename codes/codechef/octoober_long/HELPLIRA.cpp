#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,i,j,k,Ax,Ay,Bx,By,Cx,Cy,max=0,min=1000000000,area,min_index,max_index;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d%d%d%d",&Ax,&Ay,&Bx,&By,&Cx,&Cy);
		area=fabs((Ax*(By-Cy)) + (Bx*(Cy-Ay)) +( Cx*(Ay-By)));
		if(area<=min)
		{
			min=area;
			min_index=i+1;
		}
		if(area>=max)
		{
			max=area;
			max_index=i+1;
		}
		
	}
	printf("%d %d\n",min_index,max_index);
	return 0;
}
