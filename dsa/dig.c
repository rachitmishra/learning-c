


#include<stdio.h>

main()
 
{
int num,dig;
puts("Enter the Number and the digit to be searched :");
scanf("%d%d",&num,&dig);


while(num/10!=0)
{

if(num/10==dig)
{
printf("\nDigit Found");
}
}
}
