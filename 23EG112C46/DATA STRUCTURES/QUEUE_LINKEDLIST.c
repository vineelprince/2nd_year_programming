#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*temp,*front = NULL,*rear = NULL;
void enqueue(int);
void dequeue();
void peek();
void display();
void main()
{
	int choice,value;
	printf("\n::QUEUE IMPLEMENTATION::\n");
	while(1)
	{
		printf("\n*******QUEUE MENU*******\n");
		printf("\n1.ENQUEUE\n2.DEQUEUE\n3.PEEK\n4.DISPLAY\n5.EXIT");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				printf("Enter value : ");
				scanf("%d",&value);
				enqueue(value);
				break;
			case 2 :
				dequeue();
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
}
void enqueue(int value)
{
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode -> data = value;
	newnode -> next = NULL;
	if(front == NULL && rear == NULL)
	{
		front = rear = newnode;
	}
	else
	{
		rear -> next = newnode;
		rear = newnode;	
	}
	printf("INSERTED SUCCESSFULLY");
}
void dequeue()
{
	if(front == NULL)
	{
		printf("\nQUEUE IS EMPTY\n");
	}
	else
	{
		temp = front;
		front = front -> next;
		printf("\nDELETED ELEMENT IS %d",temp -> data);
		free(temp);
	}
}
void peek()
{
	if(front == NULL)
	{
		printf("\nQUEUE IS EMPTY\n");
	}
	else
	{
		printf("\nFRONT ELEMENT IS %d",front -> data);
	}
}
void display()
{
	if(front == NULL)
	{
		printf("\nQUEUE IS EMPTY\n");
	}
	else
	{
		temp = front;
		while(temp -> next != NULL)
		{
			printf("%d ->",temp -> data);
			temp = temp->next;
		}
		printf("%d->NULL",temp->data);
	}
}

