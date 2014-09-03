#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int flag=0;
	long long int p,q,n,i,count=0,hold;
	cin >> p >> q;
	cin >> n;
	long long int arr[n];
	for(i=0;i<n;i++)
		cin >> arr[i];
	if(n==1)
	{
		if(p%q==0)
		{
			p/=q;
			q=1;
		}
		if(p==arr[0] && q==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	else
	{
		while(count!=n-1)
		{
			if(((p/q)<arr[count]))
			{
				printf("NO\n");
				flag=1;
				break;
			}
			else
			{
				hold=q;
				q=(p-arr[count]*q);
				if(q==0)
					break;
				p=hold;
			}
			count++;
		}
		if(q!=0)
		{
			if(p%q==0)
			{
				p/=q;
				q=1;
			}
		}
		if(p==arr[count] && q==1 && flag!=1)
			printf("YES\n");
		else
		{
			if(flag==0)
				printf("NO\n");
		}
	}
	return 0;
}
