#include<stdio.h>
int main()
{
	int account;
	char name[100];
	double balance;
	FILE *cfptr;
	if((cfptr=fopen(" clients.dat","w"))==NULL)
	{
		printf("FILE could not be opened\n");
	}
	else
	{
		printf("ENTER the account ,name,and balance. \n");
		printf("ENTER EOF to end input.\n" );
		printf("?");
		scanf("%d%s%lf",&account,name,&balance);
		while(!feof(stdin)){
			fprintf(cfptr,"%d %s %.2f" ,account, name, balance);
			printf("?");
			scanf("%d%s%lf",&account,name,&balance);
		}
		fclose(cfptr);
	}
	return 0;
}


