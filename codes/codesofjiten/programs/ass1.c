#include<stdio.h>
typedef struct nod
{
	char a;
	struct nod *next;
}
node;
int main()
{
	node *h;
	h=(node*)malloc(sizeof(node));
	h->next=NULL;
	int i,j,p;
	scanf("%d",&p);
	char arr[1000];
	i==0;
	while(scanf("%c",arr[i])!=EOF)
	{
		push(h,arr[i]);
		i++;
	}
}
push(node *h ,char n)
{
	node *temp;
	temp=(node*)malloc(sizeof(node));
	temp->a=n;
	while(h->next!=NULL)
	{
		h=h->next;
	}
	h->next=temp;
	temp->next=NULL;
	while((temp->a=='}') || (temp->a==']') || (temp->a=')'))
	{
		if(head->a==


}


}
