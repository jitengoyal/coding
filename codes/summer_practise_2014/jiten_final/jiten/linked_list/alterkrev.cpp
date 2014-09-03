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

typedef struct node
{
	int data;
	struct node* next;
}node;

node* head1;

void insert(node *head,int num)
{
	while(head->next!=NULL)
		head=head->next;
	node *temp=(node*)malloc(sizeof(node));
	temp->data=num;
	temp->next=NULL;
	head->next=temp;
	return;
}


void print(node *head)
{
	while(head)
	{
		printf("%d ",head->data);
		head=head->next;
	}
	printf("\n");
}


node* alterrev(node *head,int k,int sw)		//first node
{
	if(head==NULL)		// if the list has no node	
		return head;
	int count=0;
	node *curr=head;
	node *prev;
	node *next;
	if(sw==1)
		prev=NULL;
	while((count < k) && (curr!=NULL))
	{
		if(sw==1)
		{
			next=curr->next;
			curr->next=prev;
			prev=curr;
			curr=next;
		}
		else
		{
			prev=curr;
			curr=curr->next;
		}
		count++;
	}
	if(sw==1)
	{
		print(prev);
		head->next=alterrev(curr,k,(sw+1)%2);
		printf("hehe %d\n",prev->data);
		print(head);
		return prev;
	}
	else
	{
		prev->next=alterrev(curr,k,(sw+1)%2);
		return head;
	}
	
}

int main()
{
	int x,y,z,i,j,k,n,num,T,m,ans,count,counter,result;
	node *head;
	head=(node*)malloc(sizeof(node));
	head->next=NULL;
	S(n);
	S(k);
	rep(i,n)
	{
		S(num);
		insert(head,num);
	}
	node *head1;
	if(n!=0)
		head1=alterrev(head->next,k,1);
	print(head1);
	return 0;
}
