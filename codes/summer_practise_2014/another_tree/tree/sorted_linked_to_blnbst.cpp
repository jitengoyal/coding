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

typedef struct t_node
{
	int data;
	struct t_node* left;
	struct t_node* right;
}t_node;

void print(node* head)
{
	while(head)
	{
		printf("%d ",head->data);
		head=head->next;
	}
	printf("\n");
}


node* getthemiddle(node* head,node** a,node** b)
{
	int count=1;
	node * prev;
	node* fast=head;
	node* slow=head;
	prev=slow;
	while(slow && fast && fast->next)
	{
		fast=fast->next;
		count++;
		fast=fast->next;
		if(fast)
		{
			count++;
			prev=slow;
			slow=slow->next;
		}
	}

	if(count%2==0)
	{
		*b=slow->next;
		slow->next=NULL;
		*a=head;
	}
	else
	{
		*b=prev->next;
		prev->next=NULL;
		*a=head;
	}
	print(*a);
	print(*b);
}

t_node* converttobst(node* head)
{
	if(head==NULL)
		return NULL;
	if(head->next==NULL)
	{
		t_node* temp=(t_node*)malloc(sizeof(t_node));
		temp->data=head->data;
		temp->left=NULL;
		temp->right=NULL;
		return temp;
	}
	node* a;
	node* b;
	printf("------------------\n");
	getthemiddle(head,&a,&b);
	printf("------------------\n");
	t_node* root=(t_node*)malloc(sizeof(t_node));
	root->data=b->data;
	printf("root: %d\n",root->data);
	root->left=converttobst(a);
	root->right=converttobst(b->next);
	return root;
				
}

void insert(node** head,int data)
{
	node* temp=(node*)malloc(sizeof(node));
	temp->data=data;
	temp->next=NULL;

	temp->next=*head;
	*head=temp;
}

void in_print(t_node* root)
{
	if(root==NULL)
		return;
	in_print(root->left);
	printf("%d ",root->data);
	in_print(root->right);
}

int main()
{
	int x,y,z,i,j,k,n,num,T,m,ans,count,counter,result;
	node* head=(node*)malloc(sizeof(node));
	head=NULL;
	S(n);
	rep(i,n)
	{
		S(num);
		insert(&head,num);
	}
	print(head);
	t_node* root=converttobst(head);
	in_print(root);
	printf("\n");
	return 0;
}
