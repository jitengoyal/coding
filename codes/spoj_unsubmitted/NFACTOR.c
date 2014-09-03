#include<stdio.h>
#include<stdlib.h>
#define max 1000007
int prime[1000000];
int arr[max]={0};
int factors[max]={0};
void sieve(){

	int i,j,flag=0,count=0;
	i=2;
	for(i=2;i<=max;i++)
	{
		if(arr[i]!=0)
			continue;
		for(j=i;j<=max;j+=i)
			arr[j]=arr[j]+1;
	}
}

int main(){
	int n,a,b,result,counter,hold,m,ans,i,num,j;
	sieve();
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		ans=0;
		scanf("%d%d%d",&a,&b,&n);
		if(n!=0)
		{
			for(j=a;j<=b;j++)
			{
				if(arr[j]==n)
					ans++;
			}
		}
		if(n==0)
			ans=1;
		printf("%d\n",ans);
	}
	return 0;
}
