#include <stdio.h>

main()

{

  int i, j;
  int sum;
  puts("\nEnter Your Number : ");
  scanf("%d", &i);

  printf("\n");

  for (j = 0; j <= i; j++)

  {
    i += j;
  }

  printf("%d", i);
}
