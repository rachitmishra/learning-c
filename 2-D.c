#include<stdio.h> 
main()
{
int x,y;
int value;
int array[3][3];


for (x=0;x<3;x++)
{
for(y=0;y<3;y++)
{
array[x][y]=x+y;
}
}
for (x=0;x<3;x++)
{
for(y=0;y<3;y++)
printf("array[%d][%d] : %d\n",x,y,array[x][y]);
}
}