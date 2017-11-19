#include <stdio.h>

main()

{
  int i = 0;
  prnum(i);
}

prnum(int i) {
  printf("%3d", i);
  if (i >= 100) {
    exit(0);
  }
  i++;
  prnum(i);
}
