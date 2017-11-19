#include <stdio.h>

main() {

  char str[200];
  FILE *p_t, *f_t;
  char ch;
  int a = 0, b = 0, c = 0, d = 0;

  p_t = fopen("demo.txt", "r");
  if (p_t == NULL) {
    puts("Source file cannot be opened.");
    exit(0);
  }

  f_t = fopen("demo2.txt", "a");
  if (f_t == NULL) {
    puts("Destination file cannot be opened.");
    exit(0);
  }

  puts("\n Enter few lines");
  while (strlen(gets(str)) > 0) {

    fputs(str, f_t);
    fputs("\n", f_t);
    /*ch=fgetc(p_t);

    if(ch==EOF)
    break;
    else
    fputc(ch,f_t);
    a++;
    if(ch==' ')
    b++;
    if(ch=='\n')
    c++;
    if(ch=='\t')
    d++;
    printf("%c",ch);*/
  }
  fclose(p_t);
  fclose(f_t);
  /*printf("\nNo. Of Characters : %d",a);
  printf("\nNo. Of Whitespaces : %d",b);
  printf("\nNo. Of Newlines : %d",c);
  printf("\nNo. Of Tabspaces : %d",d);*/
}
