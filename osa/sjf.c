#include<stdio.h>
#define MAX 20

main()

{
int bu[MAX],wt[MAX],tat[MAX];
int i,j,temp,n,awt,twt=0,sum=0;

puts("\nEnter the Number of Processes: ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("\nEnter the Bursttime for process P[%d] : ",i+1);
scanf("%d",&bu[i]);
}

for(i=0;i<n;i++)
{
printf("\nBurst time for process p[%d] :%d",i+1,bu[i]);
}

for(i=n;i>0;i--)
{
for(j=1;j<n;j++)
{
if(bu[j-1]>bu[j])
{
temp=bu[j-1];
bu[j-1]=bu[j];
bu[j]=temp;
}
}

}

wt[0]=0;

for(i=1;i<n;i++)
{
wt[i]=bu[i-1]+wt[i-1];
}

for(i=0;i<n;i++)
{
twt=twt+wt[i];
tat[i]=bu[i]+wt[i];
sum+=tat[i];
}

awt=twt/n;
sum=sum/n;

printf("\nTotal Waiting Time: %d" ,twt);
printf("\nAverage Waiting Time: %d" ,awt);
printf("\nAverage turnaround Time: %d" ,sum);

}
