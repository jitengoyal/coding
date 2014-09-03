#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j,k,row_len_1,row_len_2,no_row,l,m;
	char key[15],text[300],**res;
	while(scanf("%s%s",key,text)!=EOF)
	{
		int len_key=strlen(key);
		int len_text=strlen(text);

		if((len_key)%2==0)
		{
			row_len_1=((len_key)+(len_key)/2);
			row_len_2=((len_key)+(len_key)/2);
		}
		else if((len_key)%2!=0)
		{
			row_len_1=((len_key+1)+(len_key)/2);
			row_len_2=((len_key+1)+(len_key)/2)-1;
		}
		
		
		no_row=(len_text)/(row_len_1+row_len_2);
		no_row*=2;

		int rem=(len_text)%(row_len_1+row_len_2);

		if(rem>row_len_1)
			no_row+=2;
		else
			no_row+=1;

		res=(char**)malloc(sizeof(char*)*(no_row*2));

		for(i=0;i<no_row;i++)
		{
			res[i]=(char*)malloc(sizeof(char)*row_len_1);
		}

		for(i=0;i<no_row;i++)
		{
			for(j=0;j<row_len_1;j++)
			{
				res[i][j]=0;
			}
		}
		int hold;
		j=0,k=0;
		for(i=0;i<len_text;i++)
		{
			res[j][k]=text[i];
			hold=k;
			k++;
			if(k==row_len_1 && j%2==0)
			{
				j++;
				k=0;
			}
			else if(k==row_len_2 && j%2!=0)
			{
				j++;
				k=0;
			}
		}


		j=0;
		while(j<len_key)
		{
			for(k=0;k<len_key;k++)
			{	
				if(key[k]-48==j+1)
					break;
			}
			j++;
			
			l=0;

			while(l<no_row)
			{
				if(l%2==0)
				{
					if((k)%2==0)
						m=((k)/2)*3;
					else
						m=(((k)/2)+1)*2+(k)/2;
				}
				else
				{
					if((k)%2==0)
						m=((k)/2)*3;
					else
						m=(((k)/2)+1)*1+((k)/2)*2;
				}
				if(l%2==0 && k%2==0)
				{
					if(res[l][m]!=0)
						printf("%c",res[l][m]);
					if(res[l][m+1]!=0)
						printf("%c",res[l][m+1]);
				}
				else if(l%2==0 && k%2!=0)
				{
					if(res[l][m]!=0)
						printf("%c",res[l][m]);
				}
				else if(l%2!=0 && k%2==0)
				{
					if(res[l][m]!=0)
						printf("%c",res[l][m]);
				}
				else if(l%2!=0 && k%2!=0)
				{
					if(res[l][m]!=0)
						printf("%c",res[l][m]);
					if(res[l][m+1]!=0)
						printf("%c",res[l][m+1]);
				//	printf("%c%c",res[l][m],res[l][m+1]);
				}
				l++;
			}
		}
		printf("\n");
	}
	return 0;
}
