#include<stdio.h>
long long int func(long long int base,long long int expo,long long  int modulus)
{
	long long int result=1;
	while (expo>0)
	{
		if (expo%2==1)
			result=(result*base)%modulus;
		expo=expo/2;
		base=(base*base)%modulus;
	}
	return result%10000007;
}
int main()
{
	long long int n,k;
	scanf("%lld%lld",&n,&k);
	while(1)
	{
		if(n==0 && k==0) 
			break;
		long long int res1=(func(n,k,10000007))%10000007;
		long long int res2=(2*(func(n-1,k,10000007)))%10000007;
		long long int res3=func(n,n,10000007)%10000007;
		long long int res4=(2*func(n-1,n-1,10000007))%10000007;
		printf("%lld\n",(res1+res2+res3+res4)%10000007);
		scanf("%lld%lld",&n,&k);
	}
	return 0;

}
