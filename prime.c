// Check Prime !!

#include<stdio.h>

main()

{

int i,n,count=0;

puts("\nEnter The Number To Check For prime :\n");
scanf("%d",&n);

for(i=2;i<n;i++)
{
if(n%i==0)
{
count++;
puts("\nNot a prime");
break;
}

if(count==0)
{
puts("\nYes a prime");
break;
}
}
}
