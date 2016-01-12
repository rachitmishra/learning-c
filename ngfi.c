#include<stdio.h>
#include<math.h>

void main()
{

int i,j,n;
float xy[10][11],h,p,px=1,x,y;
char str[80];

printf("Enter the number of data : ");
scanf("%d",&n);
printf("Enter the data : \n");
for(i=0;i<n;i++)
{
printf("x(%d) and y(%d) : ",i+1,i+1);
scanf("%f%f",&xy[i][0],&xy[i][1]);
}

for(j=2;j<n+1;j++)
for(i=0;i<n-1;i++)
xy[i][j]=xy[i+1][j-1]-xy[i][j-1];

printf("\nThe Difference table is :- ");
printf("\nx 	f(x)	");
for(i=0;i<n-1;i++)
printf("?^%d	",i+1);

for(i=0;i<n;i++)
{
	printf("\n");
			for(j=0;j<n+1-i;j++)
			{
				printf("%.4f	",xy[i][j]);
			} 
}
	printf("\n Enter the value of 'x' : ");
	scanf("%f",&x);
	h=xy[1][0]-xy[0][0];
	p=(x-xy[0][0])/h;
	y=xy[0][1];
	for(i=1;i<n;i++)
	{
		px*=(p-(i-1))/i;
		y+=xy[0][i+1]*px;
	}
	
	printf("\n The Value of function at x = %f is %f",x,y);
	
	}
	