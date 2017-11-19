#include <stdio.h>

int main() {

  int name[5][10];
  int x, y, , i = 1, j = 1, ch;
  system("clear");
  puts("\n|||\tWelcome !! Enter Your Frnd's Name : \t|||\n");
  for (x = 1; x <= 5; x++) {
    for (y = 1; y <= 10; y++)
      scanf("\n%d", &name[x][y]);
  }
  do {
    puts("\n____________________________");
    puts("\n\tWhat you want to do : \n");
    puts("\t1.Enter Name Again : ");
    puts("\t2.Print The Names Entered : ");
    puts("\t3.Quit !!");
    puts("\nEnter Your Choice(1-3):");
    scanf("\n%d", &ch);
    puts("\n____________________________");

    if (ch == 1) {
      puts("\n\n\tEnter Name : ");
      for (x = 2; x <= 5; x++) {
        for (y = 1; y <= 10; y++)
          scanf("\n%d", &name[x][y]);
      }
    } else if (ch == 2) {
      puts("\n\t Names Entered Till Now : \n");
      for (i = 1; i < x; i++) {
        for (j = 1; j < y; j++)
          printf("\n%d", name[i][j]);
      }
    }
  } while (ch != 3);
  return 0;
}
