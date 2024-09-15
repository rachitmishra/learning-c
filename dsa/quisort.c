#include<stdio.h>
//#include<conio.h>

void quick_sort(int A[],int lb,int ub);
int partition(int A[],int lb,int ub);

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
quick_sort(A,0,n-1);

printf("\nArray After Sorting : ");
for(i=0;i<n;i++)
	{
	printf("\t%d",A[i]);
	}
//getch();
}

void quick_sort(int A[],int lb ,int ub)
	{
		if(lb<ub)
			{
			int j=partition(A,lb,ub);
			quick_sort(A,lb,j-1);
			quick_sort(A,j+1,ub);
			}
	}
int partition(int A[],int lb,int ub)
{
int left,right,pivot,x;
		left=lb;
		right=ub;

	pivot=A[lb];
	
	while(left<right)
	{
	while(left<=ub&&A[left]<=pivot)
			{
				left++;
			}
	while(A[right]>pivot)
			{
				right--;
			}
	
		if(left<right)
			{
				x=A[left];
				A[left]=A[right];
			}	
		A[lb]=A[right];
		A[right]=pivot;
		return(right);
	}

}