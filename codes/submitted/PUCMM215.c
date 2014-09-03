#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	long long int x,y,num_input;
	char bb;
	while(1)
	{
		num_input=0;
		scanf("%lld",&x);
		scanf("%c",&bb);
		if(bb==' ')
		{
			scanf("%lld",&y);
			num_input=2;
		}
		if(bb=='\n')
			num_input=1;

		
		if(x==0 && y==0)
			break;

		long long int a,b,c,vert,hor,x_cord,y_cord;
		
		if(num_input==1)
		{
			a=(x-1)/23;
			b=(x-1)%23;
			c=a/2;
			x_cord=2,y_cord=1;

			if(a-c > c )
			{
				vert=a-c;
				hor=c;
				x_cord+=b;
			}
			else if(a-c == c )
			{
				vert=hor=c;
				y_cord+=b;
			}

			y_cord=y_cord+(vert*23);
			x_cord=x_cord+(hor*23);
			printf("%lld, %lld\n",x_cord,y_cord);
		}

		else
		{

			long long int z=x+y-2;
			a=(z-1)/23;
			b=(z-1)%23;
			c=a/2;
			x_cord=2,y_cord=1;

			if(a-c > c )
			{
				vert=a-c;
				hor=c;
				x_cord+=b;
			}
			else if(a-c == c )
			{
				vert=hor=c;
				y_cord+=b;
			}

			y_cord=y_cord+(vert*23);
			x_cord=x_cord+(hor*23);

			if(x_cord == x && y_cord==y)
				printf("%lld\n",z);
			else
				printf("No Number\n");
		}
	}
	return 0;
}
