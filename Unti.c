#include <stdio.h>

main() {
  int i = 1, a, b, num1 = 0, num2 = 0;

  do {
    printf("\nEnter Your Digit\n");
    scanf("%d", &a);

    if (a > 0)
      num1++;
    else
      num2++;

    i++;
  } while (i <= 10 && a != 0);

  printf(
      "\nNo. Of Positive Nos. Entered : %d\nNo of Negative Values Entered : %d",
      num1, num2);
}
