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
	struct node* left;
	struct node* right;
}node;

node* newnode(int data)
{
	node* temp=(node*)malloc(sizeof(node));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

node* find_lca(node* root,int data1,int data2)
{
	if(root==NULL)
		return NULL;
	if(root->data==data1 || root->data==data2)
		return root;
	
	node *left_lca,*right_lca;
	left_lca = find_lca(root->left,data1,data2);
	right_lca = find_lca(root->right,data1,data2);
	if(left_lca && right_lca)
		return root;
	else if(!left_lca && !right_lca)
		return NULL;
	else
		return (left_lca)?left_lca:right_lca;
}


int main()
{
	int x,y,z,i,j,k,n,num,T,m,count,counter,result;
	node* root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	root->left->right->left=newnode(8);
	root->right->left=newnode(6);
	root->right->right=newnode(7);
	root->right->left->left=newnode(9);
	
	int num1,num2;
	S(num1);
	S(num2);
	node* ans=find_lca(root,num1,num2);
	if(ans==NULL)
		printf("either of node does not exist\n");
	else
		printf("the lca is %d\n",ans->data);
	return 0;
}
