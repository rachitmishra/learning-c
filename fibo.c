#include<stdio.h>

 main()

{

int i=0,j=1,lim,sum,count=0;

puts("Enter no. till to generate the fibonacci series : ");
scanf("%d",&lim);
printf("%d\t%d",i,j);
while(count<lim)
{
sum=i+j;
printf("\t%d",sum);
i=j;
j=sum;
count++;
}
}