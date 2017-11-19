/*Calculating Words Of A string*/

#include <stdio.h>

main()

{

  char str[100];
  puts("Enter Your String :");
  gets(str);

  int i = 0, word = 1;
  while (str[i] != '\0') {
    if (str[i] == ' ')
      word++;

    i++;
  }
  printf("%d", word);
}
