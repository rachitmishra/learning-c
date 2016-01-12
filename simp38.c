#include<stdio.h>
#include<math.h>

float f(float x);

void main()
{
	float k=0.0,h,x,a,b;
	int i,n;
	
	printf("The Function f(x) : 1/(1+x^2)");
	printf("\nEnter the Lower and Upper Limits ");
	printf("\na = ");
	scanf("%f",&a);
	printf("\nb = ");
	scanf("%f",&b);
	printf("\nEnter number of strips ( in multiple of 3)= :");
	scanf("%d",&n);
	
	h=(b-a)/(3*(n/3));
	printf("\nx		f(x)");
	for(i=0,x=a;x<b;x=x+3*h,i=i++)
	{
		k+=f(x)+3*f(x+h)+3*f(x+2*h)+f(x+3*h);
		printf("\n%.6f%15.6f",x,f(x));
		printf("\n%.6f%15.6f",x+h,f(x+h));
		printf("\n%.6f%15.6f",x+2*h,f(x+2*h));
	}
	
	printf("\n%f%15.6f",x,f(x+h));
	printf("\n\n The Definite integral is %15.6f",(3*h/8.0)*k);
}

float f(float x)
{
return(1/(1+x*x));
}
