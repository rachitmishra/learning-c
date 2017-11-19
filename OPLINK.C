#include <stdio.h>
//#include<conio.h> // Header files to be used.
#include <stdlib.h>

typedef struct tnode {
  int data;
  struct tnode *next;
} Node;
Node *append_list(Node *, int);
void print_list(Node *);
Node *sort_list(Node *);
Node *search_list(Node *, int);
Node *insertsort_list(Node *, int);
Node *delete_list(Node *Head, int x);

main() {

  Node *Head = NULL;
  int i, x, num, sea, ins, del;

  puts("\nHow Many No.s You Want to Enter : ");
  scanf("%d", &x);

  puts("\nEnter the data: ");
  for (i = 0; i < x; i++) {
    scanf("%d", &num);
    Head = append_list(Head, num);
  }
  puts("\nList contents are : ");
  print_list(Head);

  puts("\nSorted List contents are : ");
  Head = sort_list(Head);
  print_list(Head);

  puts("\nEnter the Data to Be Searched : ");
  scanf("%d", &sea);

  // Head=search_list(Head,sea);

  puts("\nEnter the data to be inserted at sorted position : ");
  scanf("%d", &ins);

  Head = insertsort_list(Head, ins);
  print_list(Head);

  puts("\nEnter the Data to Be Deleted : ");
  scanf("%d", &del);

  Head = delete_list(Head, del);
  print_list(Head);
  // getch();
}

Node *append_list(Node *list, int x) {

  Node *new, *p;

  p = (Node *)malloc(sizeof(Node));
  p->data = x;
  p->next = NULL;

  if (list == NULL) {
    list = p;

  } else {
    new = list;
    while (new->next != NULL) {
      new = new->next;
    }
    new->next = p;
  }

  return (list);
}

void print_list(Node *Head) {

  Node *temp;
  if (Head == NULL) {
    puts("\nListe is Empty");
  } else {
    for (temp = Head; temp != NULL; temp = temp->next) {
      printf("%d\t", temp->data);
    }
  }
}

Node *sort_list(Node *list) {

  Node *p, *q;
  int temp;
  for (p = list; p->next != NULL; p = p->next) {
    for (q = p->next; q != NULL; q = q->next) {
      if (p->data >= q->data) {
        temp = p->data;
        p->data = q->data;
        q->data = temp;
      }
    }
  }
  return (list);
}

Node *search_list(Node *Head, int x) {

  Node *temp;
  int count = 1;

  for (temp = Head; temp->next != NULL; temp = temp->next, count++) {
    if (temp->data == x)
      printf("\nNode found at position :%d", count);
  }
  return (Head);
}

Node *insertsort_list(Node *list, int x) {

  Node *p, *q, *new;
  new = (Node *)malloc(sizeof(Node));
  new->data = x;

  for (p = NULL, q = list; q != NULL && x > q->data; p = q, q = q->next)
    ;

  if (p == NULL) {
    list = new;
  } else {
    p->next = new;
  }
  new->next = q;
  return (list);
}

Node *delete_list(Node *Head, int x) {

  Node *p, *q;

  for (p = NULL, q = Head; q != NULL && x < q->data; p = q, q = q->next)
    ;

  p->next = q->next;
  free(q);
  return (Head);
}
