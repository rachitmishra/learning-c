#include<stdio.h>
main()
{


char in,ou,temp;
ou=' ';
while (in!='0')
{
puts( "\n\nEnter any Character Of Your Choice") ;
scanf("\n%c",&in);


if(in>ou)
{
temp=in;
in=ou;
ou=temp;
printf(" \nThe character is greater than previous character & is : %c \n",ou);
}
else if(ou>in)
{
temp=ou;
ou=in;
in=temp;
printf(" \nThe character is less than previous character & is : %c \n",ou);
}
else 
printf(" \nthe characters are equal \n");
}
return 0;
}