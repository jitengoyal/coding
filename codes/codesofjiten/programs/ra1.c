#include<stdio.h>
#include<string.h>
long long int func(char a[],int d[],int n);
long long int reve(int f[],int dig,int e[]);
int main()
{
	char a[10000]={0};
	while(scanf("%s",a)!=EOF)
	{
	int i,j,n,n1,dig=0;
	long long int result=0,result1=0,answer=0,hold=0,final=0;
	char b[10000],c;
	int d[10000],e[10000],f[10000];
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
//	for(i=0;i<dig;i++)
//	{
//		printf("%d ",f[i]);
//	}
	final=reve(f,dig,e);
//	printf("%s %c %s = %lld",a,c,b,final);
//	printf("\n");
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
	for(i=10;i<11;i++)
	{
		if(f[0]==0)
		{
			aaa=10;
			break;
		}	
		cntr=1;
		for(j=10;j<12;j++)
		{
	//		if(j==dig-1)
	//		{
	//			  cntr=1;
	//			  break;
	//		}
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
		aaa=aaa*10+e[t];
	//	printf("%lld %d\n",aaa,f[i]);
		t++;
		e[t]=f[i];
		aaa=aaa*10+e[t];
	//	printf("%lld %d\n",aaa,i);
		t++;
		printf("%lld\n",aaa);

	}
	return aaa;
}
