#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10


typedef struct lqueue
{
int item[size];
int front,rear;
}Queue;

int isEmpty(Queue *q);
void insert_LQ(Queue *q,int x);
int removal_LQ(Queue *q);
void print_LQ(Queue *q);

main()
{
Queue *que;
que=(Queue*)malloc(sizeof(Queue));
que->rear=-1;
que->front=0;

insert_LQ(que,10);
insert_LQ(que,20);
insert_LQ(que,30);


print_LQ(que);
printf("Deleted Element=\t%d",removal_LQ(que));
print_LQ(que);
	
}

int isEmpty(Queue *q)
{
if(q->rear<q->front)
return(1);
else
return(0);
}
		
void insert_Q(Queue *q,int x)
{
if(q->rear+1==size)
{
printf("\n Queue Overflow Condition");
}
else
q->rear=q->rear+1;
q->item[q->rear]=x;
}

int removal_Q(Queue *q)
{
if(isEmpty(q))
printf("\n Underflow Condition");
else
return(q->item[q->front++]);
}

void print_LQ(Queue *q)
{
int i=q->front;
if(i<=q->rear)
{
printf("\t%d",q->item[i]);
i++;
}
}
