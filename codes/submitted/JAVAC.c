#include<stdio.h>
#include<string.h>
int main()
{
	int i,flag_un,flag_cap,flag_st,count,flag_error;
	char str[105],ans[300];
	while(scanf("%s",str)!=EOF)
	{
		flag_un=0,flag_cap=0,flag_st=0,flag_error=0;
		if(str[0] <=122 && str[0] >=97)
			flag_st=1;
		for(i=0;i<strlen(str);i++)
		{
			if(str[i] <= 90 && str[i] >=65 )
				flag_cap=1;
			if(str[i] == '_' )
				flag_un=1;
			if(i+1<strlen(str) && str[i]=='_' && str[i+1]=='_')
				flag_error=1;
		}

		if( (flag_un==1 && flag_cap==1) || (str[0]=='_' ) || (str[strlen(str)-1]=='_') || flag_error==1)
			printf("Error!\n");
		else if(flag_un==0 && flag_cap==0)
			printf("%s\n",str);
		else if(flag_un==0 && flag_cap==1 && flag_st==1)
		{
//			printf("JAVA\n");
			for(i=0;i<strlen(str);i++)
			{
				if(str[i] <= 90 && str[i] >= 65)
				{
					printf("_");
					printf("%c",str[i]+32);
				}
				else
					printf("%c",str[i]);
			}
			printf("\n");

		}
		else if(flag_un==1 && flag_cap==0)
		{
			count=0;
//			printf("C++\n");
			for(i=0;i<strlen(str);i++)
			{
				if(str[i] == '_')
					count=1;
				if(str[i]!='_' && count==0) 
					printf("%c",str[i]);
				else if(str[i]!='_' && count==1)
				{
					printf("%c",str[i]-32);
					count=0;
				}
			}
			printf("\n");
		}
		else
			printf("Error!\n");
	}
	return 0;
}
