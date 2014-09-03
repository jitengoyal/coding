#include<stdio.h>
#include<string.h>
#include<vector>
#include<iostream>

using namespace std;

int main()
{
	int i,j,k,n,num;
	scanf("%d",&n);
	int arr[n];
	int counter=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]==i)
			counter++;
	}

	int flag=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]!=i && arr[arr[i]]==i)
		{
			flag=1;
			break;
		}

	}
	if(flag==1)
		counter=counter+2;
	else if(counter!=n)
		counter++;

	cout << counter << "\n";



	return 0;
}
