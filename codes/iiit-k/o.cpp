#include<stdio.h>
#include<algorithm>
using namespace std;
int func(int a,int b)
{
	if(a<=b)
		return a;
	else
		return b;
}
int main()
{
	int i,j,k,l,x,y,n,num,num1;
	int max;
	scanf("%d",&num);
	int temp,counter=0;
	int array[150];
	int arr[1000000]={0};
	for(l=0;l<num;l++)
	{
		max = -1;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%d",&array[j]);
			if(max < array[j])
				max = array[j];
			arr[array[j]]++;
		}

	//	sort(array,array+n);
		counter=0;
		max >> 1;
		max++;
		for(i=0;i<n;i++)
		{
			if(array[i] > max)
				continue;
			if(arr[2*array[i]]>0 && arr[array[i]] > 0)
			{
				temp=min(arr[array[i]],arr[2*array[i]]);
				counter=counter+temp;
				arr[array[i]]-=temp;
				arr[2*array[i]]-=temp;
			}
			arr[array[i]]=0;
		}
		printf("%d\n",counter);
	}
	return 0;
}
