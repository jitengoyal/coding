#include<stdio.h>
#define max 10000007
long long int a[max]={0};
void sieve(){
	int i,j;
	for(i=2;i<=max;i++){
		if(a[i]!=0)continue;
		for(j=2*i;j<=max;j+=i){
			if(a[j]==0)
				a[j]=i;
		}
	}
}

int main(){

	int n,num,i;
	sieve();
	for(i=2;i<max;i++)
	{
		if(a[i]==0)
			a[i]=i+a[i-1];
		else
			a[i]+=a[i-1];
	}
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&n);
		printf("%lld\n",a[n]);
	}
	return 0;
}
