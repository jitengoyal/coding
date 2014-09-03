#include<stdio.h>
#define max 100005
int arr[max]={0};
void sieve(){
	int i,j;
	for(i=2;i<=max;i++){
		if(arr[i]!=0)continue;
		for(j=2*i;j<=max;j+=i){
			if(arr[j]==0)
				arr[j]=i;
		}
	}
}

int main(){
	int n,num,i,j,a,b,k,counter,ans,hold;
	sieve();
	scanf("%d",&num);
	int fact[100005];
	for(i=2;i<=100000;i++)
	{
		n=i;
		counter=0;
		hold=0;
		if(arr[n]!=0)
		{
			while(n%arr[n]==0)
			{
				if(hold!=arr[n])
				{
					counter++;
					hold=arr[n];
				}
				n/=arr[n];
				if(arr[n]==0)
				{
					if(hold!=n)
						counter++;
					break;
				}
			}
		}
		else
			counter++;
		fact[i]=counter;
	}
/*	for(i=1;i<=100000;i++)
	{
		printf("%d\n",fact[i]);
	}*/
	
	for(i=0;i<num;i++)
	{
		ans=0;
		scanf("%d%d%d",&a,&b,&k);
		for(j=a;j<=b;j++)
		{
			if(fact[j]==k)
				ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}
