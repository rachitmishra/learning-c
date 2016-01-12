#include<stdio.h>

main()

{

int n,i,j;

puts("Enter Your no.\n");
scanf("%d",&n);

for(i=0;i<n;i++)
{ 
puts("\n");
for (j=i;j>=0;j--)
puts("*\n");
}
}