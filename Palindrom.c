//Checking Palindrome

#include<stdio.h>
#define FF   fflush(stdin)

main()
{

int str[20], *ptr, *ptr1;

		puts("\nEnter your String\n");
		gets(str);
		

	for (ptr1=str ;  *ptr1!='\0' ; ptr1++);
	ptr1--;
	for (ptr=str ; ptr<=ptr1 ; ptr1-- , ptr++)
			{
					if(*ptr !=*ptr1)
					break;
			}

if(ptr>ptr1)

		puts("\nString Is a palindrome");
else
		puts("\nString Is not palindrome");

}