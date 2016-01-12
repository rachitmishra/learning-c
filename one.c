#include<stdio.h>
int main( )
{
	int cost, sell, temp;
	printf("%s\n","Enter the Cost Prize");
	scanf("%d",&cost);
	printf("%s\n","Enter the Selling Prize");
	scanf("%d",&sell);
	if (sell>cost){
	temp = sell-cost;
	printf("The seller had a profit of Rs.%d ", temp); 
	}
	else {
	temp = cost-sell;
	printf("The seller had a lost of Rs.%d", temp); 	
	}
	return 0;
}