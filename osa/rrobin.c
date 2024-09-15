#include<stdio.h>
#define MAX 20

main()

{
int bu[MAX],wt[MAX],tat[MAX],Rrobin[10][10],count[10];
int i,j,k,m,n,tq,max=0;
float awt,twt=0.0,sum=0.0;

puts("\nEnter the Number of Processes: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
printf("\nEnter the Bursttime for process P[%d] : ",i);
scanf("%d",&bu[i]);
}

for(i=1;i<=n;i++)
{
printf("\nBurst time for process p[%d] :%d",i+1,bu[i]);
if(max<bu[i])
max=bu[i];
wt[i]=0;
}

puts("\nEnter the Time Quantum: ");
scanf("%d",&tq);

// To Find The Dimension Of Round Robin Array

m=max/tq+1;

//initializing Round robin array

for(i=1;i<=n;i++)
{
for(j=1;j<=m;j++)
{
Rrobin[i][j]=0;
}
}

//placing value in the Rrobin array

i=1;
while(i<=n)
{
j=1;
while(bu[i]>0)
{
if(bu[i]>=tq)
{
bu[i]=bu[i]-tq;
Rrobin[i][j]=tq;
j++;
}
else
{
Rrobin[i][j]=bu[i];
bu[i]=0;
j++;
}
}
count[i]=j-1;
i++;
}


for(j=1;j<=n;j++)
{
for(i=1;i<=count[j];i++)
{
if(i==count[j])
{
for(k=1;k<j;k++)
{
if(k!=j)
wt[j]+=Rrobin[k][i];
}
}

else
for(k=1;k<=n;k++)
{
if(k!=j)
wt[j]+=Rrobin[k][i];
}
}
}

for(i=1;i<=n;i++)
{
printf("\nWaiting Time for process P[%d] : ", i,wt[i]);
}
//calculating Average Weighting Time
for(i=1;i<=n;i++)
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
