#include <stdio.h>

void main (  ) {
	int i = 0;
	char string[20];
	printf("Enter Your name : ");
	scanf("%s", &string);
	for ( i = 0; i < 5 ; i++ )
	{
		printf("%s\n",string );
	}
}