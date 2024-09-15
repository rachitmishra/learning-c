// Stack Using An Array

#include<stdio.h>

#define MAXSIZE 20

typedef struct stack
{
		int stack[MAXSIZE];
		int tos;
} Node;

void push(Node *);
void pop(Node *);
void traverse(Node *);

 main()
{

int choice;
char ch;

Node *ps;
ps->tos=-1;

do
{

printf("\n1.PUSH");
printf("\n2.POP");
printf("\n3.Traverse");
printf("\nEnter Your CHoice : ");
scanf("%d",&choice);

switch(choice)
{
case 1: push(ps);
			break;
case 2: pop(ps);
			break;
case 3: traverse(ps);
			break;

default:puts("\nErrorr");
}
fflush(stdin);
puts("\nCOntinue (Y/N) : ");
scanf("%c",&ch);

}while(ch=='Y'||ch=='y');

}

void push(Node *pu)
{
int item;

if(pu->tos==MAXSIZE-1)
{
puts("\\nOverflow.");
exit(0);
}
else
{
puts("\nEnter element to be inseted : ");
scanf("%d",&item);
pu->stack[++pu->tos]=item;
}

}

void pop (Node *po)
{
int item;

if(po->tos==-1)
{
puts("\nUnderflow.");
exit(0);
}

else
{
item=po->stack[po->tos--];

puts("\nDeleted Item IS : " );
printf("%d",item);
}
}

void traverse(Node *tr)
{
int i;

if(tr->tos==-1)
{
puts("\nEmpty.");
exit(0);
}
else
{
puts("\nStack Elements Are : ");
for(i=tr->tos;i>=0;i--)
{
printf("\t%d",tr->stack[i]);
}
}
}

