
/* Bubble Sorting an Array

Time Complexity=	O(n)	[Best Case]
					O(n2)	[Worst Case]
					O(n)	[Average case]
*/

#include<stdio.h>
//#include<conio.h>

void bubble_sort(int A[],int n);

main()
{
int A[40];
int i,n;
printf("\nHow many numbers: ");
scanf("%d",&n);

printf("\nEnter the elements: ");
for(i=0;i<n;i++)
	{
	scanf("%d",&A[i]);
	}
bubble_sort(A,n);

printf("\nArray After Sorting : ");
for(i=0;i<n;i++)
	{
	printf("/t%d",A[i]);
	}
//getch();
}

void bubble_sort(int A[],int n)
{
int i,j,temp;

	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(A[j]>A[j+1])
				{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
				}
		}
	}
}
 