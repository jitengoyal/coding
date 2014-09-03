#include<stdio.h>
int main()
{
	int n,i,j,k,temp,b,hold,z,flag,a,min,f,g,new_i;

	int no_key,no_ches;
	scanf("%d%d",&no_key,&no_ches);
	int keys[401]={0},type_key,chest[no_ches+1];

	int ches_no;

	//scanning keys which i have already
	for(new_i=0;new_i<no_key;new_i++)
	{
		scanf("%d",type_key);
		keys[type_key]++;
	}

	for(new_i=1;new_i<no_ches+1;new_i++)
	{
		scanf("%d",&type_key);	
		chest[new_i]=type_key;
	}

	scanf("%d",&g);
	for(f=0;f<g;f++)
	{
		temp=0; k=0,flag=0;
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(j=n-1;j>0;j--)
		{
			if(arr[j]>arr[j-1])
			{
				temp=j;
				break;
			}
		}
		if(temp==0)
		{
//			printf("\n"); 
			continue;
		}
		hold=temp;
		for(i=temp;i<n;i++)
		{
			min=arr[i];
			for(j=i;j<n-1;j++)
			{
				if(min>arr[j+1])
				{
					min=arr[j+1];
					z=arr[j+1];
					arr[j+1]=arr[i];
					arr[i]=z;		
				}
			}
		}
		for(i=temp;i<n;i++)
		{
			if(arr[i]>arr[temp-1])
			{
				int xxx=arr[temp-1];
				arr[temp-1]=arr[i];
				arr[i]=xxx;
				break;
			}
		}


		for(i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
	return 0;
}	
