#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,i,n,r,j,flag,t,id,code;
	char **array;
	array=(char**)malloc(sizeof(char*)*10001);
	for(i=0;i<10001;i++)
	{
		array[i]=(char*)malloc(sizeof(char)*10000);
	}
	for(i=0;i<10001;i++)
	{
		for(j=0;j<10000;j++)
		{
			array[i][j]=0;
		}
	}

	t=1;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		flag=0;
		scanf("%d%d",&n,&r);

		for(j=0;j<r;j++)
		{
			scanf("%d%d",&id,&code);
			if(array[id][code]==t)
				flag=1;
			array[id][code]=t;
		}
		if(flag==1)
			printf("Scenario #%d: impossible\n",i+1);
		else
			printf("Scenario #%d: possible\n",i+1);

		t++;	
	}
	free(array);
	return 0;
}
