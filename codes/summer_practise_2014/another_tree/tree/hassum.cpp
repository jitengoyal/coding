#include<stdio.h>
#include<stdlib.h>
#define bool int
 
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
   int data;
   struct node* left;
   struct node* right;
};
 
/*
 Given a tree and a sum, return true if there is a path from the root
 down to a leaf, such that adding up all the values along the path
 equals the given sum.
 
 Strategy: subtract the node value from the sum when recurring down,
 and check to see if the sum is 0 when you run out of tree.
*/

int flag;

bool hasPathSum(struct node *root, int sum,int num)
{
	if(root==NULL)
		return false;
	if(root->left==NULL && root->right==NULL)
	{
		if(sum+root->data==num)
		{
			printf("1 %d\n",root->data);
			return true;
		}
		else
		{
			printf("2 %d\n",root->data);
			return false;
		}
	}
	if( (hasPathSum(root->left,sum+root->data,num)) || (hasPathSum(root->right,sum+root->data,num)))
		return true;
	else
		return false;
}

/*bool hasPathSum(struct node* node, int sum)
{
//   return true if we run out of tree and sum==0 
  if (node == NULL)
  {
     return (sum == 0);
  }
  
  else
  {
    bool ans = 0; 
  
    // otherwise check both subtrees 
    int subSum = sum - node->data;
  
    // If we reach a leaf node and sum becomes 0 then return true
    if ( subSum == 0 && node->left == NULL && node->right == NULL )
      return 1;
  
    if(node->left)
      ans = ans || hasPathSum(node->left, subSum);
    if(node->right)
      ans = ans || hasPathSum(node->right, subSum);
  
    return ans;
  }
}*/
 
/* UTILITY FUNCTIONS */
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* newnode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
 
  return(node);
}
 
/* Driver program to test above functions*/
int main()
{
 
  int num = 23;
  int sum=0;
 
  /* Constructed binary tree is
            10
          /   \
        8      2
      /  \    /
    3     5  2
  */
  struct node *root = newnode(10);
  root->left        = newnode(8);
  root->right       = newnode(2);
  root->left->left  = newnode(3);
  root->left->right = newnode(5);
  root->right->left = newnode(2);
 
  flag=0;
  bool check=hasPathSum(root, sum,num);
  if(check)
    printf("There is a root-to-leaf path with sum %d", num);
  else
    printf("There is no root-to-leaf path with sum %d", num);
 
  getchar();
  return 0;
}