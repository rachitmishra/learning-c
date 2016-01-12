#include<stdio.h> 
main()
{
int x,y;
int value;
int found[x][y] ={0,0};
int array[5];


for (x=0;x<3;x++)
{
for(y=0;y<3;y++)
array[x][y]=(x+y);
printf("Enter Value To Search for : ");
scanf("%d",&value);
for (x=0;x<5;x++)
{

if(array[x]==value)
{
found=x;
break;
}
}
if(found>-1)
printf("\n I Found your Search Value in element %d\n",found);
else
printf("\n Sorry,Your search value was not found\n");

}