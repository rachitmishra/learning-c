#include <conio.h>
#include <stdio.h>
void main() {
  int num = 123;
  printf("\aLeft Justified : |%-4d|", num);
  printf("\nRight Justified : |%4d|", num);
  getch();
}
