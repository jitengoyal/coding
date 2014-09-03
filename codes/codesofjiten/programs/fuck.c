#include<stdio.h>
#include<string.h>
long long int func(char a[],int d[],int n);
long long int reve(int f[],int dig,int e[]);
int main()
{
	char a[1000]={0};
	while(scanf("%s",a)!=EOF)
	{
	int i,j,n,n1,dig=0;
	long long int result=0,result1=0,answer=0,hold=0,final=0;
	char b[1000],c;
	int d[1000],e[1000],f[1000];
	scanf(" %c %s",&c,b);
	n=strlen(a);
	n1=strlen(b);
	result=func(a,d,n);
	result1=func(b,e,n1);
	if(c=='+')
		answer=result+result1;
	else if(c=='-')
		answer=result-result1;
	else if(c=='*')
		answer=result*result1;
	else
		answer=result/result1;
	hold=answer;
//	printf("%lld\n",hold);
	if(answer==0)
		dig=1;
	else
	{
		while(answer!=0)
		{
			answer=answer/10;
			dig++;
		}
	}
	for(i=dig-1;i>=0;i--)
	{
		f[i]=hold%10;
		hold=hold/10;
	}
	f[dig]='\0';
	final=reve(f,dig,e);
	printf("%s %c %s = %lld",a,c,b,final);
	printf("\n");
	}
	return 0;
}
long long int func(char a[],int d[],int n)
{
	int counter=0,num=0,l,i,j;
	long long int xxx=0;
	for(i=0;i<n;i+=2)
	{
		l=0;
		for(j=counter;;j++)
		{
			num=a[i+1]-'0';
			d[j]=num;
			xxx=xxx*10+d[j];
			l++;
			if(l==a[i]-'0')
				break;
		}
		counter=counter+a[i]-'0';
	}
	return xxx;
}
long long int reve(int f[],int dig,int e[])
{
	int i,j,t=0,cntr;
	long long int aaa=0;
	for(i=0;i<dig;i++)
	{
		if(f[0]==0)
		{
			aaa=10;
			break;
		}	
			//	printf("gya=%d\n",i);
		cntr=1;
		for(j=i;j<dig;j++)
		{
			if(f[j]==f[j+1])
			{
//				printf("gya\n");
				cntr++;
				if(j+1==dig-1)
				{
					i=j+1;
					break;
				}
			}
			else
			{
				i=j;
		//		printf("%d\n",j);
				break;
			}
			if(cntr==9)
			{
				 i=j+1;
				break;
			}
		}
	//	printf("%d\n",i);
		e[t]=cntr;
		aaa=aaa*10+e[t];
		t++;
		e[t]=f[i];
		aaa=aaa*10+e[t];
	//	printf("%lld\n",aaa);
		t++;
	}
	return aaa;
}
