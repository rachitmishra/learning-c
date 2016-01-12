#include<stdio.h>

main()

{
int ws=0;
char str[81],*str_p;

puts("Input String : ");
gets(str);

for(str_p=str;*str_p!='\0';str_p++)

{

if(*str_p==' ')
{
ws++;

continue;

}
printf("%c",*str_p);
}

}