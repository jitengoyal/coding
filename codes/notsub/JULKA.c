#include<stdio.h>
#include<string.h>
int main()
{
	int test;
	char arr[105],arr1[105],a,b,arr2[105],arr3[105],arr4[105],arr5[105],arr6[105];
	int i,j,k,n,l,lll;
	for(test=0;test<10;test++)
	{
		i=0,j=0;
		scanf("%c",&a);
		while(a!='\n')
		{
			if(a!=' ')
			{
				arr5[i]=a;
				arr[i]=a;
				i++;
				//		printf("ii%d\n",i);
			}
			scanf("%c",&a);
		}
		arr[i]='\0';
		arr5[i]='\0';
		scanf("%c",&a);
		while(a!='\n')
		{
			if(a!=' ')
			{
				arr1[j]=a;
				j++;
			}
			scanf("%c",&a);
		}
		lll=j;
		arr1[j]='\0';
		for(k=i-1;k>=0;k--)
		{
			if(j<=0)
			{
				//			printf("%c\n",arr[k]);
				if('0'-arr[k]>0)	
				{
					arr2[k]=arr[k]-'0'+10+48;
					arr[k-1]=arr[k-1]-'1'+48;
				}
				else
					arr2[k]=arr[k]-'0'+48;
			}
			else if((arr[k]-arr1[j-1])>=0)
			{
				arr2[k]=arr[k]-arr1[j-1]+48;
			}
			else
			{
				arr2[k]=arr[k]-arr1[j-1]+10+48;
				arr[k-1]=arr[k-1]-'1'+48;
			}
			j--;
		}
		//			for(k=0;k<i-1;k++)
		//				printf("%c",arr2[k]);
		//			printf("\n");
		n=0;
		int t=0,t1=0;
		//		printf("i%d\n",i);
		for(k=0;k<i;k++)
		{
			n=n+arr2[k]-48;
			if(n%2==0)
			{
				arr3[t++]=(n/2)+48;
				arr6[t1++]=(n/2)+48;
				n=0;
			}
			else if(n/2==0)
			{
				arr3[t++]=(n/2)+48;
				arr6[t1++]=(n/2)+48;
				n=n*10;
			}
			else
			{
				arr3[t++]=(n/2)+48;
				arr6[t1++]=(n/2)+48;
				n=(n%2)*10;
			}
		}
		/*		printf("***********\n");
				for(l=0;l<t;l++)
				{
				printf("%c",arr3[l]);
				}
				printf("***********\n");*/
		int hold=t;
		for(k=t1-1;k>=0;k--)
		{
			if(lll<=0)
			{
				if(('0'+arr6[k]-96)/10>0)	
				{
					arr4[k]=(arr6[k]+'0'-96)%10+48;
					arr6[k-1]=arr6[k-1]+'1'-48;
				}
				else
					arr4[k]=arr6[k]+'0'-48;
				//				arr4[k]=arr5[k]-'0'+48;
			}
			else if((arr6[k]+arr1[lll-1]-96)/10==0)
			{
				arr4[k]=arr1[lll-1]+arr6[k]-48;
			}
			else
			{
				arr4[k]=((arr1[lll-1]+arr6[k]-96)%10+48);
				arr6[k-1]=arr6[k-1]+'1'-48;
			}
			lll--;
		}
		int flag=0;
		for(l=0;l<i;l++)
		{
			if(arr4[l]!='0')
				flag=1;
			if(flag==1)
				printf("%c",arr4[l]);
		}
		printf("\n");
		flag=0;
		int find=0;
		for(l=0;l<hold;l++)
		{
			if(arr3[l]=='0')
			{
				int go=l;
				while(arr3[go]=='0' && go<hold)
				{
					go++;
					find++;
				}
				if(find==hold+1)
				{
					printf("%c",arr3[l]);
					break;
				}

			}
			if(arr3[l]!='0')
				flag=1;
			if(flag==1)
				printf("%c",arr3[l]);
		}
		printf("\n");
	}
	return 0;
}



