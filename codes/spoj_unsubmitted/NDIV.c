#include<stdio.h>
#define max 10000007
int arr[max]={0};
void sieve(){
	int i,j;
	for(i=2;i<=max;i++){
		if(arr[i]!=0)continue;
		for(j=i;j<=max;j+=i){
			if(arr[j]==0)
				arr[j]=i;
		}
	}
}

int main(){
	int n,a,b,result,counter,hold,m,ans,i;
	sieve();
	scanf("%d%d%d",&a,&b,&n);
	for(i=a;i<=b;i++)
	{
		m=i;
		hold=0,counter=0,result=1;
		if(arr[m]!=0)
		{
			while(m%arr[m]==0)
			{
				if(hold!=m)
				{
					result*=counter+1;
					counter=1;
					hold=m;
				}
				else
					counter++;
				m/=arr[m];
				if(arr[m]==0)
				{
					result*=counter+1;
					break;
				}
			}
		}
		if(result==n)
			ans++;
	}
	printf("%d\n",ans);
	return 0;
}
