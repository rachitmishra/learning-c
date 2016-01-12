#include<stdio.h>


main()
{



int i,j,n;



system("clear");



printf("Enter limit for pyramid :");



scanf("%d",&n);



for(i=0;i<=n;i++)



{



for(j=i;j<n;j++)



printf(" ");



for(j=0;j<=i;j++)



printf("*");



for(j=0;j<i;j++)



printf("*");



printf("\n");



}




}