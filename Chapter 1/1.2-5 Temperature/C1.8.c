#include <stdio.h>

/*You must use Ctrl-Z to get EOF, so after write come text in progamm click
Ctrl-Z to stop while loop.*/

int main(int argc, char const *argv[]) {

  int c;
  int nl = 0;
  int tab = 0;
  int sp = 0;

  while((c = getchar()) != EOF){

    if(c == ' '){
      sp++;
    }
    else if(c == '\n'){
      nl++;
    }
    else if(c == '\t'){
      tab++;
    }

    putchar(c);
  }

  int r = EOF;
  printf("%d %s\n", r, "- Value of EOF");
  printf("%d%s\n%d%s\n%d%s\n", nl, " - Lines.", tab, " - Tabs.", sp, " - Spaces");
  return 0;
}
