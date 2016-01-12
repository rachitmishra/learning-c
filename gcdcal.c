#include<stdio.h>
main()
{
	int m,n,temp;
	printf("Enter the two numbers:");
	scanf("%d,%d",&m,&n);
	while(n!=0)
	{
		
		temp=m%n;
		m=n;
		n=temp;
	
	}printf("%d is GCD",m);
	
}