
/* Bubble Sorting an Array

Time Complexity=	O(n)	[Best Case]
					O(n2)	[Worst Case]
					O(n)	[Average case]
*/

#include<stdio.h>
//#include<conio.h>

void heap_sort(int A[],int n);

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
heap_sort(A,n);

printf("\nArray After Sorting : ");
for(i=0;i<n;i++)
	{
	printf("\t%d",A[i]);
	}
//getch();
}

void heap_sort(int A[],int n)
{
int i,x,c,p;

	for(i=1;i<n;i++)
	{
		x=A[i];
		c=i;
		p=(c-1)/2;
			while(p>=0&&x>A[p])
			{
				A[i]=A[p];
				c=p;
				p=(c-1)/2;
			}
			A[i]=x;
		}
	}