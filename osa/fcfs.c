#include<stdio.h>
#define MAX 20

main()

{
int bu[MAX],wt[MAX];
int i,n,awt,twt=0,sum=0,tat[MAX];

puts("\nEnter the Number of Processes: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter the Bursttime for process P[%d] : ",i);
scanf("%d",&bu[i]);
}

for(i=0;i<n;i++)
{
printf("\nBurst time for process p[%d] :%d",i,bu[i]);
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
