#include<stdio.h>

 main()

{

int i=0,j=1,lim,sum=0,store=0;

puts("\nEnter no. till to generate the fibonacci series : ");
scanf("%d",&lim);
printf("\nThe Series Is : %d\t%d",i,j);
while(sum<lim)
{
sum=i+j;
if(sum%2==0)
{
store+=sum;
}
printf("\t%d",sum);
i=j;
j=sum;
}

printf("\nThe Sum Of Even Terms Is : %d",store);
}