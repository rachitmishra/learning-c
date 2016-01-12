#include<stdio.h>


main()

{

char str[80],str2[40];
int i=0,len=0;
char *ptr_1,*ptr_2;
puts("Enter both Strings\n");
gets(str);
gets(str2);
ptr_1=str;ptr_2=str2;
while(*(ptr_1+len)!='\0')
len++;
while(*(ptr_2+i)!='\0')
{
*(ptr_1+len)=*(ptr_2+i);
len++;
i++;
}
*(ptr_1+len)='\0';

puts(ptr_1);
}


