#include <stdio.h>

int main() {
  int a[6];
  int x, t, j, temp;

  for (j = 0; j < 6; j++) {
    printf("\nEnter %d No. To Store : \n", j + 1);
    scanf("%d", &a[j]);
    fflush(stdin);
  }
  for (x = 0; x < 5; x++) {
    for (j = 0; j < 5; j++) {
      if (a[j] > a[j + 1]) {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
  puts("\nWhat You Want to Sort The Numbers : ");
  puts("\n1. Ascending.\n");
  puts("\n2. Decending.\n");
  scanf("%d", &t);
  fflush(stdin);
  if (t == 1) {
    puts("\nAscending  Order : \n");
    {
      for (j = 0; j < 6; j++)
        printf("\n%d\n", a[j]);
    }
  } else if (t == 2) {
    puts("\nDecending Order : \n");
    for (j = 6; j > 0; j--) {
      printf("\n%d\n", a[j - 1]);
    }
  } else
    printf("Please Choose");
  return 0;
}
