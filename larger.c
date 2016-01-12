#include<stdio.h>
main()
{
int num,larg=0;


do{	
	printf("Enter Numbers One By One ");
	printf("(A Zero Or Negative Ends the program) : ");
	scanf("%d",&num);
	if(num>larg)
		{
			larg=num;
		}
}while(num>0&&num!=0);
printf("The Largest Number is : %d",larg);
}