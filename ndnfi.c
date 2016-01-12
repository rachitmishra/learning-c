#include<stdio.h>
#include<math.h>
void main()
{
	int n,i,l,sign,z,j;
	float x[10],y[10],diff[10][10],u,v,x0,ans=0.000000;
	printf("\nEnter How Many Values do you want to Enter : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n\t Enter the value of x%d and y%d : ",i,i);
		scanf("%f%f",&x[i],&y[i]);
	}
printf("n\t Now enter the value of x for which you want value of(dy/dx) : ");
scanf("%f", &x0);
for(i=0;i<n;i++)
{
	diff[i][0]=y[i+1]-y[i];
}
z=n;
for(j=1;j<n-1;j++)
{
	for(i=0;i<z;i++)
	{ 
		diff[i][j]=diff[i+1][j-1]-diff[i][j-1];
		z--;
	}
}
for(i=0;x[i]<x0;i++)
	if(x[i]>0)
		i--;
for(j=0;j<n-(1+i);j++)
{
	if(j%2==0)
		sign=1;
		else
			sign=-1;
ans=ans+(sign*diff[i][j]/(j+1));
}
ans=ans/(x[1]-x[0]);
printf("\n\n\t The Value of dy/dx when x=%f is (dy/dx)= %f",x0,ans);

}