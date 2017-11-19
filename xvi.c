#include <stdio.h>

void main() {
  int num1, num2, num3, greater;
  greater = num1;

  printf(" Enter three numbers : ");
  scanf("%d%d%d", &num1, &num2, &num3);
  if (num2 > greater)
    greater = num2;
  if (num3 > greater)
    greater = num3;

  printf("largest of three is : %d", greater);
}
