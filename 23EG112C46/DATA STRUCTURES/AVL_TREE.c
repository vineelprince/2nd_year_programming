#include<stdio.h>
#include<stdlib.h>

struct node
{
	int key;
	struct node* left;
	struct node* right;
	int height;
};

stuct node* insert(struct node* node,int key);
stuct node* newnode(int key);
stuct node* rightrotate(struct node* y);
stuct node* leftrotate(struct node* x);
int main()
{
	struct node *root =NULL
	int choice,key;
	do
	{
		printf("\n1.INSERT\n2.PREORDER TRAVERSAL\n3.EXIT");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter key to insert : ");
				scanf("%d",&key);
				root = insrt(root,key);
				break;
				
			case 2 :
				printf("Preorder Traversal of AVL Tree");
				preorder(root);
				printf("\n");
				break;
				
			case 3 :
				printf("Exiting......\n");
				break;
				
			default :
				printf("Invalid choice! Please enter a valid choice");
		}
	}
	while(choice != 3);
	return 0;
}

struct node* insert(struct node* node,int key)
