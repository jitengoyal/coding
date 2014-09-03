#include<stdio.h>
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
	float sum=0;
	float mean;
	mystudent si;
	for(i=0;i<5;i++)
	{
		scanf("%s %d %d %d",si.name,&si.roll,&si.marks[0],&si.marks[1]);
		sum=sum+si.marks[0];
	}
//	printf("%s %d %d %d",s.name,s.roll,s.marks[0],s.marks[1]);
	mean=sum/5;
	printf("%f\n",mean);
	return 0;
}

