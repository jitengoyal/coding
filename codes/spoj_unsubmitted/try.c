#include<stdio.h>
#include<stdlib.h>
long long int func(long long int n);
int main()
{

	long long int num,i,n,res,hold,j,l,ans,k,count=0;
	int prime[1000000];
	prime[0]=2;
	j=3;
	while(j*j<=1000000000000)
	{
		int check=0;
		k=2;
		while(k*k<=j)
		{
			if(j%k==0)
			{
				check=1;
				break;
			}
			k++;
		}
		if(check==0)
			prime[++count]=j;
		j++;
	}

	int flag,counter=0;
	int finals[10000][2];
	float minima=1.95000f;
	int index_print=0;


//	for(i=2;i<=8319823;i++)
	for(i=2;i<=10000000;i++)
	{
		n=i;
		flag=0;

		int arr_num[10]={0},arr_ans[10]={0};

		ans=n;
		for(j=0;j<=count;j++)
		{
			if(prime[j]*prime[j]>n)
				break;
			if(n % prime[j]==0)
				ans=(ans * (prime[j]-1))/prime[j];
			while(n%prime[j]==0)
				n=n/prime[j];
		}
		if(n>1)
			ans=(ans*(n-1))/n;


		hold=i;
		while(hold>0)
		{
			arr_num[hold%10]++;
			hold/=10;
		}
		hold=ans;
		while(hold>0)
		{
			arr_ans[hold%10]++;
			hold/=10;
		}

		for(j=0;j<10;j++)
		{
			if(arr_num[j]!=arr_ans[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
//			printf("%lld %lld %f\n",i,ans,(i*(1.0)/ans*(1.0)));
			if((i*(1.0)/ans*(1.0))<=minima)
			{
				minima=(i*(1.0)/ans*(1.0));
				printf("%lld %f\n",i,minima);
				index_print=i;
			}
//			finals[counter][0]=i;
//			finals[counter][1]=ans;
//			counter++;
		}
	}

//	printf("%f %d\n",minima,index_print);
	exit(0);

	int print_ans,flag2;
	float ans_res;
	scanf("%lld",&num);
	for(i=0;i<num;i++)
	{
		flag2=0;
		ans_res=100000000.0;
		scanf("%lld",&n);
		for(l=0;l<counter;l++)
		{
			if(finals[l][0]<n)
			{
				flag2=1;
				if(((finals[l][0]*1.0)/(finals[l][1]*1.0))<ans_res)
				{
					ans_res=(finals[l][0]*1.0)/(finals[l][1]*1.0);
					print_ans=finals[l][0];
				}
				else if(((finals[l][0]*1.0)/(finals[l][1]*1.0))==ans_res)
					print_ans=finals[l][0];
			}
			else
				break;
		}
		if(flag2!=1)
			printf("No solution\n");
		else
			printf("%d\n",print_ans);
	}
	return 0;
}
