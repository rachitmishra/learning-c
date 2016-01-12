
// COUNTING THE NUMBER OF DIGITS IN A NUMBER.


#include<stdio.h>

main()
{
int y=1,n;
puts("Enter No. to count for digits : ");
scanf("%d",&n);
while(n/=10)
{
y++;
}
printf("%d",y);
}