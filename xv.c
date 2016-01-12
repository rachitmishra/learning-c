#include <stdio.h>

void main (  ) {
	int  choice;
	do
	{
		printf("\n\t1. Find Addition ");
		printf("\n\t2. Find Substraction ");
		printf("\n\t3. Find Multiplication ");
		printf("\n\t4. Find Division ");
		printf("\n\t5. Exit");
		printf("\n\tEnter You choice : 1 or 2 or 3 or 4 or 5 : " );
		scanf("%d",&choice);
	} while ( choice != 5);
}