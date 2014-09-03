#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char a[2000],b[2000];
	while(scanf("%s%s",a,b)!=EOF)
	{
		int arr[26]={0},arr1[26]={0},result[26]={0};
		i=0,j=0;
		while(i<strlen(a))
		{
			arr[a[i]-97]++;
			i++;
		}
		while(j<strlen(b))
		{
			arr1[b[j]-97]++;
			j++;
		}
		for(i=0;i<26;i++)
		{
			if(arr[i]>arr1[i])
				result[i]=arr1[i];
			else if(arr[i]<arr1[i])
				result[i]=arr[i];
			else
				result[i]=arr[i];
		}
		for(i=0;i<26;i++)
		{
			while(result[i]>0)
			{
				printf("%c",i+97);
				result[i]--;
			}
		}
		printf("\n");
	}
	return 0;
}
