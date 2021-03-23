#include <stdio.h>

int main(int argc, char const *argv[]) {
  /*При использовании эскейпа "\с" компилятор даст варнинг, но
    соберёт приложение и выведет символ "с" в месте вставки */
  printf("Hello \c World\n");
  return 0;
}
