#include<stdio.h>
int main()
{
	int num,i,a,b,count=0,count1;
	scanf("%d",&num);
	int arr[1000]={0},bottles[num][2];
	for(i=0;i<num;i++)
	{
		scanf("%d%d",&a,&b);
		bottles[i][0]=a-1;
		bottles[i][1]=b-1;
		if(a!=b)
			arr[b-1]=1;
		else
		{
			if(arr[b-1]==0)
				arr[b-1]=-1;
			else if(arr[b-1]==-1)
				arr[b-1]=1;
		}
	}
	for(i=0;i<num;i++)
	{
		if(bottles[i][0]==bottles[i][1])
		{
			if(arr[bottles[i][0]]!=-1)
				count++;
		}
		if(bottles[i][0]!=bottles[i][1])
		{
			if(arr[bottles[i][0]]==1 || arr[bottles[i][0]]==-1)
				count++;
		}
	}
	printf("%d\n",num-count);
	return 0;
}
