#include <stdio.h>
main() {
  char name[150];
  int i = 0;
  puts("Enter Your Name\n");
  gets(name);

  while (name[i] != '\0') {
    if (name[i] == 'a' || name[i] == 'A')
      puts("\nString Contains a Vowel: A");
    if (name[i] == 'e' || name[i] == 'E')
      puts("\nString Contains a Vowel: E");
    if (name[i] == 'i' || name[i] == 'I')
      puts("\nString Contains a Vowel: I");
    if (name[i] == 'o' || name[i] == 'O')
      puts("\nString Contains a Vowel: O");
    if (name[i] == 'u' || name[i] == 'U')
      puts("\nString Contains a Vowel: U");
    else
      ("No Vowel Present");
    i++;
  }
}
