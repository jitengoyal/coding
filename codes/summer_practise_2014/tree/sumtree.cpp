#include <stdio.h>
#include <stdlib.h>
 
/* A binary tree node has data, left child and right child */
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
 
/* A utility function to get the sum of values in tree with root
  as root */
int sum(struct node *root)
{
   if(root == NULL)
     return 0;
   return sum(root->left) + root->data + sum(root->right);
}
 
/* returns 1 if sum property holds for the given
    node and both of its children */
int isSumTree(struct node* node,int* sum)
{
	int ls,rs,lsum=0,rsum=0;
	if(node==NULL)
		return 1;
	ls=isSumTree(node->left,&lsum);
	rs=isSumTree(node->right,&rsum);

	if(ls && rs)
	{
		if(node->left || node->right)
		{
			if(node->data==lsum+rsum)
			{
				*sum=node->data+lsum+rsum;
				return 1;
			}
			else
				return 0;
		}
		else
		{
			*sum=node->data;
			return 1;
		}
	}
	else
		return 0;
}
 
/*
 Helper function that allocates a new node
 with the given data and NULL left and right
 pointers.
*/
struct node* newNode(int data)
{
    struct node* node =
        (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}
 
/* Driver program to test above function */
int main()
{
    struct node *root  = newNode(26);
    root->left         = newNode(10);
    root->right        = newNode(3);
    root->left->left   = newNode(4);
    root->left->right  = newNode(6);
    root->right->right = newNode(3);
    int sum=0;
    if(isSumTree(root,&sum))
        printf("The given tree is a SumTree ");
    else
        printf("The given tree is not a SumTree ");
 
    getchar();
    return 0;
}
