
 #include <stdio.h>
 
 main()
 
 {
int temp;
 char st1[11],*ptr;
 puts("\nEnter ur string : \n");
 gets(st1);
 
 
 for (ptr=st1; *ptr!='\0'; ptr++)
 {
 
 if(*ptr>*(*ptr+1))
 {
temp=*ptr;
*ptr=*(*ptr+1);
*(*ptr+1)=temp;
 }
 }
 for(ptr=st1; *ptr!='\0'; ptr++)
 printf("\n%c",*ptr);
 }
 