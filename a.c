#include <conio.h>
#include <stdio.h>

void main() {
  int n, rev = 0, rem_d;

  clrscr();
  printf("Enter the number to reverse\n");
  scanf("%d", &n);

  while (n > 0) {
    rem_d = n % 10;
    rev = rev * 10 + rem_d;
    n = n / 10;
  }
  printf("\nReverse of a given number is %d", rev);
  getch();
}
