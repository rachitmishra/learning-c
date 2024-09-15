#include<stdio.h>

main()
{
int x,i,f=1;
printf("Enter the Number :");
scanf("%d",&x);

for (i=1;i<=x;i++)
{
f=f*i;
}

printf("%d",f);
}