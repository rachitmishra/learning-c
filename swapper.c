#include<stdio.h>


void swap(int,int);
main()

{

int a,b;
printf("\nEnter Nos. To swap : ");
scanf("%d%d",&a,&b);

swap(a,b);

}
void swap(int x ,int y)
{

int temp;
temp=x;
x=y;
y=temp;
printf("%d %d",x,y);
}