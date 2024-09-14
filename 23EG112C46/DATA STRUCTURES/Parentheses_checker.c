#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 10

char stack[MAX_SIZE];
int top = -1;

void push(char data)
{
	if (top == MAX_SIZE - 1)
	{
		printf("OVERFLOW\n");
	}
	else
	{
		top ++;
		stack[top] =data;
	}
}
char pop()
{
	if(top==-1)
	{
		printf("Stack emptty");
	}
	else
	{
		char data = stack[top];
		top--;
		return data;
	}
}
int ismatching_pair(char char1,char char2)
{
	if(char1 == '(' && char2 == ')')
	return 1;
	else if (char1 == '[' && char2 == ']')
	return 1;
	else if (char1 == '{' && char2 == '}')
	return 1;
	else
	return 0;
}
int isbalanced(char *text)
{
	int i;
	for(i=0;i<strlen(text);i++)
	{
		if(text[i] == '(' || text[i] == '[' || text[i] == '{')
		{
			push(text[i]);
		}
		else if(text[i] == ')' || text[i] == ']' || text[i] == '}')
		{
			if(top == -1)
			return 0;
			else if(!ismatching_pair(pop(),text[i]))
			return 0;
	    }
	}
	return(top == -1);
}
int main()
{
	char expression[MAX_SIZE];
	printf("Enter an expression: ");
	scanf("%s",expression);
	if(isbalanced(expression))
	{
		printf("Balanced \n");
	}
	else
	{
		printf("Unbalanced \n");
	}
	return 0;
}
