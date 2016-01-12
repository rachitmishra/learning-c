#include<stdio.h>
int main( ){
	int i=1,num1,num2, result=1;
	printf("%s\n","Please enter the two numbers : ");
	scanf("%d%d",&num1, &num2);
	while( i<=num2 ) {
		result*=num1;
		i++;
	}
	printf("The value of First number raised to power of Second number is : %d", result);
	return 0;
}