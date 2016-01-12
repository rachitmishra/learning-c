#include<stdio.h>

main()

{
      int num,sum=0;
      for(num=3;num<1000;num++)
	  {
	 if (num%3==0||num%5==0)
	 {
	 sum+=num;
	 }
	 }
	 
	 printf("The total sum is : %d",sum);
	 
	 }