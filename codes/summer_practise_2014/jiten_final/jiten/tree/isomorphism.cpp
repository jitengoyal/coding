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

node* newNode(int data)
{
	node* temp=(node*)malloc(sizeof(node));
	temp->left=temp->right=NULL;
	temp->data=data;
	return temp;
}

bool isisomorphic(node* n1,node *n2)
{
	if(n1==NULL && n2==NULL)
		return true;
	if(n1==NULL || n2==NULL)
		return false;
	return (((isisomorphic(n1->left,n2->right) && isisomorphic(n1->right,n2->left) ) || (isisomorphic(n1->left,n2->left) && isisomorphic(n1->right,n2->right))) && (n1->data==n2->data));
}

int main()
{
	int x,y,z,i,j,k,n,num,T,m,ans,count,counter,result;
	node *n1 = newNode(1);
	n1->left        = newNode(2);
	n1->right       = newNode(3);
	n1->left->left  = newNode(4);
	n1->left->right = newNode(5);
	n1->right->left  = newNode(6);
	n1->left->right->left = newNode(7);
	n1->left->right->right = newNode(8);

	node *n2 = newNode(1);
	n2->left         = newNode(3);
	n2->right        = newNode(2);
	n2->right->left   = newNode(4);
	n2->right->right   = newNode(5);
	n2->left->right   = newNode(6);
	n2->right->right->left = newNode(8);
	n2->right->right->right = newNode(7);
	if(isisomorphic(n1,n2))
		printf("same ne 22\n");
	else
		printf("nhi same nhi haige\n");

	return 0;
}
