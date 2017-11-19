#include <stdio.h>
int main() {
  int i = 0;
  printf("All the ASCII values between 0-255 : ");
  while (i <= 255) {
    printf("ASCII Value : %d  \tEquivalent Character : %c\n", i, i);
    i++;
  }
  return 0;
}
