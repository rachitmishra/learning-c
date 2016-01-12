#include<stdio.h>
int main( ){
	int number;
	printf("%s\n","Please enter the number to check if it is Odd or Even");
	scanf("%d",&number);
	if(number%2==0)
		printf("The entered number is Even");
	else
		printf("The entered number is Odd");
	return 0;
}