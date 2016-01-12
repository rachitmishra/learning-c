#include<stdio.h>
int makeint(int );
int calc(int ,int );

main(int argc ,char *argv[])

{
int res,a,b;

if(argc!=3)
puts("Invalid Arguments");

a=atoi(argv[1]);
b=atoi(argv[2]);
res=calc(a,b);
printf("\nYou have To Pay : %d",res);

}

calc(int amnt , int percent)
{
int temp;
temp=amnt*percent/100;
percent=amnt-temp;
return percent;
}



