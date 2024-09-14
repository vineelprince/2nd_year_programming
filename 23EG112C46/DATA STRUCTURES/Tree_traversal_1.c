#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node* root = NULL;
 
void create();
void insert(struct node*,struct node*);
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);

void create()
{
	int data;
	struct node* newnode =(struct node*)malloc(sizeof(struct node));
	if (newnode == NULL)
	{
		printf("\nMemory allocation failed\n");
		return;
	}
	printf("\nEnter the data : ");
	scanf("%d",&data);
	newnode -> data = data;
	newnode -> left = NULL;
	newnode -> right = NULL;
	if (root == NULL)
	{
		root = newnode;
	}
	else
	{
		insert(root,newnode);
	}
}
void insert(struct node* root,struct node* newnode)
{
	char ch;
	printf("\nDo you want to add as left child (l) (or) right child (r) : \n");
	getchar();
	scanf("%c",&ch);
	switch(ch)
	{
		case 'l' : 
		case 'L' :
			if(root->left == NULL)
			{
				root -> left = newnode;
			}
			else
			{
				insert(root -> left,newnode);
			}
			break;
		case 'r' :
		case 'R' :
			if(root -> right == NULL)
			{
				root -> right = newnode;
			}
			else
			{
				insert(root -> right,newnode);
			}
			break;
		default :
			printf("Invalid choice! Node not inserted\n");
			free(newnode);
	}
}
void inorder(struct node* root)
{
	if(root != NULL)
	{
		inorder(root -> left);
		printf("\n%d",root ->data);
		inorder(root->right);
	}
}
void preorder(struct node* root)
{
	if(root != NULL)
	{
		printf("\n%d",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct node* root)
{
	if(root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("\n%d",root->data);
	}
}

int main()
{
	int choice,value;
	printf("\n*******MENU*******\n");
	printf("1.CREATE & INSERT\n2.INORDER\n3.PREORDER\n4.POSTORDER\n5.EXIT\n");
	while(1)
	{
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				create();				
				break;
			case 2 :
				inorder(root);
				break;
			case 3 :
				preorder(root);
				break;
			case 4 :
				postorder(root);				
				break;
			case 5 :
				exit(0);
				break;
			default :
				printf("\nINVALID CHOICE!");
				break;	 
		}
	}
}

