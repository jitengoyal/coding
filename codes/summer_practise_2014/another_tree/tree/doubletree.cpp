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
	struct node *left;
	struct node *right;
}node;


void in_print(node *root)
{
	if(root==NULL)
		return;
	in_print(root->left);
	printf("%d ",root->data);
	in_print(root->right);
}

void pre_print(node *root)
{
	if(root==NULL)
		return;
	printf("%d ",root->data);
	pre_print(root->left);
	pre_print(root->right);
}

void post_print(node *root)
{
	if(root==NULL)
		return;
	post_print(root->left);
	post_print(root->right);
	printf("%d ",root->data);
}

int find_index(int *arr,int ele,int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==ele)
			return i;
	}
}

node* buildtree(int* in, int* pre, int left,int right,int* preindex,int size)
{
	if(left>right)
		return NULL;
	int num=pre[*preindex];
	node* root=(node*)malloc(sizeof(node));
	root->data=num;
	int temp=find_index(in,num,size);
	printf("%d %d\n",num,temp);
	if(temp!=left)
		(*preindex)++;
	root->left=buildtree(in,pre,left,temp-1,preindex,size);
	if(temp!=right)
		(*preindex)++;
	root->right=buildtree(in,pre,temp+1,right,preindex,size);
	return root;
}

node* newNode(int data)
{
	struct node* node = (struct node*)
		malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return(node);
}

void change(node* root)
{
	if(root==NULL)
		return;
	change(root->left);
	change(root->right);

	node *temp1=newNode(root->data);
	temp1->right=NULL;
	temp1->left=root->left;
	root->left=temp1;
}

int main()
{
	int x,y,z,i,j,k,n,num,T,m,ans,count,counter,result;
	node *root = newNode(1);
	root->left        = newNode(2);
	root->right       = newNode(3);
	root->left->left  = newNode(4);
	root->left->right = newNode(5);
	change(root);
	in_print(root);
	printf("\n");
	return 0;
}
