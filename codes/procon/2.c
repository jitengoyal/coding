#include<stdio.h>
#include<math.h>

float dist(float,float,float,float);

int main()
{
	int i,j,k,l,num;
	float x1,y1,x2,y2,x3,y3,x4,y4;
	float mx1,my1,mx2,my2,mx3,my3,mx4,my4,c1,c2,c3,c4;
	float d1,d2,d3,d4;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%f%f%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		
		d1 = dist(x1,y1,x2,y2);
		d2 = dist(x2,y2,x3,y3);
		d3 = dist(x3,y3,x4,y4);
		d4 = dist(x4,y4,x1,y1);

		mx1 = x2 - x1;
		my1 = y2 - y1;
		mx2 = x3 - x2;
		my2 = y3 - y2;
		mx3 = x4 - x3;
		my3 = y4 - y3;
		mx4 = x1 - x4;
		my4 = y1 - y4;
		

		c1 = (((y1-y2)*(x3-x2)) - ((y3-y2)*(x1-x2)));
		c2 = (((y4-y2)*(x3-x2)) - ((y3-y2)*(x4-x2)));
		c3 = (((y3-y1)*(x2-x1)) - ((y2-y1)*(x3-x1)));
		c4 = (((y4-y1)*(x2-x1)) - ((y2-y1)*(x4-x1)));
		
		

		if(c1*c2 == 0.0 || c3*c4 == 0.0)
		{
			printf("NONE\n");
		}
		else
		{
			if(d1 == d2 && d2 == d3 && d3 == d4)
			{
				if(my1*my2 == -1.0*mx2*mx1 && my2*my3 == -1.0*mx2*mx3)
				{
					printf("SQUARE\n");
				}
				else if(my1*mx3 == mx1*my3 && my2*mx4 == mx2*my4 && my1*my2 != -1.0*mx2*mx1)
				{
					printf("RHOMBUS\n");
				}
				else
				{	
					printf("QUADRILATERAL\n");
				}
			}

			else if(d1 == d3 && d2 == d4 && d1 != d2)
			{

				if(my1*my2 == -1.0*mx2*mx1 && my2*my3 == -1.0*mx2*mx3)
				{
					printf("RECTANGLE\n");
				}
				else if(my1*mx3 == mx1*my3 && my2*mx4 == mx2*my4 && my1*my2 != -1.0*mx2*mx1)
				{
					printf("PARALLELOGRAM\n");
				}
				else
				{	
					printf("QUADRILATERAL\n");
				}
			}

			else
			{	
				printf("QUADRILATERAL\n");
			}
		}

	}

	return 0;
}

float dist(float x1,float y1,float x2,float y2)
{
	float f;
	float x = x2 - x1;
	float y = y2 - y1;
	f = (x*x) + (y*y);

	return f;
}
