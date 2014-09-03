#include<stdio.h>
int main()
{
	int account;
	char name[100];
	double balance;
	FILE *cfptr;
	if((cfptr=fopen(" clients.dat","r"))==NULL)
	{
		printf("FILE could not be opened\n");
	}
	else
	{
		printf("%-10s%-13s%-s\n","account","name","balance");
		fscanf(cfptr,"%d%s%lf",&account,name,&balance);
		while(!feof(cfptr)){
			printf("%-10d%-13s%7.2f\n",account,name,balance);
			fscanf(cfptr,"%d%s%lf",&account,name,&balance);
		}
		fclose(cfptr);
	}
	return 0;
}


