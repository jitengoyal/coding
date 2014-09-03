#include<stdio.h>
#include<string.h>
int main()
{
	int num,i,j,g1,g2;
	char arr[4],arr1[4],teams[16][4];
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		for(j=0;j<16;j++)
		{
			scanf("%s %s %d %d",arr,arr1,&g1,&g2);
			if(g1>g2)
			{
				teams[j][0]=arr[0];
				teams[j][1]=arr[1];
				teams[j][2]=arr[2];
				teams[j][3]='\0';
			}
			else
			{
				teams[j][0]=arr1[0];
				teams[j][1]=arr1[1];
				teams[j][2]=arr1[2];
				teams[j][3]='\0';
			}
		}
		int counter=0,flag;
		char check[4];
		while(1)
		{
			flag=0;
			for(j=0;j<16;j++)
			{
				if(teams[j][0]!='\0' && flag!=1)
				{
					flag=1;
					check[0]=teams[j][0];
					check[1]=teams[j][1];
					check[2]=teams[j][2];
					check[3]=teams[j][3];
				}
				if(teams[j][0]!='\0')
				{
					if(strcmp(check,teams[j])==0)
					{
						counter++;
						teams[j][0]='\0';
					}
				}
			}
			if(counter==4)
			{
				printf("%s\n",check);
				break;
			}
			check[0]='\0';
			counter=0;
		}
	}
	return 0;
}
