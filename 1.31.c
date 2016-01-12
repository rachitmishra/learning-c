#include<stdio.h>

main()

{

int x,y=0;
char string[30];
puts("\n Enter The String : \n");
gets(string);
puts("\nEnter Your No. :  \n");
scanf("%d",&x);
printf("You entered : %d\n",x);

while(y!=x)
{
puts(string);
y++;
}

} 