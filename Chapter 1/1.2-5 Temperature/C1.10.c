#include <stdio.h>

int main(int argc, char const *argv[]) {
  /*
  Пока не определяются символы забоя, решается через getch или переводом
  консоли в канон режим. 
  */
  char c;

  while((c = getchar()) != EOF){

    if(c == '\t'){
      putchar('\\');
      putchar('t');
    }
    else if (c == '\b'){
      printf("%s", "\\b");
    }
    else if (c == '\\'){
      putchar('\\');
      putchar('\\');
    }
    else
      putchar(c);
  }
  return 0;
}
