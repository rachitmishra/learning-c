#include <stdio.h>

int factorial(int);
main()

{

  int n, store;

  puts("Enter Your Number :  ");
  scanf("%d", &n);

  store = factorial(n);
  printf("%d", store);
}

int factorial(int x) {
  if (x == 1)
    return (1);
  else
    return x * factorial(x--);
}
