#include <stdio.h>

void main (  ) {
	int num1, i, store;

		printf(" Enter the number to print table for : ");
		scanf ( "%d", &num1 );
		printf(" Table for %d is  : ", num1);
		for ( i = 1; i<=10 ; i ++ )
		{
			store = i * num1;
			printf ( "\n\t%d X %d = %d ", num1, i , store );
		}


}