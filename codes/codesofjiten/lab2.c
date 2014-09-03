#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[5];
	int roll;
	int marks[2];
};
typedef struct student mystudent;
int main()
{
	int i;
	float sum ,mean;
	mystudent *s=(mystudent*)malloc(sizeof(mystudent));
	for(i=0;i<5;i++)
	{
		scanf("%s %d %d %d",s->name,&s->roll,&s->marks[0],&s->marks[1]);
		sum=sum+s->marks[0];
	}
	mean=sum/5;
	printf("%f",mean);
	return 0;
}

