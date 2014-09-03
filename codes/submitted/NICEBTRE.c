#include<stdio.h>
#include<string.h>
int main()
{
	char arr[10000];
	int num,i,count,j;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		char left[10000]={0};
		char right[10000]={0};
		int height[10000]={0};
		scanf("%s",arr);
		if(strlen(arr)==1 && arr[0]=='l')
			printf("0\n");
		else
		{
			int max=0;
			count=0;
			for(j=0;j<strlen(arr);j++)
			{
				if(arr[j]=='n')
				{
					count++;
					height[j]=count;
				}
				else if(arr[j]=='l')
				{
//					printf("j%d left:%d\n",j,left[j-1]);
//					printf("hoo\n");
//					printf(":: %d\n",count);
//					right[j-1]=1;
//					count--;
					int hold=j-1;
					while(hold>=0)
					{
						if(arr[hold]=='n')
						{
							if(left[hold]!=1)
							{
								left[hold]=1;
								break;
							}
							else if(right[hold]!=1)
							{
								right[hold]=1;
								count--;
							}
						}
						hold--;
					}
				}

//				printf("last: %d\n",count);
				if(count>=max)
					max=count;
			}
			printf("%d\n",max);
		}
	}
	return 0;
}
