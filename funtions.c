/*
Function have two categories

Library functions predefined libraries 
User defined functions developed by user

Every program in C can be designed using a collection of these black boxes known as functions. */

# include <stdio.h>
	void printline( void );
	main ( ) {
		printline( );
		printf("this is a function MAIN\n");
		printline( );
	}

	void printline( ) {
		int i;
		for( i=1; i<40; i++ ) {
		printf("-");
		}
		printf("\n");
	}

