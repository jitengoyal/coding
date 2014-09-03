#include<stdio.h>
#include<string.h>
int main()
{
	char arr[105];
	while(scanf("%s",arr)!=EOF)
	{
		if(strlen(arr)==1 && atoi(arr)==1)	
			printf("%d\n",1);
		else
		{
			int len=strlen(arr);
			int borrow=0;
			
		

			if(arr[len-1]!='0')
				arr[len-1]=arr[len-1]-1;
			else
			{
				arr[len-1]='9';
				borrow=1;
			}

			len--;
			while(len>0)
			{
				if(arr[len-1]!='0')
				{
					arr[len-1]=arr[len-1]-borrow;
					borrow=0;
				}
				else if(arr[len-1]=='0' && borrow==1)
				{
					arr[len-1]='9';
					borrow=1;
				}
				len--;
			}
			int carry=0;
			len=strlen(arr);
			while(len>0)
			{
				if(arr[len-1]+arr[len-1]+carry-96>=10)
				{
					arr[len-1]=(arr[len-1]+arr[len-1]+carry-96)%10+48;
					carry=1;
				}
				else
				{
					arr[len-1]=arr[len-1]+arr[len-1]+carry-48;
					carry=0;
				}
				len--;
			}
			if(carry==1)
				printf("%d",carry);
			printf("%s\n",arr);
		}
	}
	return 0;
}

