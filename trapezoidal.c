#include<stdio.h>
#include<math.h>

float f(float x);

void main()
{
	float k=0.0,h,x,a,b;
	int i;
	
	printf("The Function f(x) : 1/(1+x^2)");
	printf("\nEnter the Lower and Upper Limits ");
	printf("\na = ");
	scanf("%f",&a);
	printf("\nb = ");
	scanf("%f",&b);
	printf("\nEnter the difference 'h' = :");
	scanf("%f",&h);
	
	printf("\nx		f(x)");
	for(i=0,x=a;x<b-h;x=x+h,i++)
	{
		k+=f(x)+f(x+h);
		printf("\n%.6f%15.6f",x,f(x));
	}
	
	printf("\n%f%15.6f",x,f(x+h));
	printf("\n\n The Definite integral is %15.6f",(h/2.0)*k);
}

float f(float x)
{
return(1/(1+x*x));
}
