#include <stdio.h>

int bubblesort(int num[]);
main()

{

  int temp, num[11];
  puts("Enter numay Content : ");
  for (int i = 0; i < 11; i++)
    scanf("%d", num[i]);

  bubblesort(num[i]);
}

int bubblesort(int num[i]);
for (int i = 0; i < 11; i++) {
  for (j = 1; j < 10; j++) {
    if (num[j + 1] > num[j]) {
      temp = num[j + 1] num[j + 1] = num[j];
      num[j] = temp;
    }

    for (j = 1; j < 11; j++)
      cout << num[j];
  }
