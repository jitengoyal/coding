#include<stdio.h>
#include<string.h>
int main()
{
	int num,i,flag,j,val;
	char arr[1010];
	int count[27];
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		flag=0;
		for(j=0;j<27;j++)
			count[j]=0;
		scanf("%s",arr);
		int len=strlen(arr);
		for(j=0;j<len/2;j++)
		{
			count[arr[j]-'a'+1]++;
		}
		val=len/2;
		if(len%2!=0)
			val++;
		for(j=val;j<len;j++)
		{
			if(count[arr[j]-'a'+1]>0)
				count[arr[j]-'a'+1]--;
			else
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
