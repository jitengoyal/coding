#include<stdio.h>
#include<string.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);
	char arr[(2*n)+1];
	scanf("%s",arr);
	char arr1[(2*n)+1];
	while(1)
	{

		if((arr[count]=='A' && arr[count+1]=='B') || (arr[count]=='B' && arr[count+1]=='A'))
		{
			arr1[count]='C';
			arr1[count+1]='D';
			if(count-1>0 && arr1[count]==arr1[count-1])
			{
				arr1[count]='D';
				arr1[count+1]='C';
			}
			count+=2;
		}
		else if((arr[count]=='A' && arr[count+1]=='C') || (arr[count]=='C' && arr[count+1]=='A'))
		{
			arr1[count]='B';
			arr1[count+1]='D';
			if(count-1>0 && arr1[count]==arr1[count-1])
			{
				arr1[count]='D';
				arr1[count+1]='B';
			}
			count+=2;
		}
		else if((arr[count]=='A' && arr[count+1]=='D') || (arr[count]=='D' && arr[count+1]=='A'))
		{
			arr1[count]='C';
			arr1[count+1]='B';
			if(count-1>0 && arr1[count]==arr1[count-1])
			{
				arr1[count]='B';
				arr1[count+1]='C';
			}
			count+=2;

		}
		else if((arr[count]=='B' && arr[count+1]=='C') || (arr[count]=='C' && arr[count+1]=='B'))
		{
			arr1[count]='A';
			arr1[count+1]='D';
			if(count-1>0 && arr1[count]==arr1[count-1])
			{
				arr1[count]='D';
				arr1[count+1]='A';
			}
			count+=2;

		}
		else if((arr[count]=='B' && arr[count+1]=='D') || (arr[count]=='D' && arr[count+1]=='B'))
		{
			arr1[count]='A';
			arr1[count+1]='C';
			if(count-1>0 && arr1[count]==arr1[count-1])
			{
				arr1[count]='C';
				arr1[count+1]='A';
			}
			count+=2;

		}
		else if((arr[count]=='C' && arr[count+1]=='D') || (arr[count]=='D' && arr[count+1]=='C'))
		{
			arr1[count]='A';
			arr1[count+1]='B';
			if(count-1>0 && arr1[count]==arr1[count-1])
			{
				arr1[count]='B';
				arr1[count+1]='A';
			}
			count+=2;

		}
		arr1[count]='\0';
		if(count==2*n)
		{
			printf("%s\n",arr1);
			break;
		}
	}
	return 0;
}
