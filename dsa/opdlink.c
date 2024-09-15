#include<stdio.h>
//#include<conio.h> // Header files to be used.
#include<stdlib.h>

typedef struct tnode // typedef is used for defining a new datatype i.e user 
					 //	defined datatype for a system defined or predefined datatype.
	{				 // a structure is created here which contains the info. about the Nodes.
	int data;		 // data is declared as to store our data.
	struct tnode *next;
	struct tnode *previous;
	} Node;
	
Node *append_list(Node *,int );  // Function protypes.
void   print_list(Node *);
Node *sort_list(Node *);
Node *search_list(Node *,int);
Node *insertsort_list(Node *,int);
Node *delete_list(Node *Head,int x);


main()
{

Node *Head= NULL;				// Initialisation of head to NULL.(as the list is yet empty)
								//Head is also of Node * type as it will store the address of first Node.
int i , x , num,sea,ins,del;    // Various variables to be used.

puts("\nHow Many No.s You Want to Enter : ");
scanf("%d",&x);					// How many nodes do you want ?

puts("\nEnter the data: ");
for(i=0;i<x;i++) 				// for loop as many times as data is entered.
{
scanf("%d",&num);				//Enter your Data.
Head=append_list(Head,num);		// append OR add funcion is called. the return value is stored in Head
								//which is indeed a address value.i.e address of first Node.
}

puts("\nList contents are : "); //Printing or traversing the list.(Traversing=sequential travelling.)
print_list(Head);				//Print function is called as to print the list.
puts("\n");

puts("\nSorted List contents are : "); 	// Sorting the list in a definte order.
Head= sort_list(Head);			// again a sort function is called and the value is stored in Head.
								// as we have the address of first Node we can print entire list.
print_list(Head);
puts("\n");

puts("\nEnter the Data to Be Searched : "); // Searching for a Node with valid data entered.
scanf("%d",&sea);							//reading the data to be searched.

Head=search_list(Head,sea);					//search function is called .. the return value stored in Head.

puts("\nEnter the data to be inserted at sorted position : "); // Insertion at sorted position
scanf("%d",&ins);							//Reading the data to be inserted.

Head=insertsort_list(Head,ins);				//insert function call and return value stored in Head
print_list(Head);
puts("\n");

puts("\nEnter the Data to Be Deleted : "); //deletion of a Node
scanf("%d",&del);

Head=delete_list(Head,del);
print_list(Head);
puts("\n");
//getch();
}

Node *append_list(Node *start,int x)		 // Adding a new node to the Linked List.
	{	

		Node *new,*p;

		p=(Node *)malloc(sizeof(Node));
		p->data=x;
		p->next=NULL;


		if (start==NULL)
		start=p;
		p->previous=start;
		else
            {
				new=start;
				while(new->next!=NULL)
					{
						new=new->next;
					}
				new->next=p;
				

	}

return(start);

}

void print_list(Node *start)				//Printing the Linked List.
	{ 

		Node *temp;
		if(start==NULL)
		{
			puts("\nListe is Empty");
		}
		else
		{
			for(temp=start;temp!=NULL;temp=temp->next)
			{
			printf("%d\t",temp->data);
			}
		}
	}

Node *sort_list(Node *start)				//Sorting the Linked List.
	{

		Node *p,*q; 
		int temp;
		
		
		for(p=start;p->next!=NULL;p=p->next)
			{
				for(q=p->next;q!=NULL;q=q->next)
					{
						if(p->data>=q->data)
							{
								temp=p->data;
								p->data=q->data;
								q->data=temp;
							}
					}
				
			}
		return(start);
	}	

Node *search_list(Node *start,int x)		//Searching a Node throughout the Linked list.
	{

	Node *p;
	int count=1;

	for(p=start;p->next!=NULL&&p->data!=x;p=p->next,count++);
	
	if(p->data==x)
	printf("\nNode found at position : %d",count);
	else
	puts("\nNode not found.");
	return(start);
	}

Node *insertsort_list(Node *start,int x)	// Inserting a Node at the sorted position.
	{

		Node *p,*q,*new;
		
		new=(Node *)malloc(sizeof(Node));
		new->data=x;

		p=NULL;
		q=start;

		while(q!=NULL&&x>q->data)
			{
				p=q;
				q=q->next;
			}

		if(p==NULL)
		start=new;
		new->previous=start;
		else
		p->next=new;
		new->previous=start;
		new->next=q;
		q->previous=new;
		return(start);
	}

Node *delete_list(Node *start,int x)		// Deleting a Node from the list.
	{

		Node *p,*q;
		p=start;
		q=start;
		while(q->next!=NULL&&q->data!=x)
			{
				p=q;
				q=q->next;
			}
		if(p==start)
		start=start->next;
		p->next=q->next;
		q->next->previous=p->previous;
		free(q);
		return(start);
	}






