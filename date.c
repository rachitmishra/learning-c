#include <stdio.h>

main() {
  int dd, mm, yyyy;
  printf("Enter the Date in formt DD/MM/YYYY :\a");
  scanf("%d/%d/%d", &dd, &mm, &yyyy);
  printf("You Entered the Date : %d%.2d%d", yyyy, mm, dd);
}
