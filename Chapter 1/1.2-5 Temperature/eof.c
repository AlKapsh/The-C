#include <stdio.h>

int main(int argc, char const *argv[]) {
  int c;

  int r = EOF;
  printf("%d %s\n", r, "- Value of EOF");

  /*You must use Ctrl-Z to get EOF, so after write come text in progamm click
    Ctrl-Z to stop while loop.*/

  while((c = getchar()) != EOF){
    putchar(c);
  }

  return 0;
}
