#include<stdio.h>
main()
{
	int m,n;
	printf("Enter the Any Number:");
	scanf("%d",&m);
	printf("Reverse is :");
	do
	{	n=m;
		m=m/10;
		m=m%10;
		printf("%d",m);
	
	}while(m/10!=0);
	
}