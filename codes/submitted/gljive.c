#include<stdio.h>
#include<stdlib.h>
int main()
{
	int j,num,score=0,arr[10],prev=0;
	for(j=0;j<10;j++)
	{
		scanf("%d",&num);
		score=score+num;
		if(abs(100-prev)<abs(100-score))
			break;
		else if(abs(100-num)==abs(100-score))
		{
			if(num>score)
				score=num;
			else
				score=score;
		}
		prev=score;
	}
	printf("%d\n",prev);
	return 0;
}
