#include<stdio.h>
int main()
{
	int x,y,x1,x2,y2,y1;
	scanf("%d%d",&x,&y);
	if((x>0 && y>0) || (x<0 && y<0))
	{
		x1=0;
		y1=y+x;
		x2=y+x;
		y2=0;
		if(x1<x2)
			printf("%d %d %d %d\n",x1,y1,x2,y2);
		else
			printf("%d %d %d %d\n",x2,y2,x1,y1);
	}
	else
	{
		x1=0;
		y1=y-x;
		x2=-y+x;
		y2=0;
		if(x1<x2)
			printf("%d %d %d %d\n",x1,y1,x2,y2);
		else
			printf("%d %d %d %d\n",x2,y2,x1,y1);
	}
	return 0;
}
