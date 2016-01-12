#include <stdio.h>

void main (  ) {
	int i = 0;
	char string[20];
	printf("Enter Your name : ");
	scanf("%s", &string);
	while ( i < 5 )	{
		printf("\n Hello %s", string );
		i++;
			}
	
}