#include<stdio.h>
main()
{
int i;
char str[50],str2[25];
char *str_ptr=str,*str2_ptr;
puts("\nEnter String One\n");
gets(str);
puts("\nEnter String Two\n");
gets(str2);

for(str2_ptr=str2;*str2_ptr!='\0';str2_ptr++)
{
*str_ptr=*str2_ptr;
str_ptr++;
}


for(i=0 ;str[i]='\0';i++)
printf("%c",str);

}
