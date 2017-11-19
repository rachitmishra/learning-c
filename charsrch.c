#include <stdio.h>

main()

{
  int i, j, count = 0;
  char str[11], gr[4];
  gets(str);
  gets(gr);

  for (i = 0, j = 0; str[i] != '\0'; i++) {
    if (str[i] != gr[j]) {
      puts("\ncharacters nt found.");
      count++;
      break;
    }
  }
  i = 0;
  while (gr[j] != '\0') {
    if (str[i] == gr[j]) {
      j++;
      i++;
    } else
      break;
  }
}
