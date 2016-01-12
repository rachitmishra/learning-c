#include<stdio.h>

main()

{

char ch;

do

{
printf("\nEnter Your Character .. :");
ch=getchar();
if(ch!='y'||ch!='n')
puts("\nEnter Only Y or N");
}while(ch!='y'||ch!='n');
}