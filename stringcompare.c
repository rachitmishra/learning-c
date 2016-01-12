#include<stdio.h>

main()

{

char st1[60],st2[60],*ptr_1,*ptr_2;
puts("Enter Yor Strings\n");
gets(st1);
gets(st2);

int check=0;
for(ptr_1=st1,ptr_2=st2; *ptr_1!='\0'||*ptr_2!='\0';ptr_1++,ptr_2++)
{

if (*ptr_1!=*ptr_2)
{
printf("Strings are not Equal\n");
check++;
break;
}
if(check==0)
{
printf("Strings are  Equal\n");
break;
}
}
}
