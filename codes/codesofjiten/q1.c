#include<stdio.h>
int main()
{
	int a,b,c,arr[3][4],i,j,k,l;
	double x,y,z,d,d1,d2,d3;
	scanf("%d",&l);
	for(k=0;k<l;k++)
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<4;j++)
			{
				scanf("%lf",&arr[i][j]);
			}
		}
	d=(arr[0][0])*((arr[1][1])*(arr[2][2])-(arr[2][1])*(arr[1][2]))+(arr[0][1])*((arr[1][2])*(arr[2][0])-(arr[2][2])*(arr[1][0]))+(arr[0][2])*((arr[1][0])*(arr[2][1])-(arr[2][0])*(arr[1][1]));
        d1=(arr[0][3])*((arr[1][1])*(arr[2][2])-(arr[2][1])*(arr[1][2]))+(arr[0][1])*((arr[1][2])*(arr[2][3])-(arr[2][2])*(arr[1][3]))+(arr[0][2])*((arr[1][3])*(arr[2][1])-(arr[2][3])*(arr[1][1]));
	d2=(arr[0][0])*((arr[1][3])*(arr[2][2])-(arr[2][3])*(arr[1][2]))+(arr[0][3])*((arr[1][2])*(arr[2][0])-(arr[2][2])*(arr[1][0]))+(arr[0][2])*((arr[1][0])*(arr[2][3])-(arr[2][0])*(arr[1][3]));
	d3=(arr[0][0])*((arr[1][1])*(arr[2][3])-(arr[2][1])*(arr[1][3]))+(arr[0][1])*((arr[1][3])*(arr[2][0])-(arr[2][3])*(arr[1][0]))+(arr[0][3])*((arr[1][0])*(arr[2][1])-(arr[2][0])*(arr[1][1]));
			if(d==0)
				printf("Sorry,You are banished\n");
			else
			{
				x=(d1/d);
				y=(d2/d);
				z=(d3/d);
				printf("%lf %lf %lf\n",x,y,z);
			}
	}		
		return 0;
}
	
			
		
