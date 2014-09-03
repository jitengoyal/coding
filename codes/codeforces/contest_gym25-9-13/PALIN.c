#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int test,num,i,j,num1=0,temp;
	char a[1000000],b,res[1000010],res1[1000010];
	while(1)
	{
		j=0;
		scanf("%c",&b);
		if(strcmp(b,'0')==0)
			break;

		while(b!='\n')
		{
			a[j]=b;
			j++;
			scanf("%c",&b);
		}
		a[j+1]='\0';
		int len=j;
	

		if(len%2!=0)
		{
			//string is of  even length
			int index=0,flag=0;
			i=0;
			while(index>=0)
			{
				res[i]=a[index];
				i++;
				if(flag==0)
					index++;
				else if(flag==1)
					index--;

				if(index>(len/2))
				{
					flag=1;
					index=index-2;
				}
			}
			res[i]='\0';

			//*******************************************************************************************

			if(strcmp(res,a)>0)
			{
				//if mirrored number is greater than the given input
				printf("%s\n",res);
			}
			else
			{
				//if the mirrored number is not greater than the input

				res1[0]='j';
				index=len/2,i=index+1;
				char add=1,carry=0;
				int total;

				total=(add+carry+a[index])-(48);
				while(index>=0)
				{
					if(total==10)
					{
						carry=1;
						res1[i]='0';
					}
					else
					{
						carry=0;
						res1[i]=total+48;
					}

					index--;
					i--;

					if(index>=0)
						total=(carry+a[index])-48;
				}
				
				if(carry==1)
					res1[0]='1';

				
				res1[(len/2)+2]='\0';
//				printf("%s\n",res1);
//				exit(0);


				i=0,flag=0,index=0;
				while(index>=0)
				{
					if(res1[index]=='j')
					{
						if(flag==0)
							index++;
						else
							index--;
						continue;
					}

					res[i]=res1[index];
					i++;

					if(flag==0)
						index++;
					else if(flag==1)
						index--;

					if(index==(len/2)+1 && res1[0]!='j')
					{
						flag=1;
						index=index-1;
					}
					if(index>(len/2)+1 && res1[0]=='j')
					{
						flag=1;
						index=index-2;
					}
				}

				res[i]='\0';

				int lol=0;
				while(lol<i)
				{
					printf("%c",res[lol]);
					lol++;
				}
				printf("\n");
			}
		}

		else
		{
			//string is of  even length
			int index=0,flag=0;
			i=0;
			while(index>=0)
			{
				res[i]=a[index];
				i++;
				if(flag==0)
					index++;
				else if(flag==1)
					index--;

				if(index==(len/2))
				{
					flag=1;
					index=index-1;
				}
			}
			res[i]='\0';

			if(strcmp(res,a)>0)
				printf("%s\n",res);
			else
			{
				res1[0]='j';
				index=(len/2)-1,i=index+1;
				char add=1,carry=0;
				int total;

				total=(add+carry+a[index])-(48);

				while(index>=0)
				{
					if(total==10)
					{
						carry=1;
						res1[i]='0';
					}
					else
					{
						carry=0;
						res1[i]=total+48;
					}

					index--;
					i--;

					if(index>=0)
						total=(carry+a[index])-48;
				}
				if(carry==1)
					res1[0]='1';

				res1[(len/2)+2]='\0';

//				printf("%s\n",res1);
//				exit(0);

				i=0,flag=0,index=0;
				while(index>=0)
				{
					if(res1[index]=='j')
					{
						if(flag==0)
							index++;
						else
							index--;
						continue;
					}

					res[i]=res1[index];
					i++;

					if(flag==0)
						index++;
					else if(flag==1)
						index--;

					if(index>(len/2) && res1[0]!='j')
					{
						flag=1;
						index=index-2;
					}
					if(index>(len/2) && res1[0]=='j')
					{
						flag=1;
						index=index-1;
					}
				}
				res[i]='\0';

				int lol=0;
				while(lol<i)
				{
					printf("%c",res[lol]);
					lol++;
				}
				printf("\n");

			}
		}		
	}
	return 0;
}
