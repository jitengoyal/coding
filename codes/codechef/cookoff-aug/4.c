#include<stdio.h>
int func(int a,int b,int c,int d)
{
	return ((c-a)*(c-a))+((d-b)*(d-b));
}
int main()
{
	int num,count=0,i,j,temp1,temp2,temp3,x1,x2,x3,y1,y2,y3;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
		temp1=func(x1,y1,x2,y2);
		temp2=func(x2,y2,x3,y3);
		temp3=func(x1,y1,x3,y3);
		if(temp1+temp2==temp3 || temp2+temp3==temp1 || temp1+temp3==temp2)
			count++;
	}
	printf("%d\n",count);
	return 0;
}

