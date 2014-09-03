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
 
/* Returns the height of a binary tree */
int height(struct node* node);
 
/* Returns true if binary tree with root as root is height-balanced */
int fla;

int isBalanced(struct node *root)
{
	if(root==NULL)
		return 0;
	int ldep=isBalanced(root->left);
	int rdep=isBalanced(root->right);
	if(abs(ldep-rdep)>1)
		fla=0;
	if(ldep>=rdep)
		return ldep+1;
	else
		return rdep+1;
}
 
/* UTILITY FUNCTIONS TO TEST isBalanced() FUNCTION */
 
/* returns maximum of two integers */
int max(int a, int b)
{
  return (a >= b)? a: b;
}   
 
/*  The function Compute the "height" of a tree. Height is the
    number of nodes along the longest path from the root node
    down to the farthest leaf node.*/
int height(struct node* node)
{
   /* base case tree is empty */
   if(node == NULL)
       return 0;
 
   /* If tree is not empty then height = 1 + max of left
      height and right heights */
   return 1 + max(height(node->left), height(node->right));
}
 
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* newNode(int data)
{
    struct node* node = (struct node*)
                                malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return(node);
}
 
int main()
{
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->left->left = newNode(8);
 
    fla=1;
    isBalanced(root);
    if(fla)
	    printf("Tree is balanced");
    else
	    printf("Tree is not balanced");   

    getchar();
    return 0;
}
