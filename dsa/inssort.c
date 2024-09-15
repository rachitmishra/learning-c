/* Selection Sorting an Array

Time Complexity=	O(n)	[Best Case]
					O(n2)	[Worst Case]
					O(n)	[Average case]
*/
#include<stdio.h>
//#include<conio.h>

void insertion_sort(int A[],int n);

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
insertion_sort(A,n);

printf("\nArray After Sorting : ");
for(i=0;i<n;i++)
	{
	printf("%d\t",A[i]);
	}
//getch();
}

void insertion_sort(int A[],int n)
{
int i,j,x;

	for(i=1;i<n;i++)
	{
		x=A[i];
		j=i-1;
			while(j>=0&&A[j]>=x)
				{	
					A[j+1]=A[j];
					j--;
				}	A[j+1]=x;
	}
}
