#include<stdio.h>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<set>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<map>
#include<list>

using namespace std;

#define S(n) scanf("%d",&n)
#define SS(s) scanf("%s",s)
#define PS(s) printf("%s\n",s)
#define P(n) printf("%d\n",n)
#define Sll(n) scanf("%lld",&n)
#define Pll(n) printf("%lld\n",n)
#define sortv(v) sort(v.begin(),v.end())
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
#define rep2(i,a,b) for(i=a;i<b;i++)
#define MP make_pair
#define PB push_back
#define pii  pair<int,int>
#define pll  pair<long long int,long long int>
#define vi vector<int>
#define vl vector<long long int>
#define si set<int>
#define sl set<long long int>
#define Si size()
#define mod 1000000007

//for gcd use __gcd(); // inbuilt function

#define sieve(a) ({int b=ceil(sqrt(a));vector<int> d(a,0);vector<int> e;int f=2;e.push_back(2);e.push_back(3);for(int x=1;x<b+1;x++){for(int y=1;y<b+1;y++){int n=(4*x*x)+(y*y);if(n<=a&&(n%12==1||n%12==5)){d[n]^=1;}n=(3*x*x)+(y*y);if(n<=a&&n%12==7){d[n]^=1;}n=(3*x*x)-(y*y);if(x>y&&n<=a&&n%12==11){d[n]^=1;}}}for(int r=5;r<b+1;r++){if(d[r]){for(int i=r*r;i<a;i+=(r*r)){d[i]=0;}}}for(int c=5;c<a;c++){if(d[c]){e.push_back(c);}}e;})


//queue is a doubly linked list

typedef struct node
{
	int data;
	struct node* next,*prev;
}node;


typedef struct queue1
{
	int fill_count;
	struct node *front,*rear;
	int tot_count;		// no .of pages present
}queue1;

typedef struct hash
{
	int tot_count;
	node* *array;
}hash;

queue1* createqueue(int data)
{
	queue1* q = (queue1*)malloc(sizeof(queue1));
	q->fill_count=0;
	q->front=q->rear=NULL;
	q->tot_count=data;
	return q;
}

hash* createhash(int data)
{
	hash* h=(hash*)malloc(sizeof(hash));
	h->tot_count=data;
	h->array=(node**)malloc(sizeof(node*)*(h->tot_count));
	for(int i=0;i<h->tot_count;i++)
		h->array[i]=NULL;
	return h;

}

int isfull(queue1* q)
{
	if(q->tot_count==q->fill_count)
		return 1;
	else
		return 0;
}

void dequeue(queue1* q)
{
	if(q->fill_count==0)
		return;
	if(q->front==q->rear)
		q->front=NULL;
	else
	{
		node *temp=q->rear;
		q->rear=q->rear->prev;
		q->rear->next=NULL;
		free(temp);
	}
	q->fill_count--;
}

void enqueue(queue1* q,hash *h,int pageno)
{
	if(isfull(q))
	{
		h->array[q->rear->data]=NULL;
		dequeue(q);
	}
	node *temp=(node*)malloc(sizeof(node));
	temp->data=pageno;
	if(q->rear==NULL)
		q->front=q->rear=temp;

	else
	{
		temp->next=q->front;
		q->front->prev=temp;
		temp->prev=NULL;
		q->front=temp;
	}
	q->fill_count++;
	h->array[pageno]=temp;
}
void referencepage(queue1* q,hash* h,int pageno)
{
	node* temp=h->array[pageno];
	if(temp==NULL)
		enqueue(q,h,pageno);
	else if(temp!=q->front)
	{
		temp->prev->next=temp->next;
		if(temp->next)
		{
			temp->next->prev=temp->prev;
		}
		if(temp==q->rear)
		{
			q->rear=temp->prev;
			q->rear->next=NULL;
		}
		temp->next=q->front;
		temp->prev=NULL;
		q->front->prev=temp;
		q->front=temp;
	}
	
}

int main()
{
	int x,y,z,i,j,k,n,num,T,m,ans,count,counter,result;
	queue1* q=createqueue(4);
	hash* h=createhash(10);
	referencepage( q, h, 1);
	referencepage( q, h, 2);
	referencepage( q, h, 3);
	referencepage( q, h, 1);
	referencepage( q, h, 4);
	referencepage( q, h, 5);
	printf ("%d\n", q->front->data);
	printf ("%d\n", q->front->next->data);
	printf ("%d\n", q->front->next->next->data);
	printf ("%d\n", q->front->next->next->next->data);
	exit(0);
	printf ("%d\n", q->front->data);
	printf ("%d\n", q->front->next->data);
	printf ("%d\n", q->front->next->next->next->data);
	return 0;
}
