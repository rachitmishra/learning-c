#include<stdio.h>

void main()
{
unsigned int k,h;
DDR A =0X00;
DDR D =0XFF;

while (1)
{
k=~PIN A;
h=k& 0X0F;
switch(h)
{
case 0X02: // if I/P is 0X02
{
PORT D= 0X89; O/P 0X89 i.e forward
break;
}
case 0X08: //if I/P is 0X08
{
PORT D= 0X86; O/P 0X89 i.e forward
break;
}
case 0X04:
{
PORT D= 0X85;//Left Turn
break;
}
case 0X05:
{
PORT D= 0X8A;//Right Turn
break;
}
case 0X06:
{
PORT D= 0X00;//STOP
break;
}
}
}
