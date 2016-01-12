#include<stdio.h>

 main()

{

int num,n,sum=0,i=0;
int aver;

puts("Enter for how many no.s you want to calclulate the average : ");
scanf("%d",&n);

while(i < n)
{
puts("Enter Your Nos. : ");
scanf("%d",&num);
sum+=num;
i++;
}

aver=sum/n;



printf("\nThe Average Is : %d",aver);
}

