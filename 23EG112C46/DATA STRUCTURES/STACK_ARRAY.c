#include<stdio.h>
#include<stdlib.h>
int stack[100],n,choice,value,top,i;
void push();
void pop();
void peek();
void display();
int main()
{
	printf("Enter no.of elements : ");
	scanf("%d",&n);
	while(1)
	{
		printf("1.push\n 2.pop\n 3.peek\n 4.display\n 5.exit\n");
		printf("\nEnter choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				push();
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
}
	void push()
	{
		if(top==n-1)
		{
			printf("OVERFLOW");
		}
		else
		{
			printf("Enter value : ");
			scanf("%d",&value);
			top = top+1;
			stack[top] = value;
			printf("Inserted element is %d",value);
		}
	}
	void pop()
	{
		if(top == -1)
		{
			printf("UNDERFLOW");
		}
		else
		{
			value = stack[top];
			top = top-1;
			printf("Deleted element is %d",value);
		}
	}
	void peek()
	{
		if(top == -1)
		{
			printf("UNDERFLOW");
		}
		else
		{
			printf("The top element of the stack is %d",stack[top]);
		}
	}
	void display()
	{
		if (top!=-1)
		{
			for(i=0;i>0;i--)
			{
				printf("Stack elements are : %d",stack[i]);
			}
		}
		printf("Stack empty");
	}

