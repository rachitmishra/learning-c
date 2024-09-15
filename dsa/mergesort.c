#include<stdio.h>
//#include<conio.h>

void merge_sort(int A[],int lb,int ub);
int combine(int A[],int lb,int mid,int ub);

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
merge_sort(A,0,n-1);

printf("\nArray After Sorting : ");
for(i=0;i<n;i++)
	{
	printf("\t%d",A[i]);
	}
//getch();
}

void merge_sort(int A[],int lb ,int ub)
	{
		if(lb<ub)
			{
			int mid=(lb+ub)/2;
			merge_sort(A,lb,mid);
			merge_sort(A,mid++,ub);
			combine(A,lb,mid,ub);
			}
	}
int combine(int A[],int lb,int mid,int ub)
{
int i,j,k;

		int temp[30];
		
		i=lb;
		j=ub;
		j=mid+1;
		
		k=0;
	
	while(j<=mid&&j<=ub)
	{
	if(A[i]<A[j])
		{
			temp[k]=A[i];
			i++;
			k++;
		}
	else
		{
		temp[k]=A[j];
		j++;
		k++;
		}
	}
	
		while(i<=mid)
		{
			temp[k]=A[i];
			i++;
			k++;
		}
		while(j<=ub)
		{
		temp[k]=A[j];
		k++;
		j++;
		}
		
	i=lb;
	k=0;
	while(i<=ub)
	{
	A[i]=temp[k];
	i++;
	k++;
}
}