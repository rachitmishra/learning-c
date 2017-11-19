#include <stdio.h>
unsigned int foo(unsigned int n, unsigned int r);
main() { foo(513, 2); }

unsigned int foo(unsigned int n, unsigned int r) {
  printf("%d \t", n);
  printf("%d \n", r);
  if (n > 0)
    return ((n % r) + foo(n / r, r));
  else
    return 0;
}
