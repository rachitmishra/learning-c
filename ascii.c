#include <stdio.h>
main() {
  int i = 97;
  while (1) {
    (i != 123) ? putchar(i++) : exit(0);
  }
}
