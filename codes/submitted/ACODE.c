#include<stdio.h>
#include<string.h>
int main()
{
	long long int count1,count2,hold;
	int len,i;
	char arr[5200];
	while(scanf("%s",arr)!=EOF)
	{
		len=strlen(arr);
		if(len==1 && arr[0]=='0')
			break;

		count1=1;
		count2=0;
		for(i=1;i<len;i++)
		{
			if( ( ( (arr[i]-48)+( (arr[i-1]-48)*10))<=26) && ((arr[i]-48)+((arr[i-1]-48)*10))>0)
			{
				if(arr[i]-48==0)
				{
					count2=count1;
					count1=0;
				}
				else if(arr[i-1]-48==0)
				{
					if(count1==0 && count2==0)
					{
						count1=1;
						count2=0;
					}
					else
					{
						count1=count2;
						count2=0;
					}
				}
				else
				{
					hold=count2;
					count2=count1;
					count1=count1+hold;
				}
			}
			else if((arr[i-1]-48)*10+(arr[i]-48)==0)
			{
				count1=0;
				count2=0;
			}
			else
			{
				if(arr[i]-48==0)
				{
					count1=0;
					count2=0;
				}
				else
				{
					count1=count1+count2;
					count2=0;
				}
			}
//			printf("%lld %lld\n",count1,count2);
		}
		printf("%lld\n",count1+count2);
	}
	return 0;
}
