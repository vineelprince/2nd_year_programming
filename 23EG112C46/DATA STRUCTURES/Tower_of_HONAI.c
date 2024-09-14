#include<stdio.h>
#include<stdlib.h>
void towers(int,char,char,char);
int main()
{
	int num,S,D,A;
	printf("Enter Number of Disks : ");
	scanf("%d",&num);
	towers(num,'S','D','A');
	return 0;
}
void towers(int num,char source,char dest,char aux)
{
	int steps;
	if(num == 1)
	{
		printf("\nMove disk from %c to %c\n",source,dest);
		return;
	}
	if(num > 1)
	{
		steps = 2^num - 1;
		printf("The number of steps to move from SOURCE TO DESTINATION is %d",steps);
	}
	towers(num-1,source,aux,dest);
	printf("\nMove disk from %c to %c\n",source,dest);
	towers(num-1,aux,dest,source);
}
