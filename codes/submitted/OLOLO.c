#include<stdio.h>
typedef long long LL;

int main() {
	int i;
	LL N, num = 0, res, inp;
	scanf("%lld",&N);
	for(i = 0 ; i < N ; i++)
	{
		scanf("%lld",&inp);
		num ^= inp;
	}
	printf("%lld\n",num);
	return 0;
}
