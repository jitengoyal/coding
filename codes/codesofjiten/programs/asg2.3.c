#include<stdio.h>
#include<stdlib.h>
int prime(int);
typedef struct nod
{
	int a;
	struct nod *next;
}node;
void insert(node *h,int y,int z)
{
	node *temp;
	temp=(node*)malloc(sizeof(node));
	while(h->a!=z&&h!=NULL)
	{
		h=h->next;
	}
	temp->next=h->next;
	h->next=temp;
	h->next->a=y;
	return;  
}
int delete(node *h,int n1,int counter,int xxx)
{
	int counter1,num=0;
	node *temp;
	temp=(node*)malloc(sizeof(node));
	counter1=1;
	if(n1<=counter)
	{
		while(h->next!=NULL)
		{
			while(counter1!=n1)
			{
				if(h->next!=NULL)
				{
					h=h->next;
					counter1++;
				}
				else
					break;
				//	if(h==NULL)
				//	{
				//		break;
				//	}
			}
			if(h->next!=NULL)
			{
				temp=h->next;
				h->next=temp->next;
				num++;
				if(num<xxx)
					printf("%d ",temp->a);
				else
					printf("%d",temp->a);
				free(temp);
				counter1=1;
				counter=counter-1;
			}
		}
	}
	else
	{
		counter1=1;
		int hold=n1%counter;
		while(counter1!=hold)
		{
			h=h->next;
			counter1++;
		}
		temp=h->next;
		h->next=temp->next;
		printf("%d",temp->a);
		free(temp);
		counter=counter-1;
	}
	return counter;
}
void print(node *h)
{
	while(h->next!=NULL)
	{
		printf("%d",h->next->a);
		h=h->next;
	}
	printf("\n");
}
int prime(int x)
{
	int i,flag=0;
	for(i=2;i<=(x)/2;i++)
	{
		if(x%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		return 0;
	else
		return 1;
}
int main()
{
	int i,j,n,y,z,counter=0;
	node *h,*temp;
	h=(node*)malloc(sizeof(node));
	temp=(node*)malloc(sizeof(node));
	h->next=NULL;
	scanf("%d",&n);
	h->next=temp;
	temp->a=n;
	counter++;
	temp->next=NULL;
//	h=h->next;
	while(scanf("%d%d",&y,&z)!=EOF)
	{ 
		insert(h,y,z);
		counter++;
	}
	print(h);
	printf("%d\n",counter);
	printf("%d : ",5);
	int xxx=(counter)/5;
	counter=delete(h,5,counter,xxx);
	printf("\n");
	int element=6;
	while(h->next->next!=NULL)
	{
		z=prime(element);
		if(z==1)
		{
			printf("%d : ",element);
			xxx=(counter)/element;
			counter=delete(h,element,counter,xxx);
			printf("\n");
		}
		element++;
	}
	print(h);
	return 0;
}
