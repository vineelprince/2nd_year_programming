#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node * right;
};
struct node * delete();
struct node * delete(struct node *root,int data)
{
	if(root == NULL)
		return root;
	if(data < root -> data)
		root -> left = delete(root -> left,data);
	else if(data > root ->data)
		root -> right = delete(root -> right,data);
	else 
	{
		if(root -> left == NULL)
		{
			temp = root;
			root = root -> right;
			free(temp);
			return root;
		}
		else if(root -> right == NULL)
		{
			temp = root;
			root = root -> left;
			free(temp);
			return root;
		}
		struct node *temp = findmin(struct node *root);
		{
			while(root -> left != NULL)
				root = root -> left;
			return root;
		}
	}
}

