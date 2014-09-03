#include<stdio.h>
long long int func(long long int base,long long int expo,long long int modulus)
{
	long long int result=1;
	while(expo>0)
	{
		if(expo%2==1)
			result=(result*base)%modulus;
		base=(base*base)%modulus;
		expo/=2;
	}
	return result%modulus;
}
int main()
{
	long long int num,i,upper,d,m,n,j,k,l,ans1,ans2,ans3,counter,flag,hold;
	scanf("%lld",&num);
	for(i=0;i<num;i++)
	{
		counter=0;
		flag=0;
		scanf("%lld%lld%lld%lld",&upper,&d,&m,&n);
		hold=upper;
		long long int pre=m%n;
		long long int temp1=0,temp2=0,temp3=0,temp4;
		if(upper>n)
		{
			upper=n-1;
			flag=1;
		}
		long long int hold1=hold/n;
		for(j=0;j<=upper;j++)
		{
			ans1=func(j,d,n);
			temp1=hold1;
			if(j<=(hold%n))
				temp1=(temp1+1);

			for(k=0;k<=upper;k++)
			{
				ans2=func(k,d,n);
				temp2=hold1;
				if(k<=(hold%n))
					temp2=(temp2+1);

				for(l=0;l<=upper;l++)
				{
					ans3=func(l,d,n);
					temp3=hold1;
					if(l<=(hold%n))
						temp3=(temp3+1);

					if((ans1+ans2+ans3)%n==pre)
					{
						if(flag==1)
						{
							temp4=(temp1*temp2)%1000000007;
							temp4=(temp4*temp3)%1000000007;
							counter=(counter+temp4)%1000000007;
						}
						else
							counter=(counter+1)%1000000007;
					}
				}
			}
		}
		printf("%lld\n",counter);
	}
	return 0;
}
