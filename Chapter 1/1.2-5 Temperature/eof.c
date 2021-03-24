#include <stdio.h>

int main(int argc, char const *argv[]) {
  int c;

  int r = EOF;
  printf("%d %s\n", r, "- Value of EOF");

  /*TODO: create normal exit from programm*/

  while((c = getchar()) != EOF){
    putchar(c);
  }

  return 0;
}
