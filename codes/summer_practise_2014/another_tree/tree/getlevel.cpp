#include<stdio.h>
 
/* A tree node structure */
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
 
int getLevel(struct node *node, int val,int *level)
{
	if(node==NULL)
	{
		*level=0;
		return 0;
	}
	if(node->data==val)
	{
		*level=1;
		return 1;
	}
	int lh,rh;
	int l=getLevel(node->left,val,&lh);
	int r=getLevel(node->right,val,&rh);
	if(l)
	{

		*level=1+lh;
		return l;
	}	
	if(r)
	{
		*level=1+rh;
		return r;
	}
	else return 0;
}
 
/* Utility function to create a new Binary Tree node */
struct node* newNode(int data)
{
    struct node *temp = new struct node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
 
    return temp;
}
 
/* Driver function to test above functions */
int main()
{
    struct node *root = new struct node;
    int x;
 
    /* Constructing tree given in the above figure */
    root = newNode(3);
    root->left = newNode(2);
    root->right = newNode(5);
    root->left->left = newNode(1);
    root->left->right = newNode(4);

    int level=1;

    for (x = 1; x <=5; x++)
    {
	getLevel(root,x,&level);
        printf(" Level of %d is %d\n", x, level);
    }
 
    getchar();
    return 0;
}
