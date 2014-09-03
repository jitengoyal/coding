#include<stdio.h>
#include<string.h>
long long int func(char a[],int d[],int n);
long long int reve(int f[],int dig,int e[]);
int main()
{
	char a[1000];
	while(scanf("%s",a)!=EOF)
	{
	int i,j,n,n1,dig=0;
	long long int result=0,result1=0,answer=0,hold=0,final=0;
	char b[1000],c;
	int d[1000],e[1000],f[1000];
	scanf(" %c %s",&c,b);
	printf("%s %c %s = ",a,c,b);
	n=strlen(a);
	n1=strlen(b);
	result=func(a,d,n);
//	printf("%lld\n",result);
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
//	for(i=0;i<dig;i++)
//	{
//		printf("%d ",f[i]);
//	}
	final=reve(f,dig,e);
	//printf("%s %c %s = %lld",a,c,b,final);
	printf("\n");
	}
	return 0;
}
long long int func(char a[],int d[],int n)
{
	int counter=0,num=0,l,i,j;
	long long int xxx=0;
	for(i=0;i<n-1;i+=2)
	{
		l=0;
		for(j=counter;;j++)
		{
			if(a[i]=='0')
				break;
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
	for(i=0;i<dig;i++)
	{
		if(f[0]==0)
		{
	//		e[0]=1;
	//		e[1]=0;
			break;
		}	
		cntr=1;
		for(j=i;j<dig;j++)
		{
			if(j==dig-1)
			{
				  cntr=1;
				  break;
			}
			if(f[j]==f[j+1])
			{
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
				break;
			}
			if(cntr==9)
			{
				 i=j+1;
				break;
			}
		}
		e[t]=cntr;
	//	aaa=aaa*10+e[t];
	//	printf("%llu %d\n",aaa,f[i]);
		t++;
		e[t]=f[i];
	//	printf("%d\n",e[t]);
	//	aaa=aaa*10+e[t];
	//	printf("%llu\n",aaa);
		t++;
	//	printf("%lld %d %d %d\n",aaa,f[i],i,e[t]);

	}
	if(t==0)
		printf("%d",10);
	else
	{
		for(i=0;i<t;i++) printf("%d",e[i]);
	}
	return 0;
}
