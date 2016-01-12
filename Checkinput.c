#include<stdio.h>
#include<ctype.h>
 main()

{
char inp;int i=0;
do{
puts("\nEnter your Character : ");
scanf("%c",&inp);
fflush(stdout);

if(isdigit(inp)!=0)
puts("\nthe character is digit\n");
 
if(inp>64&&inp<93)
puts("\nthe character is Upper Case.\n");

if (inp>92&&inp<119)
puts("\nthe character is Low Case.\n");


}while(i<19);
i++;
}

