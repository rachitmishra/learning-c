#include <stdio.h>

int sum(int, int);

int main(int argc, char *argv[]) {
  printf("%d", sum((int)argv[1], (int)argv[2]));
  return 0;
}

int sum(int a, int b) { return a + b; }
