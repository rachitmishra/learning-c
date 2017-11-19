#include <stdio.h>

int main()

{

  char ch = ' ';
  char name[15];

  while (ch != '0') {

    system("clear");
    puts("\n\tEnter Your Choice  : ");
    puts("    1. Create directory\n");
    puts("    2. List Directory\n");
    puts("    3. Remove directory\n");
    ch = getchar();
    fflush(stdin);

    switch (ch) {

    case '1':
      puts("\nCreating  A new directory : ");
      puts("Enter Directory Name : ");
      gets(name);
      system();
      mkdir name;
      break;

    case '2':
      puts("\nList Directory : ");
      system("ls -l");
      break;

    case '3':
      puts("\nRemove directory : ");
      puts("Enter Directory Name : ");
      gets(name);
      system("rmdir (name)");
      break;

    default:
      puts("\nNo Choice Entered");
    }

    return 0;
  }
}
