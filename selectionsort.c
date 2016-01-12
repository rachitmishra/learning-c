#include<stdio.h>

void swap( int *  , int *  );

main()
{

int i,j;
char arr[6]={5,6,7,8,9,11};
int m , n=6;

for(j=0;j<n-1;j++)
{
for(i=j+1;i<n;i++)
{
if(arr[i]<arr[j])
swap ( &arr[i] , &arr[j]);
}
}
for(j=0;j<6;j++)
printf("%d\n",arr[j]);
}

void swap(int *a ,int *b)
{
int t;
t=*a ;
*a=*b ;
*b=t ;
}