#include<stdio.h>
#include<string.h>
int main()
{
	char codes[10][4];
	codes[0][0]='0',codes[0][1]='6',codes[0][2]='3',codes[1][3]='\0';
	codes[1][0]='0',codes[1][1]='1',codes[1][2]='0',codes[1][3]='\0';
	codes[2][0]='0',codes[2][1]='9',codes[2][2]='3',codes[2][3]='\0';
	codes[3][0]='0',codes[3][1]='7',codes[3][2]='9',codes[3][3]='\0';
	codes[4][0]='1',codes[4][1]='0',codes[4][2]='6',codes[4][3]='\0';
	codes[5][0]='1',codes[5][1]='0',codes[5][2]='3',codes[5][3]='\0';
	codes[6][0]='1',codes[6][1]='1',codes[6][2]='9',codes[6][3]='\0';
	codes[7][0]='0',codes[7][1]='1',codes[7][2]='1',codes[7][3]='\0';
	codes[8][0]='1',codes[8][1]='2',codes[8][2]='7',codes[8][3]='\0';
	codes[9][0]='1',codes[9][1]='0',codes[9][2]='7',codes[9][3]='\0';


	int i,a,b,j,k,flag;
	char arr[100];
	char num[4];
	num[3]='\0';
	while(scanf("%s",arr)!=EOF)
	{
		if(strcmp(arr,"BYE")==0)
			break;

		j=0,a=0,b=0,flag=0,i=0;
		while(i<strlen(arr))
		{
			if(arr[i]!='+' && arr[i]!='=' && flag==0)
			{
				num[j]=arr[i];
				j++;
				if(j==3)
				{
					for(k=0;k<=9;k++)
					{
						if(strcmp(codes[k],num)==0)
						{
							a=a*10+k;
		//					printf("a: %d\n",a);
						}
					}
					j=0;
				}
			}
			if(arr[i]=='+')
				flag=1;
			if(arr[i]!='+' && arr[i]!='=' && flag==1)
			{
				num[j]=arr[i];
				j++;
				if(j==3)
				{
					for(k=0;k<=9;k++)
					{
						if(strcmp(codes[k],num)==0)
						{
							b=b*10+k;
						}
					}
					j=0;
				}

			}
			i++;
		}
		int c=a+b,last,l;
		char res[100];
		int counter=35;
		printf("%s",arr);
		while(c>0)
		{
			last=c%10;
			res[counter]=codes[last][2];
			counter--;
			res[counter]=codes[last][1];
			counter--;
			res[counter]=codes[last][0];
			counter--;
			c=c/10;
		}
		for(l=counter+1;l<=35;l++)
		{
			printf("%c",res[l]);
		}

		printf("\n");
	}
	return 0;
}
