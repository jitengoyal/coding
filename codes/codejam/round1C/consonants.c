#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,num,n;
	scanf("%d",&num);
	char array[1000001];
	for(i=0;i<num;i++)
	{
		scanf("%s",array);
		scanf("%d",&n);
		int a=0;
		int count=0;				//	for iterating
		int str_count=0;			// for counting  strings
		int len=strlen(array);
		while(count<strlen(array))
		{
			int counter=0;				// for cheching the length of consonents
			while(count<strlen(array))
			{
				printf("%d\n",count);
				if(array[count]!='a' && array[count]!='e' && array[count]!='i' && array[count]!='o' && array[count]!='u')
					counter++;
				else
				{
					if(counter<n)
						counter=0;

				}
				if(counter>=n)
				{
					str_count++;
					str_count+=len-count-1;
					break;
				}

				count++;

			}
			a++;
			count=a;
		}
		printf("Case #%d: %d\n",i+1,str_count);
	}
	return 0;
}
