#include<stdio.h>

void main()
{
	int n,i;
	float x[10],y[10],xy[10],x2[10],y2[10],z;
	float sumx=0.0,sumy=0.0,sumxy=0.0,sumy2=0.0;
	 printf("Enter the number of n points : ");
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 { 
		 printf("\n Enter the value of x%d: ",i+1);
		 scanf("%f",&x[i]);
		 printf("\n Enter the value of f(x%d): ",i+1);
		 scanf("%f",&y[i]);
}

for(i=0;i<n;i++)
{
	xy[i]=x[i]*y[i];
	y2[i]=y[i]*y[i];
	x2[i]=x[i]*x[i];
	sumxy+=xy[i];
	sumy2+=y2[i];
	sumx+=x[i];
	sumy+=y[i];
}

z=((n*sumxy-sumx*sumy)/(n*sumy2-sumy*sumy));
printf("The Regression Line Of X ON Y is :\n ");
printf("\t\t x- %f=%f(y- %f)",sumx/n,z,sumy/n);
}