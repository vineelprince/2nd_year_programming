#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}temp *top=NULL;
void push(int);
void pop();
void peek();
void display();
int main()
{
	int choice,value;
	while(1)
	{
		printf("1.push\n 2.pop\n 3.peek\n 4.display\n 5.exit\n");
		printf("\nEnter choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				printf("Enter a value : ");
				scanf("%d",&value);
				push(value);
				break;
			case 2 :
				pop();
				break;
			case 3 :
				peek();
				break;
			case 4 :
				display();
				break;
			case 5 :
				exit(0);
				break;	
			default :
			printf("INVALID CHOICE!");
			break;		
		}
	}
	void push(int value)
	{
		struct node *newnode;
		newnode = (struct node*)malloc(size of(newnode));
		newnode->data =value;
		if(top==NULL)
		{
			newnode->next = NULL;
		}
		else
		{
			newnode->next = top;
		}
		top = newnode;
	}
	void pop()
	{
		if(top==NULL)
		{
			printf("Stack empty");
		}
		else
		{
			temp = top;
			top = temp->next;
			printf("Deleted");
			free(temp);
		}
	}
	void peek()
	{
		if(top == NULL)
		{
			printf("Stack empty");
		}
		else
		{
			printf("Top element is %d",top->data);
		}
	}
}
	
