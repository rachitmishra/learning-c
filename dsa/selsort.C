`/* Selection Sorting an Array

Time Complexity=	O(n)	[Best Case]
					O(n2)	[Worst Case]
					O(n)	[Average case]
*/
#include<stdio.h>
//#include<conio.h>

void selection_sort(int A[],int n);

void main()
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
selection_sort(A,n);

printf("\nArray After Sorting : ");
for(i=0;i<n;i++)
	{
	printf("\t%d",A[i]);
	}
//getch();
}

void selection_sort(int A[],int n)
{
int i,j,temp;

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(A[i]>A[j])
				{
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
				}
		}
	}
}
