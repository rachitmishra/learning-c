#include <stdio.h>

main() {

  FILE *pt;

  struct emp {
    char name[50];
    int age;
    int salary;
  };
  struct emp e;

  pt = fopen("demo.dat", "wb");

  if (pt == NULL) {
    puts("\nFile Can't be Opened");
    exit(0);
  }

  while (fread(&e, sizeof(e), 1, pt) == 1) {
    printf("\nEmployee details : ");
    printf("%s%d%d", e.name, &e.age, &e.salary);
    fflush(stdin);
  }

  fclose(pt);
}
